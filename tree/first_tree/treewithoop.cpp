#include<bits/stdc++.h>

using namespace std;

template <class T>

struct Node {
    T elem;
    Node *left, *right;
};

template <class T>

Node<T>* insert(Node<T>* root, T x) {
    if ( root == NULL ) {
        Node<T>*tmp = new Node<T>;
        tmp->elem = x;
        tmp->left = NULL;
        tmp->right = NULL;
    }
    else {
        if ( x < root-> elem) {
            root->left = insert(root->left, x);
        }
        else {
            root->right = insert(root->right ,x);
        }
        return root;
    }
}

template <class T>

Node<T>* find ( Node<T> *root, T x) {
    if ( root == NULL ) {
        return nullptr;
    }
    else if ( root->elem == x ) {
        return root;
    }

    if ( x < root->elem ) {
        return find(root->left, x);
    }
    else {
        return find(root->right, x);
    }
}


int main() {

}