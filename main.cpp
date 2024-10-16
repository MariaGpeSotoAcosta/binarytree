#include <iostream>
#include "binarytree.h"

using namespace std;

int main()
{
    binarytree tree;
    tree.root=tree.insert(tree.root,value:50);
    tree.root=tree.insert(tree.root,value:50);
    tree.root=tree.insert(tree.root,value:50);
     tree.root = tree.insert(tree.root, 20);
    tree.root = tree.insert(tree.root, 40);
    tree.root = tree.insert(tree.root, 60);
    tree.root = tree.insert(tree.root, 80);

    cout << "Recorrido in-orden: ";
    tree.inOrderTraversal(tree.root);
    cout << endl;

    cout << "Recorrido pre-orden: ";
    tree.preOrderTraversal(tree.root);
    cout << endl;

    cout << "Recorrido post-orden: ";
    tree.postOrderTraversal(tree.root);
    cout << endl;

    int valueToSearch = 30;
    Node* result = tree.search(tree.root, valueToSearch);
    if (result != nullptr) {
        cout << "Valor " << valueToSearch << " encontrado en el árbol." << endl;
    } else {
        cout << "Valor " << valueToSearch << " no encontrado en el árbol." << endl;
    }

    int valueToRemove = 30;
    tree.root = tree.remove(tree.root, valueToRemove);
    cout << "Después de eliminar " << valueToRemove << ", recorrido in-orden: ";
    tree.inOrderTraversal(tree.root);
    cout << endl;

    return 0;
}
    
