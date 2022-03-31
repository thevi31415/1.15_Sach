#include <iostream>
#include <string.h>
using namespace std;
struct SACH {
	char MS[50];
	char TEN[100];
	char TG[100];
	int SL;
};
void nhap(SACH x[], int &n);
void nhap1quyensach(SACH &x);
void tim(SACH A[], int n);
void xuat1sach(SACH x);
void tong(SACH A[], int n);
int main() {
	
	SACH A[1000];
	int n;
	nhap(A, n);
	tim(A, n);
	tong(A, n);
}
void nhap(SACH x[], int &n){
	
cout << "Nhap so luong sach: "; cin >> n;
for(int i=0; i<n; i++){
		fflush(stdin);
	cout << "Nhap thong tin sach thu " << i+1 << endl;
nhap1quyensach(x[i]);

	 
	}
}
void tim(SACH A[], int n){
	char TIM[100];
    fflush(stdin);
    int dem =0;
	cout << "Nhap ten sach can tim : "; gets(TIM);
	for(int i =0; i<n; i++){
		if(strcmp(A[i].TEN, TIM)==0) {
		xuat1sach(A[i]);
			dem =dem+1;
			}
	}
	if(dem==0){
		cout << "KHONG TIM THAY";
		}
	}
void tong(SACH A[], int n){
	int s=0;
	for(int i=0; i<n; i++){
		s= s+A[i].SL;
		}
	
	cout << "Tong so sach la: " << s;
	}
void nhap1quyensach(SACH &x){
	fflush(stdin);
	cout << "Nhap ma so: "; cin >> x.MS;
	cout << "Nhap ten sach: "; cin >> x.TEN;
	cout << "Nhap tac gia: "; cin >> x.TG;
	cout << "Nhap so luong: "; cin >> x.SL;
	}
void xuat1sach(SACH x){
	cout << "Ma so: " << x.MS << endl;
	cout << "Ten: " << x.TEN << endl;
	cout << "Tac gia: " << x.TG <<endl;
	cout << "So luong: " << x.SL << endl;
	}

