#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	double datax[100], datay[100] , fcari , selisih, tpusat, ipusat;
	int banyak , cari ,sikon;
	cout << "banyak data : "; 
	cin >> banyak;
	cout << "masukan data x "<<endl;
	for(int x = 0; x<banyak; x++){
		cin >> datax[x];
	}
	cout << "masukan data f(x)" <<endl;
	for(int x = 0; x<banyak; x++){
		cin >> datay[x];
	}
	//mencari selisih
	selisih = datax[1] - datax[0];
	cout << "mau f berapa : ";
	cin >> fcari;
	for (int x = 0;  x<banyak; x++){
		if (fcari == datax[x]){
			cari = x;
			sikon = 1;
			break;
		}else if (fcari < datax[x]){
			cari = x;
			sikon = 2;
			break;
		}
	}
	switch (sikon){
		// menghitung hasil
		case 2 :
			tpusat = ((datay[cari] - datay[cari-1]) / (2 * (selisih / 2)));
			cout << "hasil taylor pusat f'(" << fcari << ") =" << tpusat << endl;
			//mencek nilai yang ini masih belum fix
			if ( datay[cari-2] == 0){
				break;
			}else{
				ipusat = (-datay[cari+1] + 8 * datay[cari] - 8 *datay[cari-1] + datay[cari-2])/(12 * (selisih /2));
				cout << "hasil polinom pusat f'(" << fcari << ") =" << ipusat << endl;
			}
			break;
		case 1 : 
			tpusat = ((datay[cari + 1] - datay[cari -1]) / (2 * selisih));
			cout << "hasil taylor pusat f'(" << fcari << ") =" << tpusat << endl;
			
			//mencek data mencukupi tidaknya
			if (datay[cari + 2] == 0){
			}else if ( datay[cari -2] == 0){
			}else{
				ipusat = ((-datay[cari + 2] + 16 * datay[cari + 1] - 30 * datay[cari] + 16 * datay[cari-1] - datay[cari-2])/(12 * selisih * selisih));
				cout << "hasil polinom pusat f''(" << fcari << ") =" << ipusat << endl;
			}
			break;
		}

	return 0;
}
