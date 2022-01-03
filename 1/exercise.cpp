/* 
@name : exercise 1st
@author : Nasrullah
@url github : https://github.com/nasdevs
*/ 

#include <iostream>
using namespace std;

int main() {
    int size = 100;
    string nama[size] = {};
    int noKomputer[size] = {};
    int jamMulai[size] = {};
    int jamSelesai[size] = {};
    int jmlJam[size] = {};
    int hargaPerJam[size] = {};
    int jmlHarga[size] = {};
    float diskon[size] = {};
    float ttlHarga[size] = {};
    string bonus[size] = {};
    char tambah;
    int i = 0;

    do {
        cout << "PENYEWA KE-" << i+1 << endl;
        cout << "nama orang     : "; cin >> nama[i];
        cout << "nomor komputer : "; cin >> noKomputer[i];
        cout << "jam mulai      : "; cin >> jamMulai[i];
        cout << "jam selesai    : "; cin >> jamSelesai[i];
        jmlJam[i] = jamSelesai[i] - jamMulai[i];

        // proses harga perjam
        if (jmlJam[i] > 0 && jmlJam[i] <= 5) hargaPerJam[i] = 3000;
        else if (jmlJam[i] > 5 && jmlJam[i] <= 10) hargaPerJam[i] = 2000;
        else if (jmlJam[i] > 11 && jmlJam[i] <= 15) hargaPerJam[i] = 1500;
        else if (jmlJam[i] > 15) hargaPerJam[i] = 1000;
        
        // proses jumlah  harga
        jmlHarga[i] = jmlJam[i] * hargaPerJam[i];

        // proses diskon
        if (jmlHarga[i] >= 50000) diskon[i] = 10;
        else if (jmlHarga[i] >= 3000) diskon[i] = 5;
        else if (jmlHarga[i] >= 1000) diskon[i] = 2.5;

        // proses bonus
        if (jmlJam[i] > 10) bonus[i] = "FLASHDISK";
        else bonus[i] = "MOUSE";

        // proses total harga
        ttlHarga[i] = jmlHarga[i] - (jmlHarga[i] * (diskon[i]/100));

        cout << "Tambah penyewa [y/n] : "; cin >> tambah;
        cout << "-------------------------" << endl;
        i++;
    }
    while (tambah == 'Y' || tambah == 'y');

    cout << "                                                 LAPORAN RENTAL KOMPUTER                                              " << endl;
    cout << "                                            WARNET CAYAHA KOMPUTER TANGERANG                                          " << endl;
    cout << "                                                  PERIODE NOVEMBER 2021                                               " << endl;
    cout << "======================================================================================================================" << endl;
    cout << "No \t Nama    \t Nomor    \t     Jam       \t Jumlah \t Harga \t Jumlah \t Disc. \t Total \t Bonus                    " << endl;
    cout << "   \t Penyewa \t Komputer \t Mulai Selesai \t Jam    \t /Jam  \t Harga           \t Harga                             " << endl;
    cout << "----------------------------------------------------------------------------------------------------------------------" << endl;

    for (int j = 0; j < i; j++) {
        cout << j+1 << "  \t " << nama[j] << " \t " << noKomputer[j] << " \t\t " << jamMulai[j] << " \t " << jamSelesai[j] << " \t " << jmlJam[j] << " \t\t " << hargaPerJam[j] << " \t " << jmlHarga[j] << " \t " << " \t " << diskon[j] << "% \t " << ttlHarga[j] << " \t " << bonus[j] << endl; 
    }
    cout << "======================================================================================================================" << endl;
}
