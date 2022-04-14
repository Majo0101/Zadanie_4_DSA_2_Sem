#ifndef ZADANIE_4_DSA_2_SEM_BINTREE_H
#define ZADANIE_4_DSA_2_SEM_BINTREE_H

using namespace std;

class BinTree {

public:
    BinTree(); // constructor
    ~BinTree(); // destructor

    void createRoot(string input);  //create root with input data
    void createLeft(string input);  //create left leaf with data
    void createRight(string input); //create right leaf with data
    void moveLeft();    // move position left
    void moveRight();   //move position right

    void createTree();  //create tree from what ?
    void createLeftChild();   //create left leaf without move
    void createRightChild();  //create right leaf without move

    void positionRoot();  //return position to root with data read
    void positionLeft();  //move left with data read
    void positionRight();  //move right with data read
    void positionActual(); //actual position with data read and write
    void positionBack();   //move back with read data

    void printData(ostream &tree);  //print data to file   preorder style

    void game(); //game function


private:

    string data;
    char choice{};

    struct Node{
        char pos;
        string data;
        Node * left;
        Node *right;
        Node *prev;
    };

    void delTree(Node*leaf);    //delete tree
    void prevPosition(Node*leaf);  //move back with read data
    void print(Node*leaf, ostream &tree); //print data to file with recursion
    void read();  //read from file without recursion

    Node*root;
    Node*position;
};

#endif //ZADANIE_4_DSA_2_SEM_BINTREE_H
