#include <bits/stdc++.h>
#include "BinTree.h"

#define ZERO 0
#define RESTRT_CNTR 0;
#define CLR_STR "\0"


using namespace std;

int main() {

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



                i--;
                break;

            case 'b':


                i--;
                break;

            case 'c':


                i--;
                break;
            case 'd':


                i--;
                break;

            case 'e':


                i--;
                break;

            case 'f':


                i--;
                break;
            case 'g':


                i--;
                break;

            case 'h':


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
