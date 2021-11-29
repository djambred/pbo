#include <iostream>

using namespace std;

int pilih;
char kembali;

class Matematika{
    public:
        int a, b;
    
    void penjumlahan(){
        cout<<"Masukkan Angka 1 : ";
        cin>>a;
        cout<<"Masukkan Angka 2 : ";
        cin>>b;
        cout<<"Hasil Penjumlahan : "<<a+b<<endl;
    }

    void pengurangan(){
        cout<<"Masukkan Angka 1 : ";
        cin>>a;
        cout<<"Masukkan Angka 2 : ";
        cin>>b;
        cout<<"Hasil Penjumlahan : "<<a-b<<endl;
    }

    void perkalian(){
        cout<<"Masukkan Angka 1 : ";
        cin>>a;
        cout<<"Masukkan Angka 2 : ";
        cin>>b;
        cout<<"Hasil Penjumlahan : "<<a*b<<endl;
    }

    void pembagian(){
        cout<<"Masukkan Angka 1 : ";
        cin>>a;
        cout<<"Masukkan Angka 2 : ";
        cin>>b;
        cout<<"Hasil Penjumlahan : "<<a/b<<endl;
    }
};

int main(){
    // int a,b;
    // cout<<"Masukkan Angka 1 : ";
    // cin>>a;
    // cout<<"Masukkan Angka 2 : ";
    // cin>>b;

    // cout<<"Penjumlahan : "<<a+b<<endl;
    // cout<<"Pengurangan : "<<a-b<<endl;
    // cout<<"Perkalian : "<<a*b<<endl;
    // cout<<"Pembagian : "<<a/b<<endl;
    
    // return 0;
    do{
        Matematika mtk;
        cout<<"MENU PROGRAM MATEMATIKA SEDERHANA";
        cout<<"\n 0. Keluar ";
        cout<<"\n 1. Tambah ";
        cout<<"\n 2. Kurang ";
        cout<<"\n 3. Kali ";
        cout<<"\n 4. Bagi ";
        cout<<"\nPilih : "; cin>>pilih;

        switch(pilih){
            case 0:
                cout<<"\nThanks"<<endl;
                return 0;
            case 1:
				mtk.penjumlahan();
                break;
            case 2:
				mtk.pengurangan();
                break;
            case 3:
				mtk.perkalian();
                break;
            case 4:
				mtk.pembagian();
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