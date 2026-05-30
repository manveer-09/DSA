#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class Linkedlist{
    public:
    Node* head;
    Node* tail;
    int size;
    Linkedlist(){
        head=tail=NULL;
        size=0;
    }
    void insertAtEnd(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertAtIdx(int idx,int val){
        if(idx<0 ||idx>size)  cout<<"Invalid Index"<<endl;
        else if (idx==0) insertAtHead(val);
        else if (idx==size) insertAtEnd(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }
    void deleteAtHead(){
        if(head==NULL){
            cout <<"ll is empty"<<endl;
            return;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    void deleteAtTail(){
        if(head==NULL){
            cout <<"ll is empty"<<endl;
            return;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    void deleteAtIdx(int idx){
        if(size==0){
            cout<<"List is empty";
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            Node* delNode=temp->next;
            temp->next=temp->next->next;
            delete delNode;
        }
    }
    int getAtIdx(int idx){
        if(idx<0 ||idx>size){
            cout<<"Invalid index";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size) return tail->val;
        else{
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main (){
    Linkedlist ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.insertAtHead(38);
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAtIdx(2,70);
    ll.display();
    ll.insertAtIdx(3,71);
    ll.display();
   // cout<<ll.getAtIdx(5);
   // ll.deleteAtHead();
    //ll.deleteAtHead();
   // ll.deleteAtTail();
    ll.deleteAtIdx(3);
    ll.deleteAtIdx(1);
    ll.display();
}