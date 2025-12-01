#include<bits/stdc++.h>

using namespace std;

void ssort( int a[], int n) {
    for ( int i = 0 ; i < n - 1 ; i++ ) {
        int minindex = i;
        for ( int j = i + 1; j < n ; j++ ) {
            if ( a[j] < a[minindex] ) {
                minindex = j;
            }
        }
        if ( minindex != i) {
            int tmp = a[i];
            a[i] = a[minindex];
            a[minindex] = tmp;
        }
    }
}

int main() {
    int n;
    cin >> n ;
    int a[n];
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> a[i];
    }
    ssort(a,n);
    for ( int i = 0 ; i < n ; i++ ) {
        cout << a[i] << " ";
    }
}