#include <iostream>
#include "PhanSo.h"
using namespace std;

// Hàm tìm UCLN
int gcd(int a, int b) {
    return (b) ? gcd(b, a%b) : a;
}

void PhanSo::Nhap() { 
    cout << "Nhap tu: ";
    cin >> iTu;
    do {
        cout << "Nhap mau (khac 0): ";
        cin >> iMau;
    } while (iMau == 0);
}

void PhanSo::Xuat() {
    if (iMau == 0) cout << "Loi....."; //tranh truong hop tinh thuong co mau = 0
    else if (iTu % iMau == 0) cout << iTu / iMau;
    else cout << iTu << "/" << iMau;
}

void PhanSo::RutGon() {
    int ucln = gcd(abs(iTu), abs(iMau));
    iTu /= ucln;
    iMau /= ucln;

    // Đưa dấu về tử
    if (iMau < 0) {
        iTu = -iTu;
        iMau = -iMau;
    }
}

PhanSo PhanSo::Tong(const PhanSo& a) {
    PhanSo kq;
    kq.iTu = iTu * a.iMau + a.iTu * iMau;
    kq.iMau = iMau * a.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Hieu(const PhanSo& a) {
    PhanSo kq;
    kq.iTu = iTu * a.iMau - a.iTu * iMau;
    kq.iMau = iMau * a.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Tich(const PhanSo& a) {
    PhanSo kq;
    kq.iTu = iTu * a.iTu;
    kq.iMau = iMau * a.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Thuong(const PhanSo& a) {
    PhanSo kq;
    kq.iTu = iTu * a.iMau;
    kq.iMau = iMau * a.iTu;
    kq.RutGon();
    return kq;
}

int PhanSo::SoSanh(const PhanSo& a) {
    int left = iTu * a.iMau;
    int right = a.iTu * iMau;

    if (left > right) return 1;
    if (left == right) return 0;
    return -1;
}
