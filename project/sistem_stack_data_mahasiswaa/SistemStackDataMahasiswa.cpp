#include <iostream>
using namespace std;
template <typename T>

// Automation Print
void display(T teks){
    cout << teks;
}

// Display Menu
void display_menu(){
    display("1. Push Data");
    display("\n2. Pop Data");
    display("\n3. Tampilkan Stack");
    display("\n4. Keluar");
}

#define MAX 5

// Deklarasi structure
struct Mahasiswa{
    int nim;
    string nama;
    int umur;
};

Mahasiswa stack[MAX];

int top =  -1;


Mahasiswa get_data_mahasiswa(){
    Mahasiswa data;

    display("Masukkan NIM: "); 
    cin >> data.nim;

    display("Masukkan Nama: "); 
    cin >> data.nama;

    display("Masukkan Umur: "); 
    cin >> data.umur;
    
    return data;
}


int get_choice(){
    int pilihan;

    display("\nMasukkan Pilihan: "); 
    cin >> pilihan;
    
    return pilihan;
}




// Fungsi Push
void push(Mahasiswa *mhs) {
    if (top == MAX - 1) {
        cout << "Stack penuh\n";
    } else {
        top++;
        stack[top] = *mhs; // dereference pointer
        cout << "Data berhasil ditambahkan\n";
    }
}

// Fungsi pop
void pop() {
    if (top == -1) {
        cout << "Stack kosong\n";
    } else {
        cout << "Data teratas dihapus\n";
        top--;
    }
}

// Fungsi tampilkan stack
void display() {
    if (top == -1) {
        cout << "Stack kosong\n";
    } else {
        cout << "Data Stack:\n";
        for (int i = top; i >= 0; i--) {
            cout << "NIM: " << stack[i].nim
                 << ", Nama: " << stack[i].nama
                 << ", Umur: " << stack[i].umur << endl;
        }
    }
}


int main(){
    int student_choice;
    Mahasiswa mhs1;

    do {
        display_menu();
        student_choice = get_choice();

        switch (student_choice){
            case 1:

                mhs1 = get_data_mahasiswa();
                push(&mhs1);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Program selesai\n";
                break;
            default:
                cout << "Pilihan tidak valid\n";
        }


    } while (student_choice != 4);
    
    

    return 0;
}