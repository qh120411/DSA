#include<bits/stdc++.h>

using namespace std;

void inhoa ( string s ) {
    for ( int i = 0 ; i < s.length() ; i++ ) {
        if ( s[i] >= 'a' && s[i] <= 'z' ) {
            s[i] = s[i] - 32; 
        }
        cout << s[i];
    }
    
}

void inthuong ( string s ) {
    for ( int i = 0 ; i < s.length() ; i++ ) {
        if ( s[i] >= 'A' && s[i] <= 'Z' ) {
            s[i] = s[i] + 32; 
        }
        cout << s[i];
    }
}

int main() {
    string s;
    getline(cin,s);
    inhoa(s);
    cout << '\n';
    inthuong(s);
}