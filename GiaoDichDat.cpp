#include "GiaoDichDat.h"

void GiaoDichDat::Nhap() {
    GiaoDich::Nhap();
    cout << "Nhap loai dat (A, B hoac C): ";
    cin >> loaiDat;
}

void GiaoDichDat::Xuat() {
    cout << "Giao dich Dat ";
    GiaoDich::Xuat();
    cout << " Loai dat: " << loaiDat << endl;
}

void GiaoDichDat::TinhTien() {
    if (loaiDat == 'A' || loaiDat == 'a') {
        thanhTien = dienTich * donGia * 1.5;
    } else {
        thanhTien = dienTich * donGia;
    }
}

int GiaoDichDat::LayLoai() {
    return 1;
}
