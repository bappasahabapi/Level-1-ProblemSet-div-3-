#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
};

class BST
{
public:
    Node *root;

    BST()
    {
        root = nullptr;
    }

    // insert node [easiest way]
    void insert(int value)
    {
        Node *newNode = new Node(value);

        // case 1: root is null
        if (root == nullptr)
        {
            root = newNode;
            return;
        }

        // case 2: root is not null
        Node *currentNode = root;
        while (currentNode != nullptr)
        {

            // Rule-1: handle duplication value
            if (currentNode->value == newNode->value)
            {
                cout << "Break BST rule "<<newNode->value << endl;
                return;
            }

            // Rule-2:
            if (newNode->value < currentNode->value)
            {
                if (currentNode->left == nullptr)
                {
                    // currentNode er left e newNode k rakbo
                    currentNode->left = newNode;
                    return;
                }
                // otherwise currentNode k currentNode er left e point kore rakbo
                currentNode = currentNode->left;
            }
            // Rule-3
            if (currentNode->value < newNode->value)
            {
                if (currentNode->right == nullptr)
                {
                    currentNode->right = newNode;
                    return;
                }
                currentNode = currentNode->right;
            }
        }
    }

    void BFS()
    {
        queue<Node *> myQueue;
        myQueue.push(root);

        while (myQueue.size() > 0)
        {
            Node *currentNode = myQueue.front();
            myQueue.pop();
            cout << currentNode->value << " ";
            if (currentNode->left != nullptr)
            {
                myQueue.push(currentNode->left);
            }
            if (currentNode->right != nullptr)
            {
                myQueue.push(currentNode->right);
            }
        }
    }
};

int main()
{

    BST bst;
    bst.insert(6);
    bst.insert(4);
    bst.insert(3);
    bst.insert(5);
    bst.insert(7);
    bst.insert(8);
    bst.insert(8);
    cout<<endl;
    bst.BFS();
    cout<<endl;

    return 0;
}

    /*
        EXPECTED OUTPUT:
        ----------------
        Breadth First Search:
        6,4,7,3,5,8

    */ 