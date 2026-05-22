#ifndef CONGTY_H
#define CONGTY_H
#include "GiaoDich.h"
#include "GiaoDichDat.h"
#include "GiaoDichNhaPho.h"
#include "GiaoDichChungCu.h"

class CongTy {
private:
    GiaoDich* danhSach[100];
    int soLuong;

public:
    CongTy();
    void NhapDanhSach();
    void ThongKeSoLuong();
    void TinhTrungBinhChungCu();
    void TimNhaPhoGiaCaoNhat();
    void XuatGiaoDichThang12Nam2024();
};

#endif
