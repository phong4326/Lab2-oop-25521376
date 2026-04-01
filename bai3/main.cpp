#include "SoPhuc.h"
#include <iostream>

using namespace std;

int main() {
    SoPhuc a, b;

    cout << "Nhap So Phuc 1: \n"; a.Nhap();
    cout << "Nhap So Phuc 2: \n"; b.Nhap();

    cout << "\nhai so phuc: \n"; 
    a.Xuat(); b.Xuat();

    cout << "Tong: "; (a.Tong(b)).Xuat();
    cout << "Hieu: "; (a.Hieu(b)).Xuat();
    cout << "Tich: "; (a.Tich(b)).Xuat();
    cout << "Thuong: "; a.Thuong(b);

    return 0;
}