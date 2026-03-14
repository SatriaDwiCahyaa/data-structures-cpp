#include <iostream>
using namespace std;



struct Mahasiswa
{
    char nim[20];
    char nama[50];
    char email[50];
};

void get_input(int banyak_data, Mahasiswa data_mahasiswa[])
{
    for (int i =0; i < banyak_data; i++)
    {
        Mahasiswa &m = data_mahasiswa[i];

        cout << "\nMahasiswa ke-" << (i + 1) << ": " << endl;

        cout << " NIM   : ";
        cin.getline(m.nim, 20);

        cout << " NAMA  : ";
        cin.getline(m.nama, 50);

        cout << " EMAIL : ";
        cin.getline(m.email, 50);
    }
}

void display_data(int banyak_data, Mahasiswa data_mahasiswa[])
{
    cout << "\n=======================" << endl;
    cout << "  DATA MAHASISWA UPR   " << endl;
    cout << "=======================" << endl;
    
    for (int i = 0; i < banyak_data; i++)
    { 
        Mahasiswa *m = &data_mahasiswa[i];

        cout << "\nMahasiswa ke-" << (i + 1) << endl;
        
        cout << " NIM   : " << m->nim << endl;
        
        cout << " NAMA  : " << m->nama << endl;

        cout << " EMAIL : " << m->email << endl;  
    }
}


int main()
{
    int banyak_data;    
    cout << "Berapa banyak mahasiswa: "; cin >> banyak_data;
    cin.ignore();


    Mahasiswa data_mahasiswa[banyak_data];

    get_input(banyak_data, data_mahasiswa);

    display_data(banyak_data, data_mahasiswa);

    return 0;
}