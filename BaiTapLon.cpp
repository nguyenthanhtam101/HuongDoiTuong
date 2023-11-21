#include<iostream>
#include<cstring> 
#include <algorithm>
using namespace std;

class NhanVien
{
public:
    int manv;
    string hoten;
    double luong;

public:
    void nhap()
    {
        cout << "Nhap ma nhan vien: ";
        cin >> manv;
        cin.ignore();
        cout << endl;
        cout << "Nhap ho ten nhan vien: ";
        getline(cin, hoten);
        cout << endl;
        cout << "Nhap vao luong nhan vien: ";
        cin >> luong;
    };
    void xuat()
    {
        cout << "Ma nhan vien: " << manv << "\n";
        cout << "Ho ten nhan vien: " << hoten << "\n";
        cout << "Luong nhan vien " << hoten << " la: " << luong << "\n";
    };
    int getMaNV() const
    {
        return manv;
    }
    void setTenNV(const string &tenmoi)
    {
        hoten = tenmoi;
    }
    void setLuong(double Luongmoi)
    {
        luong = Luongmoi;
    }
    void hienthiThongTin() const
    {
			cout <<"MaNV: " << manv << " ,Ho ten: " << hoten << " ,Luong: " << luong << endl;
    }
    //5
    static bool SapLuongNV(const NhanVien &a, const NhanVien &b)
    {
        return a.luong > b.luong;
    }
    //4
    static bool SoSanhNVTheoTenvaLuong(const NhanVien &a, const NhanVien &b)
    {
        if (a.hoten != b.hoten)
        {
            return a.hoten < b.hoten;
        }
        return a.luong > b.luong;
    }
	//6
    void capNhatThongTin()
    {
        cout << "Nhap vao thong tin cap nhat cho nhan vien co ma " << manv << ": \n";
        cout << "Nhap ho ten moi: ";
        cin.ignore(); 
        getline(cin, hoten);

        cout << "Nhap vao luong moi: ";
        cin >> luong;
    }
};

//1
void deleteNV(NhanVien arr[], int &soLuongNhanvien, int maNVXoa)
{
    for (int i = 0; i < soLuongNhanvien; i++)
    {
        if (arr[i].getMaNV() == maNVXoa)
        {
            for (int j = i; j < soLuongNhanvien - 1; j++)
                arr[j] = arr[j + 1];
        }
    }
    soLuongNhanvien--;
    cout << "Da xoa nhan vien co ma " << maNVXoa << " thanh cong!" << endl;
    return;
}

//2
void TimNhanvienTheoMa(NhanVien arr[], int &soLuongNhanvien, int maNVTim)
{
    for (int i = 0; i < soLuongNhanvien; i++)
    {
        if (arr[i].getMaNV() == maNVTim)
        {
            cout << "Da tim thay nhan vien:\n";
            arr[i].hienthiThongTin();
            return;
        }
    }
    cout << "Khong tim thay nhan vien co ma " << maNVTim<< endl;
}

//3
void TimNVTheoLuong(const NhanVien arr[], int soLuongNhanVien, double luongTim)
{
    bool timThay = false;
    for (int i = 0; i < soLuongNhanVien; ++i)
    {
        if (arr[i].luong == luongTim) 
        {
            arr[i].hienthiThongTin();
            timThay = true;
        }
    }
    if (!timThay)
    {
        cout << "Khong tim thay nhan vien co muc luong " << luongTim << "." << endl;
    }
}

int main()
{
    NhanVien nv;
    const int Max_Nhanvien = 100;
    NhanVien danhsach[Max_Nhanvien];
    int soLuongNhanvien = 0;

    // nhap
    danhsach[soLuongNhanvien++].nhap();
    cout << endl;
    danhsach[soLuongNhanvien++].nhap();
    cout << endl;
	danhsach[soLuongNhanvien++].nhap();
    cout << endl;
    danhsach[soLuongNhanvien++].nhap();
    cout << endl;
    danhsach[soLuongNhanvien++].nhap();
    cout << endl;
    danhsach[soLuongNhanvien++].nhap();
    cout << endl;
    danhsach[soLuongNhanvien++].nhap();
    cout << endl;
    // xuat
    for (int i = 0; i < soLuongNhanvien; i++)
    {
        danhsach[i].xuat();
    }
    cout << endl;
	// 6 cap nhat nhan vien  
//    cout<<"Nhap ma nv can cap nhat: ";
//    cin>>nv.manv;
//    nv.capNhatThongTin();
//    cout<<"Nhan vien co ma la "<<nv.manv <<"sau khi cap nhat: \n";
//	nv.xuat(); 

    // 1 xoa nv theo ma(ok)
//    int maCanXoa = 2;
//    deleteNV(danhsach, soLuongNhanvien, maCanXoa);
//
//    for (int i = 0; i < soLuongNhanvien; i++)
//    {
//        danhsach[i].xuat();
//    }

    // 2 tim nv theo ma(ok)
//    int maNVCanTim;
//    cout << "Nhap ma nhan vien can tim: ";
//    cin >> maNVCanTim;
//    TimNhanvienTheoMa(danhsach, soLuongNhanvien, maNVCanTim);

    // 3 tim nv theo luong(ok)
//    double timLuong;
//    cout << "Nhap luong can tim: ";
//    cin >> timLuong;
//    TimNVTheoLuong(danhsach, soLuongNhanvien, timLuong);

    // 4 sap xep theo ten va luong (ok) 
//    sort(danhsach, danhsach + soLuongNhanvien, NhanVien::SoSanhNVTheoTenvaLuong);
//    for (int i = 0; i < soLuongNhanvien; i++)
//    {
//        danhsach[i].hienthiThongTin();
//    }

    // 5 sap xep theo luong (ok)
//    sort(danhsach, danhsach + soLuongNhanvien, NhanVien::SapLuongNV);
//    for (int i = 0; i < soLuongNhanvien; i++)
//    {
//        danhsach[i].hienthiThongTin();
//    }
//top 5 nv luong cao
//	cout<<"Top 5 nhan vien co thu nhap cao nhat la: \n";
//	sort(danhsach, danhsach + soLuongNhanvien, NhanVien::SapLuongNV);
//	for (int i=0 ;i< 6 ;i++)
//	{
//        danhsach[i].hienthiThongTin();
//	} 

    return 0;
}
