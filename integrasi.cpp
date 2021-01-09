#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	double xt[100] , x[100] , fx[100] , fxb[100] , selisih , hasil1 , hasil2, total ,eksak;
	int banyak , pilih;
	cout << "menu pilihan kaidah \n1.trapesium\n2.simson 1/3\n3.simson 3/8\n4.titik tengah\nMasukan pilihan : ";
	cin >> pilih;
	cout << "berapa banyak data : ";
	cin >> banyak;
	cout << "masukan x" <<endl;
	for (int i = 0; i < banyak; i++){
		cin >> x[i];
	}
	cout <<endl;
	selisih = x[1] - x[0];
	//mencaru x tengah
	for (int i = 0; i < banyak; i++){
		xt[i] = x[0] + (i + 0.5) * selisih;
	}
	// cek jika nilai x tengah lebih besar dari x akhir maka nilainya di kasih 0;
	for (int i = 0 ; i<banyak ; i++){
		if (xt[i] > x[banyak-1]){
			xt[i] = 0;
		}
	}
	cout << endl;
	// mencari fx
	for (int i = 0; i < banyak; i++){
		fx[i] = exp(x[i]);
	}
	// mencari fx baru
	for (int i =0; i<banyak; i++){
		fxb[i] = exp(xt[i]);
		cout << fxb[i] <<endl;
	}

	//rumus

	switch(pilih){
		case 1 :
		hasil1 = selisih / 2;
			for (int i = 0; i<banyak; i++){
				if (i == 0){
					hasil2 += fx[i];
				}else if (i == banyak-1){
					hasil2 += fx[i];
				}else{
					hasil2 += 2*fx[i];
				}
			}
			break;
		case 2 :
		hasil1 = selisih / 3;
			for (int i = 0 ; i < banyak ; i++){
				if (i == 0){
					hasil2 += fx[i];
				}else if (i == banyak-1){
					hasil2 += fx[i];
				}else if (i % 2 != 0){
					hasil2 += 4*fx[i];
				}else if (i % 2 == 0){
					hasil2 += 2*fx[i];
				}
			}
			break;
		case 3 : 
			hasil1 = ((3*selisih) / 8);
			for (int i = 0; i <banyak; i++){
				if (i == 0){
					hasil2 += fxb[i];
				}else if (i == banyak-1){
					hasil2 += fxb[i];
				}else if (i % 3 == 0){
					hasil2 += 2 * fxb[i];
				}else{
					hasil2 += 3 * fxb[i];
				}
			}
			break;
		case 4 :
		hasil1 = selisih;
			for(int i = 0; i < banyak; i++){
				if (i == banyak-1){
					cout << "hallo" <<endl;
					break;
				}else{
					hasil2 += fxb[i];
				}
			}
	}
	total = hasil1 * hasil2;
	eksak = abs(exp(x[0]) - exp(x[banyak-1])) ;
	cout <<endl;
	cout << "hasil = "<<total <<endl;
	cout << "eksak = " << eksak <<endl;
	cout << "eror = " << abs((eksak - total) /eksak ) << "%" <<endl;

	cout <<endl;
	return 0;
}
