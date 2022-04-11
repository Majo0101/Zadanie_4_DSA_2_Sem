#ifndef ZADANIE_4_DSA_2_SEM_BINTREE_H
#define ZADANIE_4_DSA_2_SEM_BINTREE_H

using namespace std;

class BinTree {

public:
    BinTree();
    ~BinTree();

    void createTree();
    void positionRoot();
    void positionLeft();
    void positionRight();
    void positionActual();
    void postionBack();

    void setRoot(string in);

    void printRoot();

private:

    struct Node{
        string data;
        Node * left;
        Node *right;
    };

    Node*root;
    Node*position;
};


#endif //ZADANIE_4_DSA_2_SEM_BINTREE_H
