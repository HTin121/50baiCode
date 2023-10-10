#include"Header.h"
#include<cmath>
void menu() {
	cout << "************************************************" << endl;
	cout << "Chon tu bai 1->50 " << endl;
	cout << "Vd: muon chon bai 1 nhan phim 1" << endl;
	cout << "Muon thoat nhan phim 0" << endl;
	cout << "************************************************" << endl;
}
//Bài 1
//Tính S(n) = 1 + 2 + 3 + … + n
//Trong đó n nhập từ người dùng, n > 3 và n < 50
void nhapThuong(int& n) {
	cout << "nhap vao 1 so tuy y : ";
	cin >> n;
}
void nhapB1(int& n) {
	do {
		cout << "nhap vao so >3 va <50 : ";
		cin >> n;
	} while (n <= 3 || n >= 50);
}
int tongB1(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s += i;
	}
	return s;
}
void xuatTong(int n) {
	cout << "tong la: " << n << endl;
}
//Bài 2
//Tính S(n) = 1^2+ 2^2+ 3^2+ … + n^2
//Trong đó n nhập từ người dùng, n >= 5 và n <= 20
void nhapB2(int& n) {
	do {
		cout << "nhap n>=5 va n<=20";
		cin >> n;
	} while (n < 5 || n>20);
}
int tongB2(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s += i * i;
	}
	return s;
}
//Bai 3
//Tính S(n) = 1 + 1/2+ 1/3+ … + 1/n
//Trong đó n nhập từ người dùng, n >= 7
void nhapB3(int& n) {
	do {
		cout << "nhap n >=7 : ";
		cin >> n;
	} while (n < 7);
}
float tongB3(int n) {
	float s;
	s = 0;
	for (int i = 1; i <= n; i++) {
		s += (float)1 / i;
	}
	return s;
}
//Bài 4
//Tính S(n) =1/2+ 1/4+ … + 1/2𝑛
//Trong đó n nhập từ người dùng, n > 9
void nhapB4(int& n) {
	do {
		cout << "nhap vao n>9 : ";
		cin >> n;
	} while (n <= 9);
}
float tongB4(int n) {
	float s;
	s = 0;
	for (int i = 1; i <= n; i++) {
		s = s+(float)1 / (2 * i);
	}
	return s;
}
//Bài 9
//Tính S(n) = 1 * 2 * 3 * … * n
//Trong đó n nhập từ người dùng, n > 6
void nhapB9(int& n) {
	do {
		cout << "nhap vao n>6: ";
		cin >> n;
	} while (n <= 6);
}
int tongB9GiaiThua(int n) {
	int s = 1;
	for (int i = 1; i <= n; i++) {
		s *= i;
	}
	return s;
}
//Bài 10
//Tính T(x, n) = x^n
//Trong đó x, n nhập từ người dùng
void nhapB10(int& x, int& n) {
	cout << "nhap vao x: ";
	cin >> x;
	cout << "nhap vao n: ";
	cin >> n;
}
int luyThua(int x, int n) {
	int luyThua = 1;
	for (int i = 1; i <= n; i++) {
		luyThua *= x;
	}
	return luyThua;
}
/*bài 11
Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3…n
Trong đó n nhập từ người dùng*/
int b11TongGiaiThua(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s+=tongB9GiaiThua(i);
	}
	return s;
}
//Bài 12
//Tính S(x, n) = x + x^2 + … + x^n
//Trong đó x, n nhập từ người dùng
void nhapB12(int& x, int& n) {
	cout << "nhap x : ";
	cin >> x;
	cout << "nhap n : ";
	cin >> n;
}
int tongb12(int x,int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s += luyThua(x, i);
	}
	return s;
}
//Bài 13
//Tính S(x, n) = x2 + x4 + … + x2n
//Trong đó x, n nhập từ người dùn
int tongb13(int x, int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s += luyThua(x, i*2);
	}
	return s;
}
//Bài 15
//Tính S(n) = 1 + 1/(1 + 2)+ 1/(1 + 2 + 3)+ … + 1/(1 + 2 + 3 + ⋯ + 𝑛3)
//Trong đó n nhập từ người dùn
float tongB15(int n) {
	float s=0;
	for (int i = 1; i <= n; i++) {
		s += (float)1 / tongB1(i);
	}
	return s;
}

//Bài 21
//Liệt kê tất cả các ước số của số nguyên dương n

void lietKeUoc(int n) {
	cout << "cac uoc so cua " << n << " la: ";
	for (int i = 1; i <= n; i++) {
		if (n%i==0)
			cout << i << " ";
	}
	cout << endl;
}

//Bài 22
//Tính tổng tất cả các ước số của số nguyên dương n
int tongUoc(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		if (n%i==0)
			s += i;
	}
	return s;
}

//Bài 23
//Tính tích tất cả các ước số của số nguyên dương n
int tichUoc(int n) {
	int tich = 1;
	for (int i = 1; i <= n; i++) {
		if (n%i==0)
			tich *= i;
	}
	return tich;
}

// 
//Bài 24
//Đếm số lượng các ước số của số nguyên dương n
int demUoc(int n) {
	int dem = 0;
	for (int i = 1; i <= n; i++) {
		if (n%i==0)
			dem++;
	}
	return dem;
}

//Bài 25
//Liệt kê tất cả các ước số lẽ của số nguyên dương n
void lietKeUocLe(int n) {
	cout << "cac uoc so le la: ";
	for (int i = 1; i <= n; i++) {
		if ((n%i==0) && (i % 2 != 0))
			cout << i<<" ";
	}
	cout << endl;
}
//Bài 26
//Liệt kê tất cả các ước số chẵn của số nguyên dương n
void lietKeUocChan(int n) {
	cout << "cac uoc so le la: ";
	for (int i = 1; i <= n; i++) {
		if ((n%i==0) && (i % 2 == 0))
			cout << i << " ";
	}
	cout << endl;
}

//Bài 27
//Tính tổng tất cả các ước số chẵn của số nguyên dương n
int tongUocChan(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		if ((n%i==0) && (i % 2 == 0))
			s += i;
	}
	return s;
}

//Bài 28
//Tính tích tất cả các ước số lẽ của số nguyên dương n
int tongUocLe(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		if ((n%i==0) && (i % 2 != 0))
			s += i;
	}
	return s;
}
//Bài 29
//Cho số nguyên dương n.Kiểm tra số nguyên dương n có phải là số nguyên tố hay không ?
bool kiemTraSoNguyenTo(int n) {
	int dem = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			dem++;
	}
	return dem == 2;
}

//Bài 30
//Cho số nguyên dương n.Kiểm tra số nguyên dương n có phải là số chính phương hay không ?
bool kiemTraSoChinhPhuong(int n) {
	if (sqrt(n) == (int)(sqrt(n)))
		return true;
	else
		return false;
}

//Bài 31
//Nhập vào hai số dương n và m, tìm ước chung lớn nhất của n và m
void nhapB31(int& n, int& m) {
	cout << "nhap vao 2 so can tim: ";
	cin >> m >> n;
}
int ucln(int n, int m) {
	while (n != m) {
		if (n > m)
			n = n - m;
		else
			m = m - n;
	}
	return n;
}

//Bài 32
//Nhập vào hai số dương n và m, tìm bội chung nhỏ nhất của n và m
int bcnn(int n, int m) {
	int tich;
	tich = n * m;
	return tich / ucln(n, m);
}

//Bài 33
//Giải phương trình f(x) = ax + b = 0
void nhapB33(int& a, int& b) {
	cout << "nhap vao a va b: ";
	cin >> a >> b;
}
void ptBac1(int a, int b) {
	float x;
	if (a == 0) {
		if (b == 0)
			cout << "phuong trinh vo so nghiem" << endl;
		else
			cout << "phuong trinh vo nghiem" << endl;
	}
	else {
		x = -b / (float)a;
		cout << "pt co nghiem la: " << x << endl;
	}
}

//Bài 34
//Giải phương trình f(x) = ax^2+ bx + c = 0
void nhapB34(int& a, int& b, int& c) {
	cout << "nhap vao a b va c: ";
	cin >> a >> b >> c;
}
void ptBac2(int a, int b, int c) {
	if (a == 0) {
		ptBac1(b, c);
	}
	else {
		int delta;
		float x1, x2;
		delta = b * b - 4 * a * c;
		if (delta > 0) {
			x1 = (float)(-b + sqrt(delta)) / (2 * a);
			x2 = (float)(-b - sqrt(delta)) / (2 * a);
			cout << "pt co hai nghiem phan biet: x1=" << x1 << "  x2=" << x2 << endl;
		}
		else if(delta==0){
			x1 = (float) - b / (2 * a);
			cout << "pt co nghiem kep: " << x1 << endl;
		}
		else {
			cout << "phuong trinh vo nghiem" << endl;
		}
	}
}

//Bài 35
//Nhập vào một tháng của năm, cho biết tháng thuộc quí mấy trong năm
void nhapB35(int& n) {
	do {
		cout << "nhap vao thang can tim: " << endl;
		cin >> n;
	} while (n < 1 || n>12);
}
void timQuy(int n) {
	switch(n) {
	case 1:
	case 2:
	case 3:
		cout << "thuoc quy 1" << endl;
		break;
	case 4:
	case 5:
	case 6:
		cout << "thuoc quy 2" << endl;
		break;
	case 7:
	case 8:
	case 9:
		cout << "thuoc quy 3" << endl;
		break;
	case 10:
	case 11:
	case 12:
		cout << "thuoc quy 4" << endl;
		break;
	}
}

//Bài 36
//Nhập vào một năm, kiểm tra năm đó có phải là năm nhuận hay không
bool ktNamNhuan(int n) {
	if ((n % 4 == 0) && (n % 100 != 0))
		return true;
	return false;
}


//Bài 37
//Nhập vào một tháng trong năm, tính số ngày tối đa trong tháng đó
void nhapB37(int& thang, int& nam) {
	cout << "nhap vao thang: ";
	cin >> thang;
	cout << "nhap vao nam: ";
	cin >> nam;
}
void soNgayToiDa(int thang ,int nam) {
	switch (thang) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "co toi da 31 ngay" << endl;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "co toi da 30 ngay" << endl;
		break;
	case 2:
		if (ktNamNhuan(nam))
			cout << "co toi da 29 ngay" << endl;
		else
			cout << "co toi da 28 ngay" << endl;
		break;
	default:
		cout << "nhap thang hop le" << endl;
	}
}

//Bài 38
//Dùng vòng lặp for để xuất tất cả các ký tự từ A đến Z
void xuatAZ() {
	for (char i = 'A'; i <= 'Z'; i++) {
		cout << i << " ";
	}
	cout << endl;
}
//Bài 41
//Viết chương trình nhập vào một ngày(ngày, tháng, năm), tìm ngày kế tiếp của ngày đó
void timNgayKe() {
	int ngayKe, thangKe, namKe;
	int ngay, thang, nam;
	int dsThang[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	cout << "nhap vao ngay thang nam can tim: ";
	cin >> ngay >> thang >> nam;
	if (ktNamNhuan(nam))
		dsThang[2] = 29;
	if (ngay < dsThang[thang]) {
		ngayKe = ++ngay;
		thangKe = thang;
		namKe = nam;
	}
	else {
		ngayKe = 1;
		thangKe = ++thang;
		namKe = nam;
		if (thang == 12) {
			thangKe = 1;
			namKe = ++nam;
		}
	}
	cout << ngayKe << "/" << thangKe << "/" << namKe << endl;
}
//Bài 42
//Viết chương trình nhập vào một ngày(ngày, tháng, năm), tìm ngày trước của ngày đó
void timNgayTruoc() {
	int ngayTruoc, thangTruoc, namTruoc;
	int ngay, thang, nam;
	int dsThang[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	cout << "nhap vao ngay thang nam can tim: ";
	cin >> ngay >> thang >> nam;
	if (ktNamNhuan(nam))
		dsThang[2] = 29;
	if (ngay > 1) {
		ngayTruoc = ngay-1;
		thangTruoc = thang;
		namTruoc = nam;
	}
	else {
		ngayTruoc = dsThang[thang-1];
		thangTruoc = thang-1;
		namTruoc = nam;
		if (thang == 1) {
			ngayTruoc = 31;
			thangTruoc = 12;
			namTruoc = nam-1;
		}
	}
	cout << ngayTruoc << "/" << thangTruoc << "/" << namTruoc << endl;
}
//Bài 43
//Viết chương trình nhập vào một ngày(ngày, tháng, năm), tính xem ngày đó là ngày thứ
//mấy trong năm
int demNgayThuMay() {
	int ngay, thang, nam;
	int tong=0;
	cout << "nhap vao ngay thang nam can tim: ";
	cin >> ngay >> thang >> nam;
	switch (thang) {
	case 12:
		tong += 30;
	case 11:
		tong += 31;
	case 10:
		tong += 30;
	case 9:
		tong += 31;
	case 8:
		tong += 31;
	case 7:
		tong += 30;
	case 6:
		tong += 31;
	case 5:
		tong += 30;
	case 4:
		tong += 31;
	case 3:
		tong += 28;
		if (nam % 4 == 0 && nam % 100 != 0)
			tong += 1;
	case 2:
		tong += 31;
	case 1:
		tong += ngay;
	}
	return tong;
}
//Bài 44
//Viết chương trình hiển thị bản cửu chương
void hienThiBccN(int n) {
	for(int i=1;i<=10;i++)
		cout << n << "*" << i << "=" << n * i << endl;
}
void hienThiBangCuuChuong() {
	for (int i = 1; i <= 10; i++) {
		hienThiBccN(i);
		cout << endl;
	}
}
//Bài 45
//Hiển thị bảng cửu chương n ra màn hình, n được nhập từ người dùng
//nhu bai 44

//Bài 46
//Viết chương trình xuất ra tam giác cân đặc có độ cao là h
//Ví dụ : h = 4
//6
//  *
// **
// ***
//****
void inKhoangCanh(int n) {
	for (int i = 1; i <= n; i++)
		cout << " ";
}
void inDauSao(int n) {
	for (int i = 1; i <= n; i++)
		cout << "* ";
}
void inTamGiacCan(int h) {
	int j = 1;
	for (int i = h; i > 0; i--) {
			inKhoangCanh(i);
			inDauSao(j);
			cout << endl;
			j++;
	}
}

//Bài 47
//Viết chương trình xuất ra tam giác cân rỗng có độ cao là h
//Ví dụ : h = 4
//  *
//  **
// * *
//****

//Bài 48
//Viết chương trình xuất ra tam giác vuông cân đặc có độ cao là h
//Ví dụ : h = 4
//*
//**
//***
//****
void inTamGiacVuongCan(int h) {
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= i; j++) {
				cout << "* ";
		}
		cout << endl;
	}
}

//Bài 49
//Viết chương trình xuất ra tam giác vuông cân rỗng có độ cao là h
//Ví dụ : h = 4
//7
//*
//**
//* *
//****
void inTamGiacVuongCan(int h) {
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= i; j++) {
			if (i == h || j == 1 || j == i)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}
}