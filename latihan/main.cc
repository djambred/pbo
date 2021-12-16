#include <iostream>
#include <fstream>

using namespace std;

int pilih;
char kembali;

struct Mahasiswa  
{  
    char name[30];  
    int nim;  
};  

void insert()
{
    ofstream txt;
    Mahasiswa mhs;
    txt.open("db.txt", ios::app);
    cout << "enter name data: ";
    cin >> mhs.name;
    txt << mhs.name;
    txt << ";";
    cout << "enter nim data: ";
    cin >> mhs.nim;
    txt << mhs.nim;
    txt << ";";
    txt << "\n";
    txt.close();
}

void view(){
    string line;
    string getdata;
    Mahasiswa mhs;
    ifstream txt ("db.txt");
    if(txt.is_open())
    {
        while(! txt.eof())
        {
            getline(txt, line);
            cout << line << endl;
        }
    }
}

int main(){
    do{
        cout<<"MENU";
        cout<<"\n 0. Exit";
        cout<<"\n 1. Create ";
        cout<<"\n 2. Read ";
        cout<<"\nPilih : "; cin>>pilih;

        switch(pilih){
            case 0:
                cout<<"\nThanks"<<endl;
                return 0;
            case 1:
				insert();
                break;
            case 2:
                cout << "Name;NIM; \n";
				view();
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