#include <iostream>
using namespace std;

class Bidang 
{   protected: int lebar, tinggi;
    public:
    Bidang( int a=0, int b=0)
    { lebar = a;
      tinggi = b;
    }
    virtual void luas()
    {  cout << "Luas Bidang : 0 " << endl;
    }
};
class Segitiga: public Bidang
{   public:
    Segitiga( int a=0, int b=0):Bidang(a, b) { }
    virtual void luas ()
    { cout << "Luas Segitiga : "
           << (lebar * tinggi) << endl;
    }
};
class Segiempat: public Bidang
{   public:
    Segiempat( int a=0, int b=0):Bidang(a, b) { }
    virtual void luas ()
    {   cout << "Luas Segiempat : "
         << (lebar * tinggi / 2) << endl;
    }
};
int main( )
{   Bidang *bidang;
    Segitiga segitiga(2,5);
    Segiempat segiempat(2,5);
    bidang = &segitiga;
    bidang->luas();
    bidang = &segiempat;
    bidang->luas();
    return 0;
}