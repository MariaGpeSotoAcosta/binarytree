#include "binarytree.h"
using namespace std;
Node::Node(int value){
data=value;
left=nullptr;
right=nullptr;
}
binarytree::binarytree()
{
    root = nullptr;
}

Node* BinaryTree::insert(Node *node, int value){
    if(node==nullptr){
        return new Node(value);
    }
    if(value < node->data){
        node->left = insert(node->left, value);
    }else{
    node->right = insert(node->right, value);
    }
    return node;
}

binarytree::~binarytree()
{
    //dtor
}
