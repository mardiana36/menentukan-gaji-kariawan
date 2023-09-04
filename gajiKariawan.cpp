#include <ctype.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;
/*
NAMA : SANG PUTU MARDIANA
NIM : 220040169
KELAS : BC224 KONSEP DASAR PEMROGRAMAN
PRODI : TEKNOLOGI INFORMASI
*/
//program menghitung gaji kariawan dari kriterianya mengunakan looping dan selection
int main() {
  int  gaji, anak, total;
  char istri, golongan, pilihLg;
  ulangLg:
  system("cls");
    cout << "========================PROGRAM MENGHITUNG GAJI KARIWAWAN========================||"
         << "\n||============================BERDASARKAN KRITERIANYA============================||"
         << "\n||===============================================================================||"
         << "\n|| Golongan      | Gaji          | Istri         | Per anak      | Uang makan    ||"
         << "\n||===============|===============|===============|===============|===============||"
         << "\n|| A             | Rp3.000.000   | Rp500.000     | Rp200.000     | Rp1.000.000   ||" 
         << "\n||===============|===============|===============|===============|===============||"
         << "\n|| B             | Rp2.000.000   | Rp300.000     | Rp150.000     | Rp800.000     ||" 
         << "\n||===============|===============|===============|===============|===============||"
         << "\n|| C             | Rp1.200.000   | Rp200.000     | Rp50.000      | Rp700.000     ||"
         << "\n||===============|===============|===============|===============|===============||"
         << "\n====>>Masukan Kriteria Golongan Kariawan [A/B/C]:";
    cin >> golongan;
    switch (toupper(golongan)) {
    case 'A': 
    ulang:
      gaji = 3000000;
      total = gaji ;
      cout << "====>>Memiliki Istri? [y = iya / t = tidak]:";
      cin >> istri;
      if (tolower(istri) == 'y') {
        total += 500000;
      } else if (tolower(istri) == 't') {
        total = gaji;
      } else {
        cout << "Terjadi kesalahan!!!" << endl;
        goto ulang;
      }
      cout << "====>>Jumlah anak? [0/1/2/3/4/5/....]:";
      cin >> anak;
      if (anak == 0) {
        total = total;
      } else {
        total += (200000*anak) ;
      }
      total += 1000000;
      break;
    case 'B':
    ulang2:
      gaji = 2000000;
      total = gaji ;
      cout << "====>>Memiliki Istri? [y = iya / t = tidak]:";
      cin >> istri;
      if (tolower(istri) == 'y') {
        total += 300000;
      } else if (tolower(istri) == 't') {
        total = gaji;
      } else {
        cout << "Terjadi kesalahan!!!" << endl;
        goto ulang2;
      }
      cout << "====>>Jumlah anak? [0/1/2/3/4/5/....]:";
      cin >> anak;
      if (anak == 0) {
        total = total;
      } else {
        total += (150000*anak);
      }
      total += 800000;
      break;
    case 'C':
    ulang3:
      gaji = 1200000;
      total = gaji ;
      cout << "====>>Memiliki Istri? [y = iya / t = tidak]:";
      cin >> istri;
      if (tolower(istri) == 'y') {
        total += 200000;
      } else if (tolower(istri) == 't') {
        total = gaji;
      } else {
        cout << "Terjadi kesalahan!!!" << endl;
        goto ulang3;
      }
      cout << "====>>Jumlah anak? [0/1/2/3/....]:";
      cin >> anak;
      if (anak == 0) {
        total = total;
      } else {
        total += (50000*anak);
      }
      total += 700000;
      break;
    }
    printf("TOTAL GAJI = Rp%d\n", total);
    do {
    cout << "Apakah anda ingin Mengulang lagi [y = iya / t = tidak]:";
    cin >> pilihLg;
    switch (tolower(pilihLg)) {
    case 'y':
      goto ulangLg;
      break;
    case 't':
      break;
    default:
      cout << " Terjadikan kesalahan, pastikan ada memasukan karakter yang tepat!!!" << endl;
      Sleep(2800);
      }
    } while (pilihLg != 'y' && pilihLg != 't');
    cout << "Program Selesai." << endl;
  return 0;            
}