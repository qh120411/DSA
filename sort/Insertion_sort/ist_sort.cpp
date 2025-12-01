#include<bits/stdc++.h>

using namespace std;

void insertion_sort( int a[], int n) {
    for ( int i = 0 ; i < n ; i++ ) {
        int value = a[i];
        int index = i;
        while ( index > 0 && a[index-1] > value) {
            a[index] = a[index-1] ;
            index--;
        }
        a[index] = value;
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> a[i];
    }
    insertion_sort(a, n);
    for ( int i = 0 ; i < n ; i++ ) {
        cout << a[i] << " ";
    }
}