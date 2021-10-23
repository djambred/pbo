#include <iostream>
 
using namespace std;
 
class Kendaraan {
  protected:
    string jenis;
    string merk;
};
 
class Mobil: public Kendaraan {
  public:
    Mobil(string paramJenis, string paramMerk) {
      jenis = paramJenis;
      merk = paramMerk;
    }
 
    string lihatDetail() {
      return "Merk: " + merk + ", Jenis: "+ jenis;
    }
};
 
int main()
{
  Mobil toyota1("Matic","Avanza");
  Mobil toyota2("Manual","Innova");
 
  cout << toyota1.lihatDetail() << endl;
  cout << toyota2.lihatDetail() << endl;
  return 0;
}