/*Tugas1 Prak.Prodas*/
/*Menghitung segitiga siku-siku*/
/*Filza Hisana*/
/*NIM: 20051397018*/

#include <iostream>
#include <math.h>

using namespace std;
int main()
{
   char pilihan;
   int alas,tinggi,siring,luas,keliling;
   string line = "_________________________________________________________________ \n \n";
   
   cout << line;
   cout << 	"		  Menghitung Segitiga Siku-Siku \n ";
   cout << line;
   cout << "  Pilihan : \n";
   cout << "    1. Menghitung Panjang Sisi Miring \n    2. Menghitung Keliling Segitiga \n    3. Menghitung Luas Segitiga \n    4. Batalkan Operasi \n\n";
   cout << "  Pilihan kamu : ";
   cin  >>  pilihan;
   cout << line;
   
   switch (pilihan)
   {
       
   case '1':
    {
    	cout << "  Masukan Alas Segitiga :";
		cin  >> alas;
		cout << "  Masukan Tinggi Segitiga :";
		cin  >> tinggi;
		cout << "\n";
        cout << "  Panjang Sisi Miring Segitiga adalah ";
        siring = sqrt (alas * alas + tinggi * tinggi);
        cout  <<  siring << "cm \n";
        break;
    }
   
   case '2':
    {
    	cout << "  Masukan Alas Segitiga :";
		cin  >> alas;
		cout << "  Masukan Tinggi Segitiga :";
		cin  >> tinggi;
		cout << "\n";
        cout << "  Keliling Segitiga adalah ";
        siring = sqrt (alas * alas + tinggi * tinggi);
        keliling = alas + tinggi + siring;
        cout << keliling << "cm \n";
        break;
    }
    
   case '3':
    {
		cout << "  Masukan Alas Segitiga :";
		cin  >> alas;
		cout << "  Masukan Tinggi Segitiga :";
		cin  >> tinggi;
		cout << "\n";
        cout << "  Luas Segitiga adalah ";
        luas = alas * tinggi / 2;
        cout << luas << "cm \n";
        break;
    }
    
   case '4':
    {
        cout << "  Kamu Membatalkan Operasi \n";
        break;
    }
        
   }
   cout <<line;
   cout << "                  Terimakasih Sudah Bekerjasama \n";
   cout <<line;
   return 0;
   
}
