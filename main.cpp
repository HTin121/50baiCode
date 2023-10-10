#include"Header.h"
int main() {
	int n, x, m, chon, thang, nam, h;
	float tong = 0;
	menu();
	do {
		cout << "nhap vao cau ban muon chon: " << endl;
		cin >> chon;
		switch (chon) {
		case 1:
			nhapB1(n);
			xuatTong(tongB1(n));
			break;
		case 2:
			nhapB2(n);
			xuatTong(tongB2(n));
			break;
		case 3:
			nhapB3(n);
			cout<<"tong la "<<tongB3(n);
			break;
		case 4:
			nhapB4(n);
			cout << "tong la: " << tongB4(n) << endl;
			break;
		case 9:
			nhapB9(n);
			xuatTong(tongB9GiaiThua(n));
			break;
		case 10:
			nhapB10(x,n);
			xuatTong(luyThua(x, n));
			break;
		case 11:
			nhapThuong(n);
			xuatTong(b11TongGiaiThua(n));
		case 12:
			nhapB12(x,n);
			xuatTong(tongb12(x,n));
			break;
		case 13:
			nhapB12(x, n);
			xuatTong(tongb13(x, n));
			break;
		case 15:
			nhapThuong(n);
			cout << "tong la: " << tongB15(n) << endl;
			break;
		case 21:
			nhapThuong(n);
			lietKeUoc(n);
			break;
		case 22:
			nhapThuong(n);
			xuatTong(tongUoc(n));
			break;
		case 23:
			nhapThuong(n);
			cout<<"tich cac uoc la: "<<tichUoc(n);
			break;
		case 24:
			nhapThuong(n);
			cout << "so luong cac uoc so cua " << n << " la " << demUoc(n) << endl;
			break;
		case 25:
			nhapThuong(n);
			lietKeUocLe(n);
			break;
		case 26:
			nhapThuong(n);
			lietKeUocChan(n);
			break;
		case 27:
			nhapThuong(n);
			xuatTong(tongUocChan(n));
			break;
		case 28:
			nhapThuong(n);
			xuatTong(tongUocLe(n));
			break;
		case 29:
			nhapThuong(n);
			if (kiemTraSoNguyenTo(n))
				cout << n << " la so nguyen to" << endl;
			else
				cout << n << " ko la so nguyen to" << endl;
			break;
		case 30:
			nhapThuong(n);
			if (kiemTraSoChinhPhuong(n))
				cout << n << " la so chinh phuong" << endl;
			else
				cout << n << " ko la so chinh phuong" << endl;
			break;
		case 31:
			nhapB31(n,m);
			cout << "uoc chung lon nhat la: " << ucln(n, m) << endl;
			break;
		case 32:
			nhapB31(n,m);
			cout << "boi chung nho nhat la: " << bcnn(n, m) << endl;
			break;
		case 33:
			nhapB33(n, m);
			ptBac1(n, m);
			break;
		case 34:
			nhapB34(n, m,x);
			ptBac2(n, m, x);
			break;
		case 35:
			nhapB35(n);
			timQuy(n);
			break;
		case 36:
			nhapThuong(n);
			if (ktNamNhuan(n))
				cout << "la nam nhuan" << endl;
			else
				cout << "ko la nam nhuan" << endl;
			break;
		case 37:
			nhapB37(thang, nam);
			soNgayToiDa(thang,nam);
			break;
		case 38:
			xuatAZ();
			break;
		case 42:
			timNgayTruoc();
			break;
		case 41:
			timNgayKe();
			break;
		case 43:
			int tong;
			tong= demNgayThuMay();
			cout << "la ngay thu " << tong << " trong nam";
			break;
		case 44:
			hienThiBangCuuChuong();
			break;
		case 45:
			nhapThuong(n);
			hienThiBccN(n);
			break;
		case 46:
			nhapThuong(h);
			inTamGiacCan(h);
			break;
		case 48:
			nhapThuong(h);
			inTamGiacVuongCan(h);
		default:
			cout << "vui long chon lai" << endl;
		}
	} while (chon != 0);
	return 0;
}