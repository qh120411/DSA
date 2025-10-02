#include<bits/stdc++.h>

using namespace std;

int tinh(int a, int b, char op ) {
    if ( op == '+' ) return a + b;
    if ( op == '-') return a-b;
    if ( op == '*') return a*b;
    if ( op == '/' ) return a/b;
    return 0;
}

string chuoi(string s) {
    string res = "";
    stack<char>opr;
    for ( char c : s ) {
        if ( c == ' ' ) {
            continue;
        }
        if ( c >= '0' && c <= '9' ) {
            res += c;
        }
        else if ( c == '(') {
            opr.push(c);
        }
        else if ( c == ')') {
            while ( !opr.empty() && opr.top() != '(') {
                res += opr.top();
                opr.pop();
            }
            if (!opr.empty()) {
                opr.pop();
            }
        }
        else {
            while (!opr.empty() && opr.top() != '(') {
                if ((opr.top() == '*' || opr.top() == '/') && (c == '+' || c == '-')) {
                    res += opr.top();
                    opr.pop();
                } 
                else if ((opr.top() == '*' || opr.top() == '/') && (c == '*' || c == '/')) {
                    res += opr.top();
                    opr.pop();
                } 
                else if ((opr.top() == '+' || opr.top() == '-') && (c == '+' || c == '-')) {
                    res += opr.top();
                    opr.pop();
                } 
                else break;
            }
            opr.push(c);
        }
    }
    while ( !opr.empty() ) {
        res += opr.top();
        opr.pop();
    }
    return res;

}

int result( string res ) {
    stack<int>st;

    for ( char c : res ) {
        if ( c >= '0' && c <= '9' ) {
            st.push(c - '0');
        }
        else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            st.push(tinh(a, b, c));
        }
    }
    return st.top();
}

int main(){
    string s;
    getline(cin, s);
    cout << chuoi(s) << endl;
    string res = chuoi(s);
    cout << result(res) << endl;
}