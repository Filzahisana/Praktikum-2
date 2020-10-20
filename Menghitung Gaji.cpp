/*Tugas1 Prak.Prodas*/
/*Menghitung gaji karyawan*/
/*Filza Hisana*/
/*NIM: 20051397018*/

#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    char Nama [40],Golongan;
    int  JamKerja,GajiJam,JamLembur,GajiMingguan,GajiLembur,TotalGaji;
    string line =   "_______________________________________________________________";

    cout << line << endl << endl;
    cout <<         "                   Menghitung Gaji Karyawan                    " << endl;
    cout <<         "                       PT. Misal Makmur                        " << endl;
    cout << line << endl << endl;
    cout << endl;
    cout << "  Masukan Nama Kamu : ";
    cin  >> Nama;
    cout << endl;
    cout << "  Masukan Golongan Kamu [ a | b | c | d ] ";
    cout << endl;
    cout << "  Pilih Salah Satu : ";
    cin  >> Golongan;
    cout << endl;
    cout << "  Masukan Jam kerja Kamu : ";
    cin  >> JamKerja ;
    cout << endl << line <<endl <<endl;

    switch (Golongan)
    {
        case 'a':
        {
            GajiJam = 5000;
            break;
        }

        case 'b':
        {
            GajiJam = 7000;
            break;
        }

        case 'c':
        {
            GajiJam = 8000;
            break;
        }

        case 'd':
        {
            GajiJam = 10000;
            break;
        }

    }

	cout << "  Hai " << Nama << endl<<endl;
	
    if ( JamKerja > 48 )
    {
        JamLembur = JamKerja - 48;
        cout << "  Minggu ini kamu lembur selama : " << JamLembur << " Jam " << endl;
        GajiMingguan = ( JamKerja * Golongan )+( JamLembur * 4000 );
    }

    else if ( JamKerja < 48 )
    {
        GajiMingguan = ( JamKerja * Golongan );
    }

	cout << "  Gaji Kamu Minggu Ini Sebesar Rp." << GajiMingguan << ",-" << endl <<endl;
    cout << "  Tetap semangat jalani hari, jangan lupa bahaiaa :)" << endl;
	cout << line ;
	cout << "						|  Terimakasih  |					";
    cout << line << endl;
    return 0;
}
