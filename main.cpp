#include <bits/stdc++.h>
#include "BinTree.h"

#define RUN true
#define STOP false

using namespace std;

int main() {

    BinTree tree;

    char choice;
    string input;
    bool loop = RUN;

    while (loop) {

        cout << endl << endl
        << "a - Create binary tree" << endl // dorobit
        << "b - Create left child" << endl //ok
        << "c - Create right child" << endl //ok
        << "d - Set to root" << endl //ok
        << "e - Set to left child" << endl //ok
        << "f - Set to right child" << endl //ok
        << "g - Set active item to parent" << endl
        << "h - Show active item and left and right data" << endl //ok
        << "i - Start game" << endl
        << "x - exit" << endl << endl;

        cin >> choice;

        switch (choice) {

            case 'a':
                tree.createTree();
                break;

            case 'b':
                tree.createLeftChild();
                break;

            case 'c':
                tree.createRightChild();
                break;

            case 'd':
                tree.positionRoot();
                break;

            case 'e':
                tree.positionLeft();
                break;

            case 'f':
                tree.positionRight();
                break;

            case 'g':
                tree.positionBack();
                break;

            case 'h':
                tree.positionActual();
                break;

            case 'i':
                tree.game();
                break;

            case 'x':
                loop = STOP;
                break;

            default:
                cout << endl << "Bad input" << endl;
        }
    }
    return 0;
}
