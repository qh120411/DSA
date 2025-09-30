#include<bits/stdc++.h>

using namespace std;

template<class T>

class timmax {
    private :
        T a, b;
    public :
        timmax() {
            a = 0; b = 0;
        }
        timmax( T a, T b) {
            this->a = a;
            this->b = b;
        }
        T max() {
            if ( a > b ) {
                return a;
            }
            else {
                return b;
            }
        }
};

int main() {
    timmax<double> m(2,3);
    cout << "Max cua 2 so 2.5 va 3.5 la: " << m.max() << endl;

    timmax<int> n(2,3);
    cout << "Max cua 2 so 2 va 3 la: " << n.max() << endl;
}