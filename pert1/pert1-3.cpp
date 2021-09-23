#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

class mobil
{
private :
      int roda, pintu;
      char warna [100];
public :
      void data(int jum_roda, int jum_pintu, const char* warna_mobil);
      void info();
};

int main()
{
      //mendeklarasikan objek
      mobil a, b;

      cout<<"Mobil A : \n";
      cout<<"-------------------"<<endl;
      a.data(4,2,"Kuning"); //memanggil fungsi data()
      a.info(); //memanggil fungsi info();

      cout<<endl;
      cout<<"Mobil B:"<<endl;
      cout<<"-----------"<<endl;
      b.data(4,4,"Silver"); //memanggil fungsi data()
      b.info(); //memanggil fungsi info();
      getch();
      return 0;
}

void mobil::data(int jum_roda, int jum_pintu, const char* warna_mobil)
{
      roda  = jum_roda;
      pintu = jum_pintu;
      strcpy(warna, warna_mobil);
}

void mobil::info()
{
      cout<<"Jumlah Roda  : "<<roda<<endl;
      cout<<"Jumlah Pintu : "<<pintu<<endl;
      cout<<"Warna        : "<<warna<<endl;
}
