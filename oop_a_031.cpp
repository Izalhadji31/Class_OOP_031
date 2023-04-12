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
};
int main()
{
    std::cout << "Hello World!\n";
}
