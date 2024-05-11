/* 
{
    "value":4,
    "left":nullptr,
    "right":nullptr,
} 

*/


class node{
public:

    int data;
    node* left;
    node* right;

    node(int value){
        this->data=value;
        left=nullptr;
        right=nullptr;
    }
};

//todo: to crate a new node from the class node 
// node* newNode =new node(value)

    //todo: create node function that makes new node
   /*  void createNode(int value){
        node* newNode = new node(value);
        newNode->data=value;
    }
 */


class BinarySearchTree{
public:


    node* root;
    BinarySearchTree(){
        
        root = nullptr;
    };



};