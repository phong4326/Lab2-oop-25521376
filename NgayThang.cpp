#include"NgayThang.h"
#include<iostream>

using namespace std;

//tinh so ngay trong mot thang
int SoNgayTrongThang(int b, int c) { // 3 2006
    switch (b) {
        case 4: case 6: case 9: case 11: return 30;
        case 2: return ((c % 4 == 0 && c % 100 != 0) || c % 400 == 0) ? 29 : 28;
        default: return 31;
    } //return 31
}

// kiem tra mot ngay co hop le ko
bool check(int a, int b, int c){
    if (b < 1 || b > 12 || c < 1) return 0; //VD: b = 13 return false
    int soNgayToiDa = SoNgayTrongThang(b, c);
    if (a < 1 || a > soNgayToiDa) return 0; 
    return 1;
} 

void NgayThang::Nhap(){ 
    cout << "Nhap Ngay Thang Nam: ";
    
    do{
        cin >> iNgay >> iThang >> iNam; //4 3 2006

        if (!check(iNgay, iThang, iNam)) // VD: nhap 31 2 2006 se nhap lai
            cout << "Ngay khong hop le! Vui long nhap lai.\n";

    } while(!check(iNgay, iThang, iNam));
}

void NgayThang::Xuat(){
    cout << iNgay << "/" << iThang << "/" << iNam << endl;
} // in ra: 4/3/2006

NgayThang NgayThang::NgayThangNamTiepTheo(int ngay) { // VD: ngay = 30
    NgayThang res = *this; // phai tao ban sao cho doi tuong

    // tinh so ngay tu dau nao toi hien tai
    int start = res.iNgay;
    for (int m = 1; m < res.iThang; m++) {
        start += SoNgayTrongThang(m, res.iNam);
    } //vd 4 3 2006 => start = 63

    start += ngay; // cong them ngay ngay tinh tiep theo VD 63 + 30 = 93

    //chuan hoa nam
    while (true) {
        int NgayTrongNam = ((res.iNam % 4 == 0 && res.iNam % 100 != 0) || res.iNam % 400 == 0) ? 366 : 365; //check nam nhuan
        if (start <= NgayTrongNam) break;  // VD start = 400, nam = 2006
        start -= NgayTrongNam;             // thi start = 400 - 365 = 35
        res.iNam++;                        // nam = 206 
    }
    
    //sau khi chuan hoa xong thi so ngay se be hon bang 365(366)
    res.iThang = 1;
    while(start > SoNgayTrongThang(res.iThang, res.iNam)) {
        start -= SoNgayTrongThang(res.iThang, res.iNam);
        res.iThang++; // tru dan de tang so thang dan
    }

    res.iNgay = start; //start con lai se la ngay

    return res;
}