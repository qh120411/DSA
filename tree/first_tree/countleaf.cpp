#include<bits/stdc++.h>

using namespace std;

template <class T>
struct node {
    T elem;
    node<T> *left;
    node<T> *right;
};

template<class T>
node<T> *insert( node<T> *root, T value) {
    if ( root == NULL ) {
        node<T>*tmp = new node<T>;
        tmp->elem = value;
        tmp->left = NULL;
        tmp->right = NULL;
        return tmp;
    } else {
        if ( value < root->elem ) {
            root->left = insert(root->left, value);
        }
        else {
            root->right = insert(root->right, value);
        }
        return root;
    }
}

template<class T>
int countleaf ( node<T>*root) {
    if ( root == NULL ) {
        return 0;
    }
    else if ( root->left == NULL && root -> right == NULL) {
        return 1;
    }
    else {
        return countleaf(root->left) + countleaf(root->right);
    }
}

int main() {
    int n, tmp;
    cin >> n;
    node<int> * root = NULL ;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> tmp;
        root = insert(root, tmp);
    }
    cout << countleaf(root);
}