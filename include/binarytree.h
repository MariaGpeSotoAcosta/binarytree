#ifndef BINARYTREE_H
#define BINARYTREE_H
using namespace std;
struct Node{
int data;
Node* right;
Node* left;
Node(int value);
};
class BinaryTree {
public:
    Node* Root;

    BinaryTree();
    Node* Insert(Node* node, int value);
    Node* Search(Node* node, int value);
    Node* Remove(Node* node, int value);
    void InOrderTraversal(Node* node);
    void PreOrderTraversal(Node* node);
    void PostOrderTraversal(Node* node);

private:
    Node* FindMin(Node* node);
};

#endif // BINARYTREE_H

