#include <iostream>

using namespace std;

class Waktu{
    private : 
        int jam, menit, detik;
    public:
    Waktu(){}

    void setJam(){
        cout<< "Masukkan Jam : ";
        cin>>jam;
    }

    void setMenit(){
        cout<<"Masukkan Menit : ";
        cin>>menit;
    }

    void setDetik(){
        cout<<"Masukkan Detik : ";
        cin>>detik;
    }

    void getWaktu(){
        if ((jam>=0 && jam<24) && (menit>=0 && menit<=59) && (detik>=0 && detik<=59)){
            cout<<jam<<":"<<menit<<":"<<detik<<endl;
        } else {
            cout<<"format waktu salah"<<endl;
        }
    }
};

int main(){
    Waktu t;
    t.setJam();
    t.setMenit();
    t.setDetik();
    t.getWaktu();
    return 0;
}