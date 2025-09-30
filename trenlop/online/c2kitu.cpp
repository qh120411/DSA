#include<bits/stdc++.h>

using namespace std;

class kitu {
    private :
        string s;
    public :
        kitu() {
            s =' ';
        }
        void nhap() {
            cout << "Nhap vao ki tu: ";
            getline(cin, s);
        }
        void inhoa () {
            for ( int i = 0 ; i < s.length() ; i++ ) {
                if ( s[i] >= 'a' && s[i] <= 'z') {
                    s[i] -= 32;
                }
                cout << s[i];
            }
            cout << endl;
        }
        void inthuong() {
            for ( int i = 0 ; i < s.length() ; i++ ) {
                if ( s[i] >= 'A' && s[i] <= 'Z') {
                    s[i] += 32;
                }
                cout << s[i];
            }
            cout << endl;
        }
};

int main() {
    kitu kt;
    kt.nhap();
    kt.inhoa();
    kt.inthuong();
}