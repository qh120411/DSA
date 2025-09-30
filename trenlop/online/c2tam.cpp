#include<bits/stdc++.h>

using namespace std;

class tamgiac {
    private : 
        int a, b, c; 
    public :
        tamgiac() {
            a = 0;
            b = 0;
            c = 0;
        }
        void nhap () {
            cout << "Nhap vao canh cua a ";
            cin >> a;
            cout << "Nhap vao canh cua b ";
            cin >> b;
            cout << "Nhap vao canh cua c " ;
            cin >> c;
        }
        void check() {
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
};

int main() {
    tamgiac tg;
    tg.nhap();
    tg.check();
}