// #include <bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node
{
    int value;
    Node *left;
    Node *right;
    Node(int val)
    {
        value = val;
        left = NULL;
        right = NULL;
    }
};

Node* insetBST(Node *root, int value)
{
    if (root == NULL)
    {
        return new Node(value);
    }
    if (value < root->value)
    {
        root->left = insetBST(root->left, value);
    }
    else
    {

        root->right = insetBST(root->right, value);
    }

    return root;
}

Node* searachInBST
// it gives sorted order binary search tree
void inOrder(Node *root){
    if(root == NULL) return;
    inOrder(root->left);
    cout<<root->value<<" ";
    inOrder(root->right);
}


int main()
{
    // as we make the fuction return type pointer so, we have to create pointer type object;
    Node *root = NULL;
    root =insetBST(root,5);
    insetBST(root,1);
    insetBST(root,3);
    insetBST(root,4);
    insetBST(root,2);
    insetBST(root,7);

    //print in InOrder format in DFS
    inOrder(root);
    cout<<endl;


    return 0;
}