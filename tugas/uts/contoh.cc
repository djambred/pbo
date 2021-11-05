#include <iostream>

using namespace std;

class Apa{
    public:
    int a;
    int b;

    int c(){
        return a-b;
    }
    
};

int main(){
    Apa abc;

    cout<<"masukkan angka 1 : ";
    cin>>abc.a;
    cout<<"masukkan angka 2 : ";
    cin>>abc.b;
    abc.a = 10;
    abc.b = 2;
    cout<<"HASIL : "<<abc.c();

    // int a = 10;
    // int b = 2;

    // int c = a-b;
    // int d = a+b;

    // cout<<"Hasil Pengurangan : "<<c<<endl;
    // cout<<"Hasil Penjumlahan : "<<d<<endl;


    return 0;
}