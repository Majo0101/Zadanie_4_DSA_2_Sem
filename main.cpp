#include <bits/stdc++.h>
#include "BinTree.h"

#define ZERO 0
#define RESTRT_CNTR 0;
#define CLR_STR "\0"


using namespace std;

int main() {

    BinTree tree;

    char choice;
    string input;

    for (int i = 0; i < 3; i++) {

        cout << endl << endl
        << "a - Create binary tree" << endl
        << "b - Create left child" << endl
        << "c - Create right child" << endl
        << "d - Set to root" << endl
        << "e - Set to left child" << endl
        << "f - Set to right child" << endl
        << "g - Set active item to parent" << endl
        << "h - Show active item and left and right data" << endl
        << "i - Start game" << endl
        << "x - exit" << endl << endl;

        cin >> choice;

        switch (choice) {

            case 'a':
                tree.createTree();
                i--;
                break;

            case 'b':


                i--;
                break;

            case 'c':


                i--;
                break;
            case 'd':
                tree.positionRoot();
                i--;
                break;

            case 'e':
                tree.positionLeft();
                i--;
                break;

            case 'f':
                tree.positionRight();
                i--;
                break;
            case 'g':


                i--;
                break;

            case 'h':
                tree.positionActual();
                i--;
                break;

            case 'i':

                i--;
                break;

            case 'x':



                i = 5;
                break;

            default:
                i--;
                cout << endl << "Bad input" << endl;
        }
    }
    return 0;
}
