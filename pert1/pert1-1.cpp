#include <iostream>
using namespace std;

class mahasiswa{
	public:
    		int nim;
    		string nama;
		float nilai;
		void printData(){
			cout<<"NIM   \t= "<<nim<<endl;
			cout<<"Nama  \t= "<<nama<<endl;
			cout<<"Nilai \t= "<<nilai<<endl;
    		}
};

int main() {
    mahasiswa a = {123,"Mahasiswa A",98.5};
    mahasiswa b {234,"Mahasiswa B", 90.5};

    a.printData();
    b.printData();
    return 0;
}
