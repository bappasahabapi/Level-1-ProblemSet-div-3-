#include<bits/stdc++.h>
using namespace std;



class Node{
public:    
    int value;
    Node *next;
    Node *pre;

    Node(int value){
        this->value=value;
        this->next=NULL;
        this->pre=NULL;
    };

} ;

class DoublyLinkedList{
public:
    Node *head;
    Node *tail;
    int size;

    DoublyLinkedList(){
        this->head=NULL;
        this->tail=NULL;
        size=0;
    };

    // Insert a node with the value in the head
    void insertAtHead(int value){
        size=size+1;
        Node *newNode =new Node(value); 
        if(head==NULL){
            head = newNode;
            tail=newNode;
            return;
        }
        Node *temp = head;
        newNode->next=temp;
        temp->pre=newNode;
        head=newNode;
        

    };

    // Traverse And print function
    void traverseAndPrint(){
        Node *printNode = head;
        while(printNode != NULL){
            cout<<printNode->value<<endl;
            printNode =printNode->next;
        }
        cout<<"\n";
    };

    int getSize()
    {
        return size;
    }


};

int main(){

    cout<<"Printed List: "<<"\n";
    DoublyLinkedList dl;

    dl.insertAtHead(10);
    dl.insertAtHead(50);
    dl.insertAtHead(5);

    dl.traverseAndPrint();
     cout<<"size of the DDL is = "<<dl.getSize()<<endl;



    return 0;
}