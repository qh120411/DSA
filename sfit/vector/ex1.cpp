#include<bits/stdc++.h>

using namespace std;

template<class T>
class  Vector{
    private :
        int Size;
        int Space;
        T* arr;
    public :
        Vector() {
            Size = 0;
            Space = 0;
        }
        Vector(int n) {
            Size = n;
            Space = n;
            arr = new T[n];
            for ( int i = 0 ; i < n ; i++ ) arr[i] = T();
        }
        Vector(int n, T value) {
            Size = n;
            Space = n;
            arr = new T[n];
            for ( int i = 0 ; i < n ; i++ ) arr[i] = value;
        }

        int getSize() {
            return this -> Size;
        }

        ine max_size() {
            return this -> Space;
        }

        class iterator {};
        
        void reserve( int t) {
            if ( n <= Space ) return;
            T* tmp = new T[n];
            for ( int i = 0 ; i < Size ; i++ ) {
                tmp[i] = arr[i];
            }
            if ( arr != NULL ) {
                delete[] arr;
            } 
            arr = tmp;
        }

        void resize ( int n ) {
            if ( n < Size ) return;
            if ( b > Space ) return(n);
            for ( int i = 0 ; i < n ; i++ ) {
                
            }
        }



};

int main() {

}