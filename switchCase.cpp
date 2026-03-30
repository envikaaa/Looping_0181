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

//prosedur untuk pengecekan kondisi
void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
            namaJurusan = "Teknologi Informasi";
            statusKota  = "Tersedia (15 Kursi)";
            break;
        case 2:
            namaJurusan = "Teknik Elektro";
            statusKota  = "Kuota Penuh!";
            break;
        case 3:
            namaJurusan = "Sistem Informasi";
            statusKota  = "Tersedia (15 Kursi)";
            break;
        default:
        namaJurusan = "Tidak Diketahui";
        statusKuota = "Error: Kode Tidak Valid";
    }
}

//prosedur
void input() {
     cout << "\n=== HASIL SELEKSI ===" << endl;
     cout << "Jurusan Pilihan : " << namaJurusan << endl;
     cout << "Status Kuota    : " << namaJurusan << endl;
     cout << "----------------------------------" << endl;
}

int main() {
    input():
    pilihanJurusan();
    output();

    return 0;
}