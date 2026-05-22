#ifndef GIAODICH_H
#define GIAODICH_H
#include <iostream>
#include <string>
using namespace std;

class GiaoDich {
protected:
    string maGD;
    int ngay, thang, nam;
    double donGia;
    double dienTich;
    double thanhTien;

public:
    GiaoDich();

    virtual void Nhap();
    virtual void Xuat();
    virtual void TinhTien();
    virtual int LayLoai();

    double LayThanhTien();
    int LayThang();
    int LayNam();
};

#endif
