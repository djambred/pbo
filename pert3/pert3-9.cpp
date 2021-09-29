#include <iostream>

using namespace std;

int main(){
    cout<<"Jump Statement"<<endl;
    cout<<"Penggunaan goto"<<endl;
    
    int umur;
    kategori:
    cout<<"masukkan umur : "<<endl;
    cin>>umur;

    if (umur<=30)
    {
        cout<<"anda termasuk muda"<<endl;
        goto kategori;
    }else
    {
        cout<<"anda termasuk tua"<<endl;
    }
    

    return 0;
}