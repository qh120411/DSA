#include<bits/stdc++.h>

using namespace std;

void bubble_sort( int a[], int n) {
    int tmp;
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = i+1 ; j < n ; j++ ) {
            if ( a[i] > a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main() {
    int a[5] = {5, 3, 4, 8, 6};
    bubble_sort( a, 5);
    for ( int i = 0 ; i < 5 ; i++ ) {
        cout << a[i] << " ";
    }
}