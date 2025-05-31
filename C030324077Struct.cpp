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
   cout << "Tekan enter untuk melanjutkan..." << endl;
   cin.ignore();    
}

void outputData(mahasiswa *m){
    cout << "== Data Mahasiswa ==\n" << endl;
    cout << "Nama: " << m->nama << endl;
    cout << "NIM: " << m->nim << endl;
    cout << "Alamat: " << m->alamat << endl;
    cout << "IPK: " << m->ipk << endl;
    cout << "======================" << endl;
    cout << "Tekan enter untuk melanjutkan..." << endl;
    cin.ignore();
    cin.get();
}

int main(){
    mahasiswa Ti2b;

    Ti2b.nama = "Miftahush Syaadah";
    Ti2b.nim = "C030324077";
    Ti2b.alamat = "Jl. Pangeran 192, Banjarmasin";
    Ti2b.ipk = 3.68;

    string *nama = &Ti2b.nama;
    string *nim  = &Ti2b.nim;
    string *alamat = &Ti2b.alamat;
    float *ipk = &Ti2b.ipk;

    inputData(&Ti2b);
    outputData(&Ti2b);

}