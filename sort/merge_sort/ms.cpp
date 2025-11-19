#include<bits/stdc++.h>

using namespace std;

void merge ( int a[], int n, int l, int r) {
    int n1 = n - l + 1 ;
    int n2 = r - n;
    int L[n1], R[n2];
    for ( int i = 0 ; i < n1 ; i++ ) {
        L[i] = a[l + i];
    }
    for ( int j = 0 ; j < n2 ; j++ ) {
        R[j] = a[n + 1 + j];
    }
    int i = 0, j = 0, k = l;
    while ( i < n1 && j < n2 ) {
        if ( L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while ( i < n1 ) {
        a[k] = L[i];
        i++;
        k++;
    }
    while ( j < n2 ) {
        a[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort( int a[], int l, int r) {
    if ( l < r ) {
        int n = l + ( r - l ) / 2;
        merge_sort( a, l, n);
        merge_sort( a, n + 1, r);
        merge( a, n, l, r);
    }
}

void print ( int a[], int n) {
    for ( int i = 0 ; i < n ; i++ ) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[7] = {38, 27, 43, 3, 9, 82, 10};
    merge_sort( a, 0, 6);
    print( a, 7);
}                                                                                                                                                                                            