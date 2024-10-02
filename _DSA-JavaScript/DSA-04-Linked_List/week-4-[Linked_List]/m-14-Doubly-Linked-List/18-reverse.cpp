
/* 
ekhane next  pointer ebong previous pointer  k swap korlei kaj hoye jabe

1. last node kujhe ber korte hbe and heead k sekhane point korte blote hbe
    
2. next head theke jabo ebong 'next ', 'previous' k swap kore dibo

3. last e head k update kore dibo a te
 */

// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

class node{
public:
    int data;
    node *next;
    node *previous;
};

class DoublyLinkedList{
public:
    node *head;
    int size;
    DoublyLinkedList()
    {
        head=NULL;
        size=0;
    }

    //todo: Creates a new node with the given data and returns a node pointer; (O(1))
    node *CreateNewNode(int data)
    {
        node *new_node =new node;
        new_node->data=data;
        new_node->next=NULL;
        new_node->next=NULL;
        return new_node;

    }
    //todo: inserta  a node with given data at head (O(1))
    void InsertAtHead(int data)
{
        size++;
        node *new_node =CreateNewNode(data);
        if(head ==NULL)
        {
            head =new_node;
            return;
        }
        node *a =head;
        new_node->next=a;
        a->previous=new_node;
        head=new_node;
    }

    //todo: insert a given data  at given  index.(O(n))
    void InsertAtAnyIndex(int index, int data)
    {
        if(index>size)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(data);
            return;
        }
        node *a =head;
        int current_index =0;
        while(current_index!=index-1)
        {
            a=a->next; 
            current_index++;
        }
        // a =current_index -1 thakbe
        node *new_node= CreateNewNode(data);
        new_node->next=a->next;
        new_node->previous=a;

        node *b=a->next;
        b->previous=new_node;
        a->next=new_node;
        size++;

    }

    //todo: print the doubly linked list (O(n))
    void Traverse()
    {
        node *a =head;
        while (a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
        
    }
    //todo: print the size (O(1))
    int getSize()
    {
        return size;
    }

    //todo: delets the given index O(n)
    void DeleteAtGivenIndex(int index)
    {
        if(index >=size)
        {
            cout<<"index does not exist"<<endl;
            return;
        }
        node *a =head;
        int current_index=0;
        while(current_index !=index)
        {
            a =a->next;
            current_index++;
        }
        node *b =a->previous;
        node *c =a->next;
        if(b!=NULL)
        {
            b->next =c;
            
        }
        if(c!=NULL)
        {
            c->previous=b;
        }
        delete a;
        if(index==0)
        {
            head =c;
        }
        size--;
        
    }

    //todo: reverse O(n)
    void Reverse()
    {
        if(head==NULL)
        {
            return;
        }
        node *a =head;
        int current_index =0;
        //size-1 holo last index
        while(current_index !=size-1)
        {
            a =a->next;
            current_index++;
        }
        // now last index is in a
        
        node *b =head;
        while(b!=NULL)
        {
            swap(b->next,b->previous);
            b=b->previous;
        }
        head =a;
    }



};



int main()
{
    cout<<"Printed List: ";
    DoublyLinkedList dl;

    dl.InsertAtHead(10);
    dl.InsertAtHead(5);
    dl.InsertAtHead(1);

    dl.Traverse();
    // cout<<"size is->  "<<dl.getSize()<<endl;

    dl.InsertAtAnyIndex(2,100);
    dl.Traverse();
    cout<<"size is->  "<<dl.getSize()<<endl;
    cout<<"Reverse ->";

    dl.Reverse();
    dl.Traverse();

    // dl.DeleteAtGivenIndex(1);
    // dl.Traverse();
    // cout<<"size is->  "<<dl.getSize()<<endl;
   



    return 0;
}