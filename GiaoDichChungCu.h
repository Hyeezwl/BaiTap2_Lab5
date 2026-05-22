#ifndef GIAODICHCHUNGCU_H
#define GIAODICHCHUNGCU_H
#include "GiaoDich.h"

class GiaoDichChungCu : public GiaoDich {
private:
    string maCan;
    int viTriTang;

public:
    void Nhap();
    void Xuat();
    void TinhTien();
    int LayLoai();
};

#endif
