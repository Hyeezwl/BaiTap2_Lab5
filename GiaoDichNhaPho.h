#ifndef GIAODICHNHAPHO_H
#define GIAODICHNHAPHO_H
#include "GiaoDich.h"

class GiaoDichNhaPho : public GiaoDich {
private:
    int loaiNha;
    string diaChi;

public:
    void Nhap();
    void Xuat();
    void TinhTien();
    int LayLoai();
};

#endif
