#include "GiaoDichNhaPho.h"

void GiaoDichNhaPho::Nhap() {
    GiaoDich::Nhap();
    cout << "Nhap loai nha (1 cho Cao cap, 2 cho Thuong): ";
    cin >> loaiNha;
    cin.ignore();
    cout << "Nhap dia chi: ";
    getline(cin, diaChi);
}

void GiaoDichNhaPho::Xuat() {
    cout << "Giao dich Nha pho ";
    GiaoDich::Xuat();
    cout << " Loai: " << (loaiNha == 1 ? "Cao cap" : "Thuong") << " Dia chi: " << diaChi << endl;
}

void GiaoDichNhaPho::TinhTien() {
    if (loaiNha == 1) {
        thanhTien = dienTich * donGia;
    } else {
        thanhTien = dienTich * donGia * 0.9;
    }
}

int GiaoDichNhaPho::LayLoai() {
    return 2;
}
