#include<bits/stdc++.h>

using namespace std;

class sinhvien {
    private :
        string sbd;
        string ten;
        int nsinh;
        string gt;
        float toan;
        float ly;
        float hoa;

    public : 
        friend istream& operator >>(istream &in, sinhvien& sv) {
            cout << "Nhap vao so bao danh: " << endl;
            in >> sv.sbd;
            cout << "Nhap vao ho ten thi sinh: " << endl;
            in.ignore();
            getline(in,sv.ten);
            cout << "Nhap vao nam sinh cua sinh vien: " << endl;
            in >> sv.nsinh;
            cout << "Nhap vao gioi tinh cua thi sinh: " << endl;
            in.ignore();
            getline(in, sv.gt);
            cout << "Lan luot nhap vao diem mon toan, ly, hoa: " << endl;
            in >> sv.toan >> sv.ly >> sv.hoa;
            return in;
        }

        friend ostream& operator << (ostream &out, const sinhvien& sv) {
            out << sv.sbd << " " << sv.ten << " " << sv.nsinh << " " << sv.gt << " " << "Diem mon toan, ly, hoa lan luot la: " << sv.toan << " " << sv.ly << " " << sv.hoa << endl;
            return out;
        }

        string getsbd() const {
            return sbd;
        }
};

class qlsv {
    private : 
        list<sinhvien> svarr;
    public : 
        //them thi sinh

        void them(const sinhvien &sv) {
            svarr.push_back(sv);
        }

       bool xoa ( const string &checksbd ) {
            for ( auto it = svarr.begin() ; it != svarr.end() ; it++ ) {
                if ( it->getsbd() == checksbd) {
                    svarr.erase(it);
                    return true;
                }
            }
            return false;
       }

        void in() const {
            if ( svarr.empty()) {
                cout << "Danh sach rong" << endl;
                return;
            }
            for ( const auto &it : svarr ) {
                cout << it;
            }
        }

        sinhvien *timkiem( const string &sbd) {
            for ( auto it = svarr.begin() ; it != svarr.end() ; it++ ) {
                if ( it->getsbd() == sbd) {
                    return &(*it);
                }
            }
            return nullptr;
        }

};



int main() {
    qlsv ql;
    int n;
    cout << "Nhap so luong thi sinh: " << endl;
    cin >> n;

    for ( int i = 0 ; i < n ; i++ ) {
        sinhvien sv;
        cin >> sv;
        ql.them(sv);
    }
    cout << "Danh sach thi sinh la: " << endl;
    ql.in();

    string s; 
    cout << "Nhap so bao danh can xoa: " << endl;
    cin >> s;
    ql.xoa(s);

    cout << "Danh sach thi sinh sau khi xoa la: " << endl;
    ql.in();

    string ss; 
    cout << "Nhap so bao danh can tim kiem: " << endl;
    cin >> ss;

    if (auto p = ql.timkiem(ss)) {
        cout << "Tim thay: " << *p;
    } else {
        cout << "Khong tim thay.\n";
    }
}