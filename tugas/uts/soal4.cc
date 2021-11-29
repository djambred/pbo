#include <iostream>
#include <cstring>

using namespace std;
char kembali;
int pilih;

class Mahasiswa{
    public:
        string fname;
        string mname;
        string lname;

    void input(){
        cout<<"Masukkan First Name : ";
        cin>>fname;
        cout<<"Masukkan Middle Name : ";
        cin>>mname;
        cout<<"Masukkan Last Name : ";
        cin>>lname;
        cout<<"FULL NAME : "<<fname+' '+mname+' '+lname<<endl;
    }

};

int main(){
    do{
        Mahasiswa mhs;
        cout<<"MENU";
        cout<<"\n 0. Keluar ";
        cout<<"\n 1. Input ";
        cout<<"\nPilih : "; cin>>pilih;

        switch(pilih){
            case 0:
                cout<<"\nThanks"<<endl;
                return 0;
            case 1:
				mhs.input();
                break;
            default:
                cout<<"Pilihan Salah"<<endl;
                break;
            }
            cout<<"Ingin memilih menu lain (y/t)? ";
            cin>>kembali;
            cout<<endl;
        }
        while (kembali!= 't');
        cout<<"Thanks"<<endl;
    return 0;
}