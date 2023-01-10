#include <iostream>
#include <cmath>

using namespace std;

    
    struct data{
        double x;
        double y;
    };
  
    string korelasi,hubungan;

    int main() {
    data nilai[100];
    int n;
    double r,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12,r13;
    double KD;
 	
	 
	cout << "\n";
 	cout << "                                           REGRESI LINEAR SEDERHANA\n";
 	cout << "\n";
 	cout << "                                               Nama mahasiswa :\n";
 	cout << "                                           Agung Tauhid [15-2021-184]\n";
 	cout << "\n";
 	cout << "                                            UAS Pemrograman Dasar\n";
 	cout << " -----------------------------------------------------------------------------------------------------------------------\n";
	cout << endl ;

    cout<< "masukan banyak data: ";cin>>n;
    for(int i=1; i<=n;i++){
        do {
        cout<<""<<endl;
		cout<<"Input X-"<<i<<' '<<" : ";cin>>nilai[i].x;
		cout<<"Input Y-"<<i<<' '<<" : ";cin>>nilai[i].y;
		}
		while(nilai[i].x<0);
		while(nilai[i].y<0);
	}
    cout<<endl;
    	//bagian atas
        for(int i=1; i<=n;i++){
        r1=r1+nilai[i].x; //nilai x
        r2=r2+nilai[i].y; //nilai y
        r3=r3+nilai[i].x*nilai[i].y; //nilai xy
        
        //bagian bawah
        r4=r4+nilai[i].x*nilai[i].x;//nilai sigma x^2
        r7=r7+nilai[i].y*nilai[i].y;//nilai sigma y^2
    }
    r5=r5+r1; // nilai x
	r6=r5*r5; // nilai sigma x dikuadratkan
	r8=r8+r2; // nilai y
	r9=r8*r8; // nilai y dikuadratkan
	r11=n*r4-r6; // akar 1
	r12=n*r7-r9; // akar 2
	
	r10=n*r3-r1*r2;//perhitungan atas
	r13=sqrt(r11)*sqrt(r12);//perhitungan bawah
	r=r10/r13; // nilai korelasi r
	
	// rumus perhitungan Koefisien Determinasi
	KD=(r*r)*0.1;
	cout<<"korelasi= "<<r<<endl;
	cout<<"koefisien determinasi= "<<KD<<endl;

if (r>0.70){
		korelasi="Hubungan korelasi sangat kuat";
	}
	else if (r>=0.50){
		korelasi="Hubungan korelasi sedang";
	}
	else if (r>=0.30){
		korelasi="Hubungan korelasi moderat";
	}
	else if (r>=0.10){
		korelasi="Hubungan korelasi rendah";
	}
	else if (r<0.10) {
		korelasi="Hubungan korelasi diabaikan";
	}
	cout<< korelasi<<endl;
	if (r>0){
		hubungan="Hubungan antara variable x dan y adalah positif, dimana jika nilai x bertambah, maka nilai y pun akan bertambah dan juga sebaliknya";

	}
	else if(r<0){
		hubungan="Hubungan antara variable x dan y adalah negatif, dimana jika nilai x bertambah, maka nilai y akan mengecil dan juga sebaliknya";
	}
	else if (r=0){
		hubungan="Tidak ada hubungan antara variable x dan y";
	}
	cout<<hubungan<<endl;
}
