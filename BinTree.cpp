#include <bits/stdc++.h>
#include <utility>
#include "BinTree.h"

#define CLEAR_STRING "EMPTY"
#define file "tree.txt"
#define AND &&
#define OR ||
#define ZERO 0
#define LEFT true;
#define RIGHT false;

using namespace std;

BinTree::BinTree() {
    root = NULL;
    position = NULL;
}

//main constructors

void BinTree::createRoot(string input) {

    Node *tmp = new Node;
    tmp->pos = 'L';
    tmp->data = move(input);

    tmp->left = tmp->right = tmp->prev = NULL;

    root = tmp;

    position = root;

    cout << "Tree was created..."<< endl;
}

void BinTree::createLeft(string input) {

    Node*leaf = new Node;
    leaf->pos = 'L';
    leaf->data = move(input);

    leaf->left = leaf->right = NULL;

    leaf->prev = position;
    position->left = leaf;

}

void BinTree::moveLeft() {

    Node*tmp;
    if (position->left != NULL){
        tmp = position->left;
        position = tmp;
    }


}

void BinTree::createRight(string input) {

    Node*leaf = new Node;
    leaf->pos = 'P';
    leaf->data = move(input);

    leaf->left = leaf->right = NULL;

    leaf->prev = position;
    position->right = leaf;

}

void BinTree::moveRight() {

    Node*tmp;
    if (position->right != NULL){
        tmp = position->right;
        position = tmp;
    }
}

//public functions

void BinTree::createTree() {

    ifstream tree(file);

    cout << endl
    << "a - Read tree from file" << endl
    << "b - Create new root" << endl;

    cin >> choice;

    if(choice == 'a'){
        if (root != NULL){
            cout << "DATA will be overwritten !!" << endl;
            cout << "Do you want to continue ?  (y/n)" << endl;

            cin >> choice;

            if (choice == 'y'){

                delTree(root);
                root = position = NULL;
                read();
                choice = 'a';
            }

        }else{

        read();

        }
    }

    if (choice == 'b'){
        if (root == NULL){

            createRoot(CLEAR_STRING);

        }else{

            cout << "There are a data !"<< endl;
            cout << "Create new tree (y/n) ?" << endl;
            cin >> choice;

            if (choice == 'y'){

                delTree(root);
                root = position = NULL;
                createRoot(CLEAR_STRING);
                choice = 'b';

            }
        }
    }

    data.clear();

    if(choice != 'a' AND choice != 'b'){
        cout << "Bad input !!" << endl;
    }
}

void BinTree::createLeftChild() {

    if (root != NULL){

        if (position != NULL){

            if (position->left == NULL){

                createLeft(CLEAR_STRING);

                cout << "Left leaf was created" << endl;
                cout << "DATA: " << position->left->data << endl;

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

                createRight(CLEAR_STRING);

                cout << "Right leaf was created" << endl;
                cout << "DATA: " << position->right->data << endl;

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

            moveLeft();
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

            moveRight();
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
                cout << "DATA right leaf: " << position->right->data << endl;
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
    prevPosition(position);
}

void BinTree::game() {

    if(root != NULL AND position != NULL){

        position = root;
        bool game = true;

        cout << "Welcome in the Game" << endl << endl;
        cout << position->data << "(y/n) ?" << endl;

        while(game){

            while(true){
                cin.sync();
                cin >> choice;
                if (choice == 'y' OR choice == 'n'){break;}
                cout << "BAD KEY! Enter your choice again" << endl;
            }

            if(choice == 'y'){moveLeft();}
            if(choice == 'n'){moveRight();}

            cout << position->data << "  (y/n) ?" << endl;

            if (position->left == NULL AND position->right == NULL){

                while(true){
                    cin.sync();
                    cin >> choice;
                    if (choice == 'y' OR choice == 'n'){break;}
                    cout << "BAD KEY! Enter your choice again" << endl;
                }

                if (choice == 'y') {
                    cout << "I guessed it !" << endl;
                    game = ZERO;
                }

                if (choice == 'n'){
                    cout << "You are the Winner !" << endl;
                    game = ZERO;
                }
            }
        }
    }else{
        cout << "Somethings went wrong..." << endl;
    }






}

void BinTree::printData(ostream &tree) {
    print(root, tree);
}


// private functions

void BinTree::read() {

    string line;

    ifstream FILE(file);    // Read bin tree from file

    int fCount = ZERO;      // Global counter in function
    bool printSide = LEFT;  // Create right side
    int pCount = ZERO;      // Counter for ~ characters
    bool side = LEFT;       // Side flip - flop

    while(getline(FILE, line)){

        if (fCount == 1){
            createRoot(line);
        }

        if (line == "L"){ side = LEFT; goto jump;}
        if (line == "P"){ side = RIGHT; goto jump;}

        if (line == "~"){

            pCount++;

            if (pCount == 1){ printSide = RIGHT; goto jump;}
            if (pCount == 2){

                if (side AND position->prev != NULL){position = position->prev;}
                if (!side AND position->prev != NULL){
                    position = position->prev;
                    if (position->prev != NULL){
                        position = position->prev;
                    }
                }

                goto jump;

            }
            if (pCount > 2 AND position->prev != NULL){position = position->prev; goto jump;}

        }else{
            pCount = ZERO;
        }


        if (printSide AND fCount > 1 ){
            createLeft(line);
            moveLeft();
        }

        if (!printSide AND fCount > 1){
            createRight(line);
            moveRight();
            printSide = LEFT;
        }

        jump:
        fCount++;
    }



}

void BinTree::print(Node*leaf, ostream &tree) {

    if(!leaf){
        tree << "~" << endl;
    }else{
        tree << leaf->pos << endl;
        tree << leaf->data << endl;
        print(leaf->left, tree);
        print(leaf->right, tree);
    }
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
        if (leaf->prev != NULL ){

            position = leaf->prev;
            cout << "Data: " << position->data << endl;

        }else{
            cout << "Tree doesn't have leafs" << endl;
        }

    }else{
        cout << "Tree doesn't exist !!" << endl;
    }
}

//Destructor

BinTree::~BinTree() {

    ofstream tree(file);

    if (!tree.is_open()){
        cout << "Somethings went wrong" << endl;
    }else{
        printData(tree);
        cout << "Data was successfully writen" << endl;
    }

    tree.close();

}



