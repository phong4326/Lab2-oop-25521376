#ifndef SOPHUC_H
#define SOPHUC_H

class SoPhuc {
private:
    int iThuc, iAo; 
public:
    void Nhap();
    void Xuat() const;
    
    // Các phương thức toán học trả về một đối tượng Số Phức mới
    SoPhuc Tong(const SoPhuc& sp2) const;
    SoPhuc Hieu(const SoPhuc& sp2) const;
    SoPhuc Tich(const SoPhuc& sp2) const;
    SoPhuc Thuong(const SoPhuc& sp2) const;
};

#endif