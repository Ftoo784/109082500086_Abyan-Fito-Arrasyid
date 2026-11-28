#include <iostream>
#include "bstree.h"

using namespace std;

int main() {
    cout << "Hello World" << endl;
    address root = Nil;

    insertNode(root, 1);
    insertNode(root, 2);
    insertNode(root, 6);
    insertNode(root, 4);
    insertNode(root, 5);
    insertNode(root, 3);
    insertNode(root, 6);
    insertNode(root, 7);

    // Latihan 1
    cout << "In-order   : ";
    printInorder(root);
    cout << endl;

    // Latihan 2
    cout << "kedalaman  : " << hitungKedalaman(root, 0) << endl;
    cout << "jumlah node: " << hitungJumlahNode(root) << endl;
    cout << "total      : " << hitungTotalInfo(root, 0) << endl;

    // Latihan 3
    cout << "Pre-order  : ";
    printPreorder(root);
    cout << endl;

    cout << "Post-order : ";
    printPostorder(root);
    cout << endl;

    return 0;
}