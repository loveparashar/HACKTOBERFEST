#include<iostream>
using namespace std;
class node{
  public :
    int data;
    node* next;
    node* prev;
    node(int data){
        this->data = data;
        next=NULL;
        prev=NULL;
    }
};
class doubly_LL{
  public:
    node* head;
    node* tail;
    int size;
    doubly_LL(){
        head=NULL;
        tail=NULL;
    }
    void push(int data){
        //creating a new node
        node* newnode= new node(data);
        if(head==NULL{
            head=newnode;
            tail=newnode;
        }
        else{
            newnode->prev=tail;
            tail->next=newnode;
            tail=newnode;
        }
        size++;
    }
    void delete(){
        if(head==NULL){
            return;
        }
        node* ptr=head;
        head=head->next;
        ptr->next=NULL;
        ptr->prev=NULL;
        delete ptr;
    }
};