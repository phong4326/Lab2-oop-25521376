#include"NgayThang.h"
#include<iostream>

using namespace std;

int main() {
    NgayThang day;

    day.Nhap();

    cout << "Ngay hien tai la: ";
    day.Xuat();

    cout << "Nhap ngay muon den: ";
    int n; cin >> n;
    NgayThang res = day.NgayThangNamTiepTheo(n);
    res.Xuat();

    return 0;
}