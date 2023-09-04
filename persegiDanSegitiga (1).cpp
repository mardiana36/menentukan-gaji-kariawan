#include <cmath>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
/*
NAMA : SANG PUTU MARDIANA
NIM : 220040169
KELAS : BC224 KONSEP DASAR PEMROGRAMAN
PRODI : TEKNOLOGI INFORMASI
*/
//program membuat persegi dan segi tiga mengunakan looping dan selection
using namespace std;
bool cekBilanganPrima(int bantu) {
  if (bantu < 2) {
    return false;
  }
  for (int i = 2; i <= sqrt(bantu); i++) {
    if (bantu % i == 0) {
      return false;
    }
  }
  return true;
}
int main() {
  int pilih1, pilih2, a, b = 0;
  do {
    system("cls");
    cout << "=====MENU====="
         << "\n 1. Kotak"
         << "\n 2. Segitiga"
         << "\n 0. Exit"
         << "\n=============="
         << "\nMasukan pilihan anda: ";
    cin >> pilih1;
    switch (pilih1) {
    case 1:
      cout << "=====MODE====="
           << "\n 1. Ganjil (1-30)"
           << "\n 2. Genap (2-20)"
           << "\n 3. Prima (2-27)"
           << "\n=============="
           << "\nMasukan pilihan anda: ";
      cin >> pilih2;
      switch (pilih2) {
      case 1:
        cout << "Masukan nilai N:";
        cin >> a;
        b = 1;
        for (int i = 1; i <= a; i++) {
          for (int j = 1; j <= a; j++) {
            if (b > 30) {
              b = 1;
            }
            if (b < 10) {
              cout << "0" << b << " ";
            } else {
              cout << b << " ";
            }
            b += 2;
          }
          cout << endl;
        }
        system("pause > nul | echo klik apa saja untuk Close...");
        break;
      case 2:
        cout << "Masukan nilai N:";
        cin >> a;
        b = 2;
        for (int i = 1; i <= a; i++) {
          for (int j = 1; j <= a; j++) {
            if (b > 20) {
              b = 2;
            }
            if (b < 10) {
              cout << "0" << b << " ";
            } else {
              cout << b << " ";
            }
            b += 2;
          }
          cout << endl;
        }
        system("pause > nul | echo klik apa saja untuk Close...");
        break;
      case 3:
        cout << "Masukan nilai N:";
        cin >> a;
        b = 2;
        for (int i = 1; i <= a; i++) {
          for (int j = 1; j <= a; j++) {
            while (!cekBilanganPrima(b)) {
              b++;
            }
            if (b > 27) {
              b = 2;
            }
            if (b < 10) {
              cout << "0" << b << " ";
            } else {
              cout << b << " ";
            }
            b++;
          }
          cout << endl;
        }
        system("pause > nul | echo klik apa saja untuk Close...");
        break;
      default:
        cout << "Terjadi Kesalahan, pastikan anda menginputkan nilai yang "
                "Benar!!!"
             << endl;
        Sleep(2800);
        break;
      }
      break;
    case 2:
      cout << "=====MODE====="
           << "\n 1. Ganjil (1-30)"
           << "\n 2. Genap (2-20)"
           << "\n 3. Prima (2-27)"
           << "\n=============="
           << "\nMasukan pilihan anda: ";
      cin >> pilih2;
      switch (pilih2) {
      case 1:
        cout << "Masukan nilai N:";
        cin >> a;
        b = 1;
        for (int i = 1; i <= a; i++) {
          for (int j = 1; j <= a - i; j++) {
            cout << "---";
          }
          for (int k = 1; k <= i * 2 - 1; k++) {
            if (b > 30) {
              b = 1;
            }
            if (b < 10) {
              cout << "0" << b << " ";
            } else {
              cout << b << " ";
            }
            b += 2;
          }
          cout << endl;
        }
        system("pause > nul | echo klik apa saja untuk Close...");
        break;
      case 2:
        cout << "Masukan nilai N:";
        cin >> a;
        b = 2;
        for (int i = 1; i <= a; i++) {
          for (int j = 1; j <= a - i; j++) {
            cout << "---";
          }
          for (int k = 1; k <= i * 2 - 1; k++) {
            if (b > 20) {
              b = 2;
            }
            if (b < 10) {
              cout << "0" << b << " ";
            } else {
              cout << b << " ";
            }
            b += 2;
          }
          cout << endl;
        }
        system("pause > nul | echo klik apa saja untuk Close...");
        break;
      case 3:
        cout << "Masukan nilai N:";
        cin >> a;
        b = 2;
        for (int i = 1; i <= a; i++) {
          for (int j = 1; j <= a - i; j++) {
            cout << "---";
          }
          for (int k = 1; k <= i * 2 - 1; k++) {
            while (!cekBilanganPrima(b)) {
              b++;
            }
            if (b > 27) {
              b = 2;
            }
            if (b < 10) {
              cout << "0" << b << " ";
            } else {
              cout << b << " ";
            }
            b++;
          }
          cout << endl;
        }
        system("pause > nul | echo klik apa saja untuk Close...");
        break;
      default:
        cout << "Terjadi Kesalahan, pastikan anda menginputkan nilai yang "
                "Benar!!!"
             << endl;
        Sleep(2800);
        break;
      }
      break;
    case 0:
      break;
    default:
      cout
          << "Terjadi Kesalahan, pastikan anda menginputkan nilai yang Benar!!!"
          << endl;
      Sleep(2800);
      break;
    }
  } while (pilih1 != 0);
  cout << "Program Selesai." << endl;
  return 0;
}