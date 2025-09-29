#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    while(n--) {
        string s;
        cin >> s;
        stack<char> st;
        int check = 1;
        for ( char c : s ) {
            if ( c == '(' || c == '[' || c == '{') {
                if ( !st.empty()) {
                    char top = st.top();
                    if ( top == '(' && ( c == '[' || c == '{')) {
                        check = 0;
                        break;
                    }
                    if ( top == '[' && c == '{') {
                        check = 0;
                        break;
                    }
                }
                st.push(c);
            }
            else if ( c == ')' || c == ']' || c == '}') {
                if ( st.empty() ) {
                    check = 0;
                    break;
                }
                char top = st.top();
                st.pop();
                if ( ( c == '}' && top!= '{' ) || ( c == ')' && top!= '(' ) || ( c == ']' && top!= '[' ) ) {
                    check = 0;
                    break;
                }
            }
        }

        if (!st.empty()) check = 0;

        if ( check ) {
            cout << "Dung" << endl;
        }
        else {
            cout << "Sai" << endl;
        }
    }
}