#include<iostream>
using namespace std;

class kotak{
    public:
        double panjang;
        double lebar;
        double tinggi;
        double vol;
        void print()
        {
            cout<<"print object"<<endl;
        }
};

void hitungvolA(){
    kotak a;
    a.panjang = 1;
    a.tinggi = 2;
    a.lebar = 3;

    a.vol = a.panjang * a.lebar * a.tinggi;

    cout << "vol kotak A : "<< a.vol <<endl;

}

void hitungvolB(){
    kotak b;
    b.panjang = 1;
    b.tinggi = 2;
    b.lebar = 3;

    b.vol = b.panjang * b.lebar * b.tinggi;

    cout << "vol kotak B : "<< b.vol <<endl;

}

int main()
{
    hitungvolA();
    hitungvolB();
    return 0;
}
