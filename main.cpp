#include <bits/stdc++.h>
#include "BinTree.h"

using namespace std;

int main() {

    char choice;
    string input;

    for (int i = 0; i < 3; i++) {

        cout << endl << endl
        << "a - " << endl
        << "b - " << endl
        << "c - " << endl
        << "d - " << endl
        << "e - " << endl
        << "f - " << endl
        << "g - " << endl
        << "h - " << endl
        << "i - " << endl
        << "x - " << endl << endl;

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
