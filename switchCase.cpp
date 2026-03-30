#include <iostream>
using namespace std;

//deklarasi variable global
int kodeJurusan;
string namaJurusan;
string statusKuota;

//prosedur input
void input(){
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" << endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "Sistem Informasi" << endl;
    cout << "----------------------------------" << endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}