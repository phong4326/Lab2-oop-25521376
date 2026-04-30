#include"NgayThang.h"
#include<iostream>

using namespace std;

int main() {
    NgayThang day;

    day.Nhap();

    day.Xuat();

    int n; cin >> n;
    NgayThang res = day.NgayThangNamTiepTheo(n);
    res.Xuat();

    return 0;
}