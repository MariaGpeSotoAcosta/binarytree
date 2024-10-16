#include "binarytree.h"
using namespace std;
Node::Node(int value){
data=value;
left=nullptr;
right=nullptr;
}
BinaryTree::BinaryTree()
{
    root = nullptr;
}

Node* BinaryTree::Insert(Node* node, int value) {
    if (node == nullptr) {
        return new Node(value);
    }

    if (value < node->Data) {
        node->Left = Insert(node->Left, value);
    } else if (value > node->Data) {
        node->Right = Insert(node->Right, value);
    }

    return node;
}

Node* BinaryTree::Search(Node* node, int value) {
    if (node == nullptr || node->Data == value) {
        return node;
    }

    if (value < node->Data) {
        return Search(node->Left, value);
    }

    return Search(node->Right, value);
}

Node* BinaryTree::Remove(Node* node, int value) {
    if (node == nullptr) {
        return node;
    }

    if (value < node->Data) {
        node->Left = Remove(node->Left, value);
    } else if (value > node->Data) {
        node->Right = Remove(node->Right, value);
    } else {
        if (node->Left == nullptr) {
            Node* temp = node->Right;
            delete node;
            return temp;
        } else if (node->Right == nullptr) {
            Node* temp = node->Left;
            delete node;
            return temp;
        }

        Node* temp = FindMin(node->Right);
        node->Data = temp->Data;
        node->Right = Remove(node->Right, temp->Data);
    }
    return node;
}



BinaryTree::~BinaryTree()
{
    //dtor
}
