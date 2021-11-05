#include<iostream>

using namespace std;

class Waktu{
    public:
        Waktu(int j=0, int m=0, int d=0);
        void setWaktu( int j, int m, int d);
        int getJam();
        int getMenit();
        int getDetik();

    private:
        int jam;
        int menit;
        int detik;
};

Waktu::Waktu(int jam, int menit, int detik){
    setWaktu(jam, menit, detik);
}

void Waktu::setWaktu(int j, int m, int d){
    if ((j>=0 && j<24) && (m>=0 && m<=59) && (d>=0 && d<=59)){
        jam = j;
        menit = m;
        detik = d;
    } else {
        cout<<"format waktu salah"<<endl;
    }
}

int Waktu::getJam(){
    return jam;
}
int Waktu::getMenit(){
    return menit;
}

int Waktu::getDetik(){
    return detik;
}


int main(){    
    Waktu t;
    t.setWaktu(20,25,50);
    cout <<endl<<t.getJam()<<":"<<t.getMenit()<<":"<<t.getDetik()<<endl;
    return 0;
}