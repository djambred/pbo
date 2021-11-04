#include <iostream>

using namespace std;

class Mahasiswa {
    public :
        string nim;
        string nama;
};


int main(){

    Mahasiswa mhs;

    mhs.nim = "123456";
    mhs.nama = "John";

    cout << mhs.nim << mhs.nama;

    return 0;

}