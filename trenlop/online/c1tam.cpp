#include<bits/stdc++.h>

using namespace std;

void checktamgiac ( int a, int b, int c ) {
    if ( a + b > c && a + c > b && b + c > a ) {
        if ( a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) {
            cout << "tam giac tren la tam giac vuong" << endl;
        }
        else {
            cout << "tam giac tren khong la tam giac vuong" << endl;
        }
    }
    else {
        cout << "3 canh khong tao tam giac" << endl;
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    checktamgiac(a,b,c);

}
