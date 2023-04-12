#include <iostream>
using namespace std;

class mahasiswa {

private: 
    int nim;
    string nama;
public :
    void inputdata() {
        cout << "Masukan NIM : ";
        cin >> nim;
        cout << "Masukan Nama : ";
        cin >> nama;
    }
    void tampildta() {
        cout << "\nNIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
    }
};
int main()
{
    std::cout << "Hello World!\n";
}
