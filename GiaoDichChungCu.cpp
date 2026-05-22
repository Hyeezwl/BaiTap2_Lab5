#include "GiaoDichChungCu.h"

void GiaoDichChungCu::Nhap() {
    GiaoDich::Nhap();
    cin.ignore();
    cout << "Nhap ma can: ";
    getline(cin, maCan);
    cout << "Nhap vi tri tang: ";
    cin >> viTriTang;
}

void GiaoDichChungCu::Xuat() {
    cout << "Giao dich Chung cu ";
    GiaoDich::Xuat();
    cout << " Ma can: " << maCan << " Tang: " << viTriTang << endl;
}

void GiaoDichChungCu::TinhTien() {
    if (viTriTang == 1) {
        thanhTien = dienTich * donGia * 2;
    } else if (viTriTang >= 15) {
        thanhTien = dienTich * donGia * 1.2;
    } else {
        thanhTien = dienTich * donGia;
    }
}

int GiaoDichChungCu::LayLoai() {
    return 3;
}
