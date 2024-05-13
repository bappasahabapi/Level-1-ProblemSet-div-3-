#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int value;
    node *left;
    node *right;

    node(int value)
    {
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
};

void printLevelWise(node *root)
{

    if (root == nullptr)
    {
        cout << "Tree is empty!" << endl;
        return;
    }

    queue<node *> q;

    // O-th level
    q.push(root);
    q.push(NULL);
    cout << "0 th level: " << root->value << endl;

    // loop is working till the queue is not empty size
    while (!q.empty())
    {
        node *node = q.front();
        q.pop(); // value / NULL

        // if front element of  queue is not null 
        if (node != NULL)
        {
            cout << node->value << " ";

            if (node->left)
                q.push(node->left);
            if (node->right)
            {
                q.push(node->right);
            }
        }

        // if queue is null
        else if (!q.empty())
        {
            q.push(NULL);
        }
        // if queue is both null and empty we break out the loop
    }
    cout << endl;
}

int main()
{

    node *root = new node(0);

    root->left = new node(1);
    root->right = new node(2);

    root->left->left = new node(3);
    root->left->right = new node(4);

    root->right->left= new node(5);
    root->right->right=new node(6);

    printLevelWise(root);

    return 0;
}