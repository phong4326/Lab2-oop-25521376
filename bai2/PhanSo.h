#ifndef PHANSO_H
#define PHANSO_H

class PhanSo
{
private:
    int iTu, iMau;
public:
    void Nhap();
    void Xuat();
    void RutGon();

    PhanSo Tong(const PhanSo& a);
    PhanSo Hieu(const PhanSo& a);
    PhanSo Tich(const PhanSo& a);
    PhanSo Thuong(const PhanSo& a);

    int SoSanh(const PhanSo& a);
};

#endif 