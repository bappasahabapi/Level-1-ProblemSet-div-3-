#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node *parent;
};

class BinaryTree
{
public:
    node *root;
    BinaryTree()
    {
        root = nullptr;
    }

    // Create node clss
    node *CreateNewNode(int value)
    {
        node* newNode = new node();
        newNode->data = value;
        newNode->left = nullptr;
        newNode->right = nullptr;
        newNode->parent = nullptr;

        return newNode;
    };

    void BFS()
    {
        queue<node*> q;
        // std::queue<node *> q;
        q.push(root);

        while (!q.empty())
        {
            node *a = q.front();
            q.pop();

            // handle cornar case
            int p = -1, l = -1, r = -1;
            if (a->left != nullptr)
            {
                l = a->left->data;
                q.push(a->left); // meas a.left point which vlaue is pushed to queue
            }
            if (a->right != nullptr)
            {
                r = a->right->data;
                q.push(a->right);
            }

            if (a->parent != nullptr)
            {

                p = a->parent->data;
            }

            cout<<"Node value: "<<a->data ;
            cout<<"Left Child: "<<a->l;
            cout<<"Right Child: "<<a->r;
            cout<<"Parent is: "<<p<<endl;

        }
    }
};

int main()
{
    BinaryTree bt;
    bt.BFS();
    return 0;
}
