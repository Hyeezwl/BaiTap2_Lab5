#include "CongTy.h"

CongTy::CongTy() {
    soLuong = 0;
}

void CongTy::NhapDanhSach() {
    cout << "Nhap so luong giao dich: ";
    cin >> soLuong;

    for (int i = 0; i < soLuong; i++) {
        int chon;
        cout << "\nNhap giao dich thu " << i + 1 << endl;
        cout << "Nhap 1 cho Dat, 2 cho Nha Pho, 3 cho Chung Cu: ";
        cin >> chon;

        if (chon == 1) {
            danhSach[i] = new GiaoDichDat();
        } else if (chon == 2) {
            danhSach[i] = new GiaoDichNhaPho();
        } else {
            danhSach[i] = new GiaoDichChungCu();
        }

        danhSach[i]->Nhap();
        danhSach[i]->TinhTien();
    }
}

void CongTy::ThongKeSoLuong() {
    int demDat = 0, demNha = 0, demChungCu = 0;

    for (int i = 0; i < soLuong; i++) {
        if (danhSach[i]->LayLoai() == 1) demDat++;
        else if (danhSach[i]->LayLoai() == 2) demNha++;
        else if (danhSach[i]->LayLoai() == 3) demChungCu++;
    }

    cout << "\nTHONG KE SO LUONG" << endl;
    cout << "Giao dich Dat: " << demDat << endl;
    cout << "Giao dich Nha pho: " << demNha << endl;
    cout << "Giao dich Chung cu: " << demChungCu << endl;
}

void CongTy::TinhTrungBinhChungCu() {
    double tongTien = 0;
    int demChungCu = 0;

    for (int i = 0; i < soLuong; i++) {
        if (danhSach[i]->LayLoai() == 3) {
            tongTien += danhSach[i]->LayThanhTien();
            demChungCu++;
        }
    }

    cout << "\nTRUNG BINH THANH TIEN CHUNG CU" << endl;
    if (demChungCu > 0) {
        cout << "Trung binh: " << tongTien / demChungCu << endl;
    } else {
        cout << "Khong co giao dich chung cu.\n";
    }
}

void CongTy::TimNhaPhoGiaCaoNhat() {
    double maxTien = -1;
    int viTri = -1;

    for (int i = 0; i < soLuong; i++) {
        if (danhSach[i]->LayLoai() == 2) {
            if (maxTien == -1 || danhSach[i]->LayThanhTien() > maxTien) {
                maxTien = danhSach[i]->LayThanhTien();
                viTri = i;
            }
        }
    }

    if (viTri != -1) {
        cout << "\nGIAO DICH NHA PHO GIA CAO NHAT\n";
        danhSach[viTri]->Xuat();
    } else {
        cout << "\nKhong co giao dich nha pho.\n";
    }
}

void CongTy::XuatGiaoDichThang12Nam2024() {
    cout << "\nDANH SACH GIAO DICH THANG 12/2024\n";
    bool coGiaoDich = false;

    for (int i = 0; i < soLuong; i++) {
        if (danhSach[i]->LayThang() == 12 && danhSach[i]->LayNam() == 2024) {
            danhSach[i]->Xuat();
            coGiaoDich = true;
        }
    }

    if (coGiaoDich == false) {
        cout << "Khong co giao dich nao trong thang 12 nam 2024.\n";
    }
}
