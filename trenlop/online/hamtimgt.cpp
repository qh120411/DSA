#include<bits/stdc++.h>

using namespace std;

void maxmin ( int a, int b, int c, int &max, int &min) {
    
    max = a, min = a;

    if (b > max) max = b;
    if (c > max) max = c;

    if (b < min) min = b;
    if (c < min) min = c;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int max, min;
    maxmin(a,b,c,max,min);
    cout << "max la: " << max << endl;
    cout << "min la: " << min << endl;
}