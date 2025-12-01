#include<bits/stdc++.h>

using namespace std;

//khai bao node 

struct node {
    int data;
    node *left;
    node *right;
};

node *insert( node *t, int x) {
    if ( t == NULL ) {
        node *tmp = new node;
        tmp->data = x;
        tmp->left = NULL;
        tmp->right = NULL;
        return tmp;
    } else {
        if ( x < t->data ){
            t->left = insert(t->left, x);
        }
        else {
            t->right = insert(t->right, x);
        }
        return t;
    }
}

//duyet cay theo thu tu < tu nut con ben trai>

void printTree( node *t) {
    if ( t!= NULL) {
        printTree(t->left);
        cout << t->data << " ";
        printTree(t->right);
    }
}

//duyet theo tien thu tu < bat dau tu goc>

// //void printTree ( node *t) {
//     if ( t!= NULL ){
//         cout << t->data << " ";
//         printTree(t->left);
//         printTree(t->right);
//     }
// }


//duyet theo hau thu tu

// void printTree ( node *t) {
//     if ( t!= NULL ) {
//         printTree(t->left);
//         printTree(t->right);
//         cout << t->data;
//     }
// }


int main() {
    int n, x;
    cin >> n;
    node *t = NULL;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> x;
        t = insert(t,x);
    } 
    printTree(t);
}