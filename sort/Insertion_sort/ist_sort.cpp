#include<bits/stdc++.h>

using namespace std;

void insertion_sort( int a[], int n) {
        int min;
        for ( int i = 0 ; i < n ; i++ ) {
            min = i;
            for ( int j = i+1 ; j < n ; j++ ) {
                if ( a[j] < a[min]) {
                    min = j;
                }
            }
            if ( min != i ) {
                int tmp = a[i];
                a[i] = a[min];
                a[min] = tmp;
            }
        }
}

int main() {
    int a[5] = {5, 3, 4, 8, 6};
    insertion_sort(a, 5);
    for ( int i = 0 ; i < 5 ; i++ ) {
        cout << a[i] << " ";
    }
}