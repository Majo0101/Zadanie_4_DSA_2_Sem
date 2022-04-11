#include <bits/stdc++.h>

#include <utility>
#include "BinTree.h"

#define ZERO 0
#define RESTRT_CNTR 0;
#define CLEAR_STRING "EMPTY"
#define CLEAR_CHOICE 'n'

#define file "tree.txt"

using namespace std;

void BinTree::createTree() {

    char choice = ZERO;
    ifstream tree(file);

    cout << endl
    << "a - Read tree from file" << endl
    << "b - Create new root" << endl;

    cin >> choice;

    if(choice == 'a'){
        if (tree.is_open()){

            // nacitat strom zo suboru


        }else{
            cout << "Somethings went wrong with file" << endl;
        }
    }

    if (choice == 'b'){
        if (root == NULL){

            setRoot(CLEAR_STRING);
            cout << "Tree was created..."<< endl;

        }else{

            cout << "There are a data !"<< endl;
            cout << "Create new tree (y/n) ?" << endl;
            cin >> choice;

            if (choice == 'y'){



                //vymazat stary strom

            }else{
                fflush(stdin);
            }
        }
    }

    if(choice != 'a' && choice != 'b'){
        cout << "Bad input !!" << endl;
    }
}

void BinTree::positionRoot() {

    string data;
    char choice;

    if (root != NULL){
        position = root;
        cout << "DATA: "<< position->data << endl;
        cout << "Do you want to change the data (y/n) ?" << endl;
        cin >> choice;

        if (choice != 'y' && choice != 'n'){
            cout << "Bad input !!" << endl;
        }

        if (choice == 'y'){
            cout << "Enter data:" << endl;
            cin >> data;
            position->data = move(data);
        }

    }else{
        cout << "Tree doesn't exist !!" << endl;
    }

    data = CLEAR_STRING;
    choice = CLEAR_CHOICE;

}

void BinTree::positionLeft() {

    char choice;
    string data;
    Node*tmp;

    if (root != NULL){

        if(position != NULL && position ->left != NULL){
            tmp = position->left;
            position = tmp;
            cout << "DATA: " << position->data << endl;
            cout << "Do you want to change the data (y/n) ?" << endl;
            cin >> choice;

            if (choice != 'y' && choice != 'n'){
                cout << "Bad input !!" << endl;
            }

            if (choice == 'y'){
                cout << "Enter data:" << endl;
                cin >> data;
                position->data = move(data);
            }

        }else{
            cout << "Left leaf doesn't exist" << endl;
        }

    }else{
        cout << "Tree doesn't exist !!" << endl;
    }

    data = CLEAR_STRING;
    choice = CLEAR_CHOICE;
}

void BinTree::positionRight() {

    char choice;
    string data;
    Node*tmp;

    if (root != NULL){

        if(position != NULL && position ->right != NULL){
            tmp = position->right;
            position = tmp;
            cout << "DATA: " << position->data << endl;
            cout << "Do you want to change the data (y/n) ?" << endl;
            cin >> choice;

            if (choice != 'y' && choice != 'n'){
                cout << "Bad input !!" << endl;
            }

            if (choice == 'y'){
                cout << "Enter data:" << endl;
                cin >> data;
                position->data = move(data);
            }

        }else{
            cout << "Right leaf doesn't exist" << endl;
        }

    }else{
        cout << "Tree doesn't exist !!" << endl;
    }

    data = CLEAR_STRING;
    choice = CLEAR_CHOICE;
}

void BinTree::positionActual() {

    char choice;
    string data;

    if (root != NULL){

        if (position != NULL){
            cout << "DATA parent: " << position->data << endl;

            cout << "Do you want to change the parent data (y/n) ?" << endl;
            cin >> choice;

            if (choice != 'y' && choice != 'n'){
                cout << "Bad input !!" << endl;
            }

            if (choice == 'y'){
                cout << "Enter data:" << endl;
                cin >> data;
                position->data = move(data);
            }

            if (position->left != NULL){
                cout << "DATA left leaf: " << position->left->data << endl;
            }else{
                cout << "Left leaf doesn't exist" << endl;
            }

            if (position->right != NULL){
                cout << "DATA left leaf: " << position->right->data << endl;
            }else{
                cout << "Right leaf doesn't exist" << endl;
            }

        }else{
            cout << "No position" << endl;
        }

    }else{
        cout << "Tree doesn't exist !!" << endl;
    }

    data = CLEAR_STRING;
    choice = CLEAR_CHOICE;
}

void BinTree::postionBack() {

}





void BinTree::setRoot(string in) {

    if (root != NULL){

        root->data = move(in);

    }else{

        Node *tmp = new Node;
        tmp->data = CLEAR_STRING;
        tmp->left = tmp->right = NULL;
        root = tmp;

    }
}













BinTree::BinTree() {
    root = NULL;
    position = NULL;
}

BinTree::~BinTree() {

    ofstream tree(file);

    if (!tree.is_open()){
        cout << "Somethings went wrong" << endl;
    }else{

        // zapisat do suboru


    }

}

void BinTree::printRoot() {

    if(root != NULL){
        cout << root->data << endl;
    }else{
        cout << "Tree doesn't exist !!" << endl;
    }
}











