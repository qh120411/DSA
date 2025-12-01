#include<bits/stdc++.h>

using namespace std;

int bs ( int a[], int n, int p) {
    int l = 0, r = n-1;
    if ( a[l] == p) {
        return l;
    }
    while ( l <= r ) {
        int mid = ( l + r ) / 2;
        if ( a[mid] == p ) {
            return mid;
        }
        else if ( a[mid] > p ) {
            r = mid - 1;
        }
        else if ( a[mid] < p ) {
            l = mid+1;
        }
    }  
    return -1;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> a[i];
    }
    int p;
    cin >> p;
    cout << bs(a,n,p);

}