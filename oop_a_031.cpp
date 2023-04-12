#include <iostream>
using namespace std;

class mahasiswa {

private:
    int nim;
    string nama;
public:
    void inputdata() {
        cout << "Masukan NIM : ";
        cin >> nim;
        cout << "Masukan Nama : ";
        cin >> nama;
    }
    void tampildata() {
        cout << "\nNIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
    }
};
class matakuliah {
private:
     string kode;
     string namamk;
     int sks;
public:
    void InputMK();
    void TampilMK();

};
void matakuliah::InputMK() {
    cout << "\nMasukan Kode Mata Kuliah : ";
    cin >> kode;
    cout << "Masukan Nama Mata Kuliah : ";
    cin >> namamk;
    cout << "Masukan sks Mata Kuliah : ";
    cin >> sks;
}

int main()
{
    
}
