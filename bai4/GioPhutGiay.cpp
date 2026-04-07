#include"GioPhutGiay.h"
#include<iostream>

using namespace std;

void GioPhutGiay::Nhap() {
    do {
        cout << "Nhap Gio(0 <= iGio < 24): ";
        cin >> iGio;
    } while (!(0 <= iGio && iGio < 24));

    do {
        cout << "Nhap Phut(0 <= iPhut < 60): ";
        cin >> iPhut;
    } while (!(0 <= iPhut && iPhut < 60));

    do {
        cout << "Nhap Giay(0 <= iGiay < 60): ";
        cin >> iGiay;
    } while (!(0 <= iGiay && iGiay < 60));
}

void GioPhutGiay::Xuat() {
    cout << iGio << ":" << iPhut << ":" << iGiay << endl;;
}

void GioPhutGiay::TinhCongThemMotGiay() {
    iGiay++;

    if (iGiay == 60) {
        iGiay = 0;
        iPhut++;

        if (iPhut == 60) {
            iPhut = 0;
            iGio++;

            if (iGio == 24) {
                iGio = 0;
            }
        }
    }
}