#include <iostream>
using namespace std;
template <typename T>


void print(T teks){
    cout << teks << endl;
}


int main(){ 
    string nama = "Satria";

    print(nama);

    
    string* ptr= &nama;
    print(ptr);
    print(*ptr);

    *ptr = "Dwi";
    print(*ptr);
    print(ptr);
    
}