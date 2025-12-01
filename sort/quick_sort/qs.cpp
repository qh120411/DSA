#include<bits/stdc++.h>

using namespace std;

void qs ( int a[], int l, int r ) {
    int i = l;
    int j = r;
    int p = a[(l+r)/2];
    while ( i <= j ) {
        while ( a[i] < p ) {
            i++;
        }
        while ( a[j] > p) {
            j--;
        }
        if ( i<= j) {
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    }
    if ( i < r ) {
        qs(a, i , r);
    }
    if ( l < j) {
        qs ( a, l, j);
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> a[i];
    }
    qs(a,0,n-1);
    for ( int i = 0 ; i < n ; i++ ) {
        cout << a[i] << " ";
    } 
}