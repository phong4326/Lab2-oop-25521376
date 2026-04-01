#include "SoPhuc.h"
#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
    a = abs(a); b = abs(b);
    return (b) ? gcd(b, a%b) : a;
}

struct PhanSo {
    int tu, mau;

    void xuat() {
        int ucln = gcd(tu, mau);
        int t = tu / ucln;
        int m = mau / ucln;
        if (m < 0) { t = -t; m = -m; } // Đưa dấu trừ lên tử
        
        if (m == 1) cout << t;
        else cout << t << "/" << m;
    }
};


void SoPhuc::Nhap() {
    cout << "Nhap phan thuc : "; cin >> iThuc;
    cout << "Nhap phan ao : "; cin >> iAo;
}

void SoPhuc::Xuat() const {
    if (iAo == 0) cout << iThuc;
    else if (iAo > 0)
        cout << iThuc << " + " << iAo << "i" << endl;
    else
        cout << iThuc << " - " << -iAo << "i" << endl;
}

SoPhuc SoPhuc::Tong(const SoPhuc& sp2) const {
    SoPhuc res;
    res.iThuc = this->iThuc + sp2.iThuc;
    res.iAo = this->iAo + sp2.iAo;
    return res;
}

SoPhuc SoPhuc::Hieu(const SoPhuc& sp2) const {
    SoPhuc res;
    res.iThuc = this->iThuc - sp2.iThuc;
    res.iAo = this->iAo - sp2.iAo;
    return res;
}

SoPhuc SoPhuc::Tich(const SoPhuc& sp2) const {
    SoPhuc res;
    // (a+bi)(c+di) = (ac-bd) + (ad+bc)i
    res.iThuc = (iThuc * sp2.iThuc) - (iAo * sp2.iAo);
    res.iAo = (iThuc * sp2.iAo) + (iAo * sp2.iThuc);
    return res;
}

SoPhuc SoPhuc::Thuong(const SoPhuc& sp2) const {
    SoPhuc res;
    int mauSo = sp2.iThuc * sp2.iThuc + sp2.iAo * sp2.iAo;
    
    if (mauSo == 0) {
        cout << "Loi: Chia cho 0!" << endl;
        res.iThuc = 0; res.iAo = 0;
        return res;
    }
    
    res.iThuc = iThuc * sp2.iThuc + iAo * sp2.iAo;
    res.iAo = iAo * sp2.iThuc - iThuc * sp2.iAo;

    if (res.iThuc%mauSo !=0) {
        PhanSo thuc = {res.iThuc, mauSo};
        thuc.xuat();   
    } else cout << res.iThuc / mauSo;

    if (res.iAo != 0) {
        if (res.iAo > 0) cout << " + ";
        else cout << " - "; // Tách dấu trừ ra ngoài

        if (abs(res.iAo) % mauSo != 0) {
            PhanSo ao = {abs(res.iAo), mauSo}; // Dùng abs để tránh in 2 dấu trừ
            cout << "("; ao.xuat();
            cout << ")i";
        } else {
            cout << abs(res.iAo) / mauSo << "i";
        }
    }
    cout << endl;

    res.iThuc /= mauSo;
    res.iAo /= mauSo;

    return res;
}