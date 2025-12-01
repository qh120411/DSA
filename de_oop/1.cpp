#include<bits/stdc++.h>

using namespace std;

class Sinhvien {
    private : 
        string msv;
        string ht;
        int nam;
        string lop;
    public : 

        friend istream& operator >>(istream &in, Sinhvien& sv) {
            cout << "Nhap vao ma sinh vien: " << endl;
            in >> sv.msv;
            cout << "Nhap vao ho ten sinh vien: " << endl;
            in.ignore();
            getline(in, sv.ht);
            cout << "Nhap vao nam sinh cua sinh vien: " << endl;
            in >> sv.nam;
            cout << "Nhap vao ten lop cua sinh vien: " << endl;
            in.ignore();
            getline(in, sv.lop);
            return in;
        }

        friend ostream& operator << (ostream &out, const Sinhvien& sv) {
            cout << sv.msv << " " << sv.ht << " " << sv.nam << " " << sv.lop << endl;
            return out;
        }

        string getma() {
            return msv;
        }
        string getten() const {
            return ht;
        }

};

class Qlsv {
    private :
        vector<Sinhvien> SV;
    
    public : 
        void them ( const Sinhvien& sv) {
            SV.push_back(sv);
        }

        void xoatheoma ( const string &ma  ) {
            int n = SV.size();
            for ( int i = 0 ; i < n ; i++ ) {
                if ( SV[i].getma() == ma ) {
                    SV.erase(SV.begin()+i);
                }
            }
        }

        void in() const {
            int n = SV.size();
            for ( int i = 0 ; i < n ; i++ ) {
                cout << SV[i] << endl;
            }
        }

        Sinhvien* timnhiphan ( const string& ma) {
            int n = SV.size();
            int l = 0, r = n - 1 ;
            while ( l <= r ) {
                int mid = ( l + r ) / 2;
                if ( SV[mid].getma() == ma) {
                    return &SV[mid];
                }
                else if ( SV[mid].getma() < ma ) {
                    r = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }
            return nullptr;
        }

};

int main() {
    Sinhvien sv;
    cin >> sv;
    cout << "Thông tin sinh viên: " << sv << endl;
}