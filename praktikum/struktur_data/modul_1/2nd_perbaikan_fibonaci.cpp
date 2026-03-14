/*
 * MODUL 1 - TUGAS 2
 * Perbaikan program deret Fibonacci menggunakan Pointer.
 *
 * KESALAHAN PADA KODE ASLI:
 * 1. `arr` adalah array lokal — pointer ke variabel lokal tidak valid
 *    setelah fungsi selesai (dangling pointer / undefined behavior).
 *    PERBAIKAN: Gunakan `static` agar memori tetap valid setelah fungsi selesai.
 *
 * 2. `cout << (ptr + i)` hanya mencetak ALAMAT memori, bukan nilainya.
 *    PERBAIKAN: Gunakan operator dereference `*(ptr + i)` untuk mengambil nilai.
 */

#include <iostream>
#define MAKS 50
using namespace std;

// =============================================
// FUNGSI FIBONACCI
// Menghitung n bilangan fibonacci pertama.
// Menggunakan 'static' agar larik tetap valid setelah fungsi selesai.
// Tanpa 'static', larik bersifat lokal dan memorinya bisa tertimpa.
// =============================================
int* fibonacci(int n) {
    static int larikFibo[MAKS]; // PERBAIKAN 1: tambah 'static'

    larikFibo[0] = 1;
    larikFibo[1] = 1;

    for (int i = 2; i < n; i++) {
        larikFibo[i] = larikFibo[i - 1] + larikFibo[i - 2];
    }

    return larikFibo;
}

int main() {
    int jumlahBilangan;
    int *penunjukFibo;

    cout << "==============================" << endl;
    cout << "   PROGRAM DERET FIBONACCI    " << endl;
    cout << "==============================" << endl;

    cout << "Jumlah bilangan fibonacci : ";
    cin >> jumlahBilangan;

    // Validasi input
    if (jumlahBilangan <= 0 || jumlahBilangan > MAKS) {
        cout << "Input tidak valid! Masukkan angka antara 1 - " << MAKS << endl;
        return 1;
    }

    penunjukFibo = fibonacci(jumlahBilangan);

    cout << "\nDeret Fibonacci sebanyak " << jumlahBilangan << " bilangan:" << endl;
    
    for (int i = 0; i < jumlahBilangan; i++) {
        cout << *(penunjukFibo + i); // PERBAIKAN 2: tambah operator dereference (*)
        if (i < jumlahBilangan - 1) cout << ", ";
    }
    cout << endl;

    return 0;
}
