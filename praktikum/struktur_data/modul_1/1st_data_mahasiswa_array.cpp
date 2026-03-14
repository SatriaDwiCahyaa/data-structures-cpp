/*
 * MODUL 1 - TUGAS 1
 * Array of Struct untuk menyimpan data mahasiswa (NIM, Nama, Email)
 * Menggunakan looping untuk input dan output data.
 */

#include <iostream>
#include <string>
using namespace std;

// DEKLARASI STRUCT
struct Mahasiswa {
    char nim[20];
    char nama[50];
    char email[50];
};

int main() {
    int jumlahMahasiswa;

    cout << "==============================" << endl;
    cout << "   PROGRAM DATA MAHASISWA     " << endl;
    cout << "==============================" << endl;

    // Input jumlah mahasiswa
    cout << "Masukkan jumlah mahasiswa : ";
    cin >> jumlahMahasiswa;
    cin.ignore(); // Membersihkan buffer newline

    // Deklarasi Array of Struct berdasarkan jumlah yang diinput
    Mahasiswa dataMahasiswa[jumlahMahasiswa];

    // PROSES INPUT DATA - Menggunakan looping untuk memasukkan setiap data
    cout << "\n--- Input Data Mahasiswa ---" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "\nMahasiswa ke-" << (i + 1) << ":" << endl;
        cout << "  NIM   : ";
        cin.getline(dataMahasiswa[i].nim, 20);
        cout << "  Nama  : ";
        cin.getline(dataMahasiswa[i].nama, 50);
        cout << "  Email : ";
        cin.getline(dataMahasiswa[i].email, 50);
    }

    // PROSES OUTPUT DATA - Menggunakan looping untuk menampilkan semua data
    cout << "\n==============================" << endl;
    cout << "   DAFTAR DATA MAHASISWA      " << endl;
    cout << "==============================" << endl;

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Mahasiswa ke-" << (i + 1) << ":" << endl;
        cout << "  NIM   : " << dataMahasiswa[i].nim   << endl;
        cout << "  Nama  : " << dataMahasiswa[i].nama  << endl;
        cout << "  Email : " << dataMahasiswa[i].email << endl;
        cout << "------------------------------" << endl;
    }

    return 0;
}