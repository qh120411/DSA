#include<bits/stdc++.h>

using namespace std;

class tamgiac {
    private :
        float xA, yA;
        float xB, yB;
        float xC, yC;
    
    public :
    void Nhap() {
        cout << "Nhap toa do dinh A: ";
        cin >> xA >> yA;
        cout << "Nhap toa do dinh B: ";
        cin >> xB >> yB;
        cout << "Nhap toa do dinh C: ";
        cin >> xC >> yC;
    }

    float KC ( float x1, float y1, float x2, float y2 ) {
        return sqrt( pow(x1-x2,2) + pow(y1-y2,2));
    }

    float dientich () {
        float a, b, c, p;
        a = KC(xB, yB, xC, yC);
        b = KC(xA, yA, xC, yC);
        c = KC(xA, yA, xB, yB);
        p = ( a + b + c ) / 2;
        return sqrt( p*(p-a)*(p-b)*(p-c));
    }

    float chuvi () {
        float a, b, c;
        a = KC(xB, yB, xC, yC);
        b = KC(xA, yA, xC, yC);
        c = KC(xA, yA, xB, yB);
        return a + b + c;
    }
};

int main() {
    tamgiac x;
    x.Nhap();
    cout << "Dien tich tam giac la : " << x.dientich() << endl;
    cout << "Chu vi tam giac la: " << x.chuvi() << endl;
}