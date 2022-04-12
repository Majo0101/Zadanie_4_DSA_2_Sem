#include <bits/stdc++.h>
#include <utility>
#include "BinTree.h"

#define CLEAR_STRING "EMPTY"
#define file "tree.txt"
#define AND &&

using namespace std;

BinTree::BinTree() {
    root = NULL;
    position = NULL;
}

void BinTree::createRoot() {

    Node *tmp = new Node;
    tmp->data = CLEAR_STRING;
    tmp->left = tmp->right = NULL;
    root = tmp;

    position = root;

    cout << "Tree was created..."<< endl;
}

void BinTree::createTree() {

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

            createRoot();

        }else{

            cout << "There are a data !"<< endl;
            cout << "Create new tree (y/n) ?" << endl;
            cin >> choice;

            if (choice == 'y'){

                delTree(root);
                root = position = NULL;
                createRoot();
                choice = 'b';

            }
        }
    }

    data.clear();

    if(choice != 'a' AND choice != 'b'){
        cout << "Bad input !!" << endl;
    }
} // citanie zo suboru

void BinTree::createLeftChild() {

    if (root != NULL){

        if (position != NULL){

            if (position->left == NULL){

                Node*leaf = new Node;
                leaf->data = CLEAR_STRING;
                leaf->left = leaf->right = NULL;
                position->left = leaf;

                cout << "Left leaf was created" << endl;

                cout << "Do you want to change the data (y/n) ?" << endl;
                cin >> choice;

                if (choice != 'y' && choice != 'n'){
                    cout << "Bad input !!" << endl;
                }

                if (choice == 'y'){
                    cout << "Enter data:" << endl;
                    cin.sync();
                    getline(cin,data);
                    position->left->data = move(data);
                }

            }else{
                cout << "Left leaf is exist !!" << endl;
            }

        }else{
            cout << "No position" << endl;
        }

    }else{
        cout << "Tree doesn't exist !!" << endl;
    }

    data.clear();
}

void BinTree::createRightChild() {

    if (root != NULL){

        if (position != NULL){

            if (position->right == NULL){

                Node*leaf = new Node;
                leaf->data = CLEAR_STRING;
                leaf->left = leaf->right = NULL;
                position->right = leaf;

                cout << "Right leaf was created" << endl;

                cout << "Do you want to change the data (y/n) ?" << endl;
                cin >> choice;

                if (choice != 'y' && choice != 'n'){
                    cout << "Bad input !!" << endl;
                }

                if (choice == 'y'){
                    cout << "Enter data:" << endl;
                    cin.sync();
                    getline(cin,data);
                    position->right->data = move(data);
                }

            }else{
                cout << "Left leaf is exist !!" << endl;
            }

        }else{
            cout << "No position" << endl;
        }

    }else{
        cout << "Tree doesn't exist !!" << endl;
    }

    data.clear();

}

void BinTree::positionRoot() {

    if (root != NULL){

        position = root;
        cout << "DATA: "<< position->data << endl;

    }else{
        cout << "Tree doesn't exist !!" << endl;
    }
}

void BinTree::positionLeft() {

    Node*tmp;

    if (root != NULL){

        if(position != NULL && position ->left != NULL){
            tmp = position->left;
            position = tmp;
            cout << "DATA: " << position->data << endl;

        }else{
            cout << "Left leaf doesn't exist" << endl;
        }

    }else{
        cout << "Tree doesn't exist !!" << endl;
    }
}

void BinTree::positionRight() {

    Node*tmp;

    if (root != NULL){

        if(position != NULL && position ->right != NULL){
            tmp = position->right;
            position = tmp;
            cout << "DATA: " << position->data << endl;

        }else{
            cout << "Right leaf doesn't exist" << endl;
        }

    }else{
        cout << "Tree doesn't exist !!" << endl;
    }

}

void BinTree::positionActual() {

    if (root != NULL){

        if (position != NULL){
            cout << "DATA actual: " << position->data << endl;

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

            cout << "Do you want to change the actual data (y/n) ?" << endl;
            cin >> choice;

            if (choice != 'y' && choice != 'n'){
                cout << "Bad input !!" << endl;
            }

            if (choice == 'y'){
                cout << "Enter data:" << endl;
                cin.sync();
                getline(cin,data);
                position->data = move(data);
            }

        }else{
            cout << "No position" << endl;
        }

    }else{
        cout << "Tree doesn't exist !!" << endl;
    }

    data.clear();
}

void BinTree::positionBack() {
    prevPosition(root);
}

void BinTree::game() {

}

void BinTree::delTree(Node *leaf) {
    if (leaf != NULL){
        delTree(leaf->left);
        delTree(leaf->right);
        delete leaf;
    }
}

void BinTree::prevPosition(Node*leaf) {

    Node*tmp;

    if (leaf != NULL){
        if (leaf->left != NULL AND leaf->right != NULL){






        }else{
            cout << "Tree doesn't have leafs" << endl;
        }

    }else{
        cout << "Tree doesn't exist !!" << endl;
    }
}

BinTree::~BinTree() {

    ofstream tree(file);

    if (!tree.is_open()){
        cout << "Somethings went wrong" << endl;
    }else{

        // zapisat do suboru


    }

}