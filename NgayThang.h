#ifndef NGAYTHANG_H
#define NGAYTHANG_H

class NgayThang
{
private:
    int iNgay, iThang, iNam;
public:
    void Nhap();
    void Xuat();
    NgayThang NgayThangNamTiepTheo(int ngay);
};

#endif