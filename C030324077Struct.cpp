#include <iostream>
using namespace std; 

struct mahasiswa{
    string nama;
    string nim;
    string alamat;
    float ipk;
};

void inputData(mahasiswa *m) {
   system("cls");
   cout << "== Input Data Mahasiswa ==\n" << endl;
   cout << "Masukkan nama:" << endl;
   getline (cin, m ->nama);
   cout << "Masukkan NIM:" << endl;
   getline (cin, m->nim);
   cout << "Masukkan alamat:" << endl;
   getline (cin, m->alamat);
   cout << "Masukkan IPK:" << endl;
   cin >> m->ipk;
   cin.ignore();    
}

int main(){
    mahasiswa Ti2b;
    string *nama = &Ti2b.nama;
    string *nim  = &Ti2b.nim;
    string *alamat = &Ti2b.alamat;
    float *ipk = &Ti2b.ipk; 
    
}
