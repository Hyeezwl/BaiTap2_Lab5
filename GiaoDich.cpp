#include "GiaoDich.h"

GiaoDich::GiaoDich() {
    donGia = 0;
    dienTich = 0;
    thanhTien = 0;
}

void GiaoDich::Nhap() {
    cin.ignore();
    cout << "Nhap ma giao dich: ";
    getline(cin, maGD);
    cout << "Nhap ngay, thang, nam giao dich (cach nhau khoang trang): ";
    cin >> ngay >> thang >> nam;
    cout << "Nhap don gia: ";
    cin >> donGia;
    cout << "Nhap dien tich: ";
    cin >> dienTich;
}

void GiaoDich::Xuat() {
    cout << "Ma GD: " << maGD << " Ngay: " << ngay << "/" << thang << "/" << nam
         << " Don gia: " << donGia << " Dien tich: " << dienTich << " Thanh tien: " << thanhTien;
}

void GiaoDich::TinhTien() {
}

int GiaoDich::LayLoai() {
    return 0;
}

double GiaoDich::LayThanhTien() {
    return thanhTien;
}

int GiaoDich::LayThang() {
    return thang;
}

int GiaoDich::LayNam() {
    return nam;
}
