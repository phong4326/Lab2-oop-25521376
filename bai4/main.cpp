#include"GioPhutGiay.h"
#include<iostream>

using namespace std;

int main() {
    GioPhutGiay a;

    cout << "Nhap gio phut giay: \n";
    a.Nhap();

    cout << "Thoi diem A: ";
    a.Xuat();

    cout << "Thoi gian them mot giay la: ";
    a.TinhCongThemMotGiay();
    a.Xuat();

    return 0;
}