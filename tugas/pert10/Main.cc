#include<iostream>
//#include "Plant.h"
#include "Plant-Variety.h"
using namespace std;

int main(){

    int pil =0;
    while(true){
        cout<<"=== MAIN MENU ===\n"
            <<"0. Exit\n"
            <<"1. Garden \n";
        cout<<"Masukan Pilihan :";
        cin>>pil;
        if(pil==0){
            cout<<"Exit..."<<endl;
            break;
        }
        switch (pil)
        {
        case 0 :
            break;
        case 1 :
            cout<<"Menuju Garden"<<endl;
            gardenMenu();
            break;
        default:
            cout<<"Menu tidak ada!"<<endl;
            break;
        }
    }
    return 0;
}