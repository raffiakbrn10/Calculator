// Program Test
// Program Kalkulator Sederhana
// Programmer : Raffi Akbar
// Date : 02 september 2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a,b,Tambah,Kali,Kurang, Bagi;
   
    cout << "=======================================" << endl;
    cout << "PROGRAM KALKULATOR SEDERHANA RAFFIAKBAR" << endl;
    cout << "=======================================" << endl;

    cout << "MASUKAN NILAI A : "; cin >> a;
    cout << "MASUKAN NILAI B : "; cin >> b;

    Tambah = a + b;
    Kali = a * b;
    Kurang = a - b;
    Bagi = a / b;

    cout << "=======================================" << endl;
    cout << "HASIL DARI TAMBAH : " << a << " + " << b << " = " << Tambah << endl;
    cout << "HASIL DARI KALI : " << a << " x " << b << " = " << Kali << endl;
    cout << "HASIL DARI KURANG : " << a << " - " << b << " = " << Kurang << endl;
    cout << "HASIL DARI BAGI : " << a << " : " << b << " = " << fixed << setprecision(2) << Bagi << endl;
    cout << "=======================================" << endl;

    return 0;
}