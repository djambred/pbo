#include <iostream>
 
using namespace std;
 
int main(){
    int i;
 
    cout<<"Anda membutuhkan berapa memori untuk menyimpan data integer ? "<<endl;
    cin>>i;
 
    int *data = nullptr;
    data = new int[i]; //Pemesanan memori
    cout<<"memori telah dipesan dan memiliki "<<i<<" elemen"<<endl<<"silahkan anda isi :"<<endl;
 
    //Input
    for(int n=0;n<i;n++){
        cout<<&data[n]<<" = ";cin>>data[n];
    }
 
    cout<<endl<<"Memori telah di isi berikut adalah isi dari memori anda :"<<endl;
    //Output
    for(int n=0;n<i;n++){
        cout<<&data[n]<<" = "<<data[n]<<endl;
    }
 
    cout<<endl<<"...Memproses Pelepasan Memori..."<<endl;
    delete[] data; //pelepasan memori.
    data = nullptr;
    cout<<"Memori telah dilepaskan dan variabel 'data' memiliki nilai = "<<data<<endl;
 
    return 0;
}