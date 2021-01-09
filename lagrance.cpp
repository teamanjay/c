
#include <iostream>
using namespace std;

int main()
{
	float xBar,hasil;
	float x[100],f[100],l[100],hitung;
	int n,i,j,k;
	cout << "" <<endl;
	cout << "Tugas Metnum METODE LAGRANGE"<<endl;
	cout <<endl;
	cout << "Masukkan Jumlah Data : "; cin >>n;
	cout << "\n";
	cout << "masukan nilai x";
	//langsung copas dari data
		for(int i = 0; i<n; i++){
			cin >> x[i];
		}
		cout << "Masukkan nilai f " <<endl;
		for(int i = 0; i<n; i++){
			cin >> f[i];
		}
		
	cout << "\n";
	cout << "\nMasukkan nilai xBar : "; cin >> xBar;
	cout << "\n";
	cout << "sehingga titik titiknya adalah :n ";
	cout << "\n";
		for (i=0;i<n;i++){
		        cout <<"("<<x[i]<<","<<f[i]<<")"<<endl;
		    }
	// x tetap dalam rumus
	cout << "dengan nilai xBar = " << xBar ;
	hasil=(f[0]*((xBar-x[1])/(x[0]-x[1]))*((xBar-x[2])/(x[0]-x[2])))+(f[1]*((xBar-x[0])/(x[1]-x[0]))*((xBar-x[2])/(x[1]-x[2])))+(f[2]*((xBar-x[0])/(x[2]-x[0]))*((xBar-x[1])/(x[2]-x[1])));
	cout << "\nMaka nilai yBar untuk xBar : " << xBar <<endl ;
	cout << "\nadalah : " << hasil <<endl;
return(0);
}