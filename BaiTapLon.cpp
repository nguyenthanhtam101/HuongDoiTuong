#include<iostream>
#include<cstring> 
using namespace std;

class Nhanvien
{
	private :
		int manv;
		string hoten;
		double luong;
		
	public :
		void nhap()
		{
			cout<<"Nhap ma nhan vien: ";
			cin>>manv;
			cin.ignore(); 
			cout<<endl;
			cout<<"Nhap ho ten nhan vien: ";
			getline(cin,hoten);
			cout<<endl;
			cout<<"Nhap vao luong nhan vien: ";
			cin>>luong;
		};
		void xuat()
		{
			cout<<"Ma nhan vien: "<<manv<<"\n";
			cout<<"Ho ten nhan vien: "<<hoten<<"\n";
			cout<<"Luong nhan vien "<<hoten<<" la: "<<luong<<"\n";
		};
		int getMaNV() const 
		{
			return manv;
		}
		void getTenNV(const string& tenmoi)
		{
			hoten = tenmoi;
		}
		void getLuong(double Luongmoi)
		{
			luong = Luongmoi;
		}
		void hienthiThongTin () const 
		{
			cout<<"MaNV: "<<manv<<" ,Ho ten: "<<hoten<<" ,Luong: "<<luong<<endl;
		 } 
};
void deleteNV(Nhanvien arr[] ,int& soLuongNhanvien ,int maNVXoa)
{
	for(int i=0 ;i< soLuongNhanvien ;i++)
	{
		if(arr[i].getMaNV() == maNVXoa)
		{
			for(int j=i ; j<soLuongNhanvien -1 ;j++)
			arr[j] = arr[j+1];
		}
		soLuongNhanvien--;
		cout<<"Da xoa nhan vien co ma "<<maNVXoa<<" thanh cong!"<<endl;
		return ;
	}
}

void TimNhanvienTheoMa(Nhanvien arr[],int& soLuongNhanvien,int maNVTim)
{
	for(int i=0 ;i<soLuongNhanvien ;i++)
	{
		if(arr[i].getMaNV() == maNVTim)
		{
			cout<<"Da tim thay nhan vien:\n";
			arr[i].hienthiThongTin();
			return;
		}
	}
	cout<<"Khong tim thay nhan vien co ma "<<maNVTim;
}

int main()
{
	Nhanvien nv;
	const int Max_Nhanvien = 100;
	Nhanvien danhsach[Max_Nhanvien];
	int soLuongNhanvien =0; 
//y1	
	danhsach[soLuongNhanvien++].nhap();
	cout<<endl;
	danhsach[soLuongNhanvien++].nhap();
	cout<<endl;
	
//y2
	for (int i=0 ;i< soLuongNhanvien ;i++)
	{
		danhsach[i].xuat();
	}
	cout<<endl;

	
//Y3
	int maNVCanTim;
	cout<<"Nhap ma nhan vien can tim: ";
	cin>>maNVCanTim;
	TimNhanvienTheoMa(danhsach,soLuongNhanvien, maNVCanTim);

//y4
	int maCanXoa =2;
	deleteNV(danhsach ,soLuongNhanvien ,maCanXoa);
	
	for (int i=0 ;i< soLuongNhanvien ;i++)
	{
		danhsach[i].xuat();
	}
	
	
}

