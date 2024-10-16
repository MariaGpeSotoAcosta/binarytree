#ifndef BINARYTREE_H
#define BINARYTREE_H
using namespace std;
struct Node{
int data;
Node* right;
Node* left;
Node(int value);
};
class binarytree
{
    public:
        Node* root;
        binarytree();
        virtual ~binarytree();
    BinaryTree();
    Node* insert(Node* node, int value);
    //void preorder(Node* node);

#endif // BINARYTREE_H
