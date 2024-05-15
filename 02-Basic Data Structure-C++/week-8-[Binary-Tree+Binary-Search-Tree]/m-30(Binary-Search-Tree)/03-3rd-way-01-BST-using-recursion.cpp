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

Node *insertInBST(Node *root, int value)
{
    if (root == NULL)
    {
        return new Node(value);
    }
    if (value < root->value)
    {
        root->left = insertInBST(root->left, value);
    }
    else
    {

        root->right = insertInBST(root->right, value);
    }

    return root;
}

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
    root =insertInBST(root,5);
    insertInBST(root,1);
    insertInBST(root,3);
    insertInBST(root,4);
    insertInBST(root,2);
    insertInBST(root,7);

    //print in InOrder format in DFS
    inOrder(root);
    cout<<endl;


    return 0;
}