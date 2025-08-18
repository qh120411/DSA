#include<bits/stdc++.h>

using namespace std;

typedef struct tamgiac {
    float xA, yA;
    float xB, yB;
    float xC, yC;
};

void nhap( tamgiac &t ) {
    cout << "Nhap toa do cua dinh A: ";
    cin >> t.xA >> t.yA;
    cout << "Nhap toa do cua dinh B: ";
    cin >> t.xB >> t.yB;
    cout << "Nhap toa do cua dinh C: ";
    cin >> t.xC >> t.yC;
}

float KC(float x1, float y1, float x2, float y2) {
    return sqrt( pow(x1-x2,2) + pow(y1-y2, 2));
}

//tinh theo cong thuc heron

float Dientich( tamgiac &t) {
    float a, b ,c, p;
    a = KC(t.xB, t.yB, t.xC, t.yC);
    b = KC(t.xA, t.yA, t.xC, t.yC);
    c = KC(t.xA, t.yA, t.xB, t.yB);
    p = ( a + b + c ) / 2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

float Chuvi( tamgiac &t) {
    float a, b ,c;
    a = KC(t.xB, t.yB, t.xC, t.yC);
    b = KC(t.xA, t.yA, t.xC, t.yC);
    c = KC(t.xA, t.yA, t.xB, t.yB);

    return a + b + c;
}

int main() {
    tamgiac x;
    nhap(x);
    cout << "Dien tich tam giac la: " << Dientich(x) << endl;
    cout << "Chu vi cua tam giac la: " << Chuvi(x) << endl;
}
