#include <iostream>

using namespace std;

class umur{
    private:
    int tahunlahir, tahunsekarang;

    public:
    void assign(int tahunlahir, int tahunsekarang){
        tahunlahir=tahunlahir;
        tahunsekarang=tahunsekarang;
    }
    int usia(){
        return tahunsekarang-tahunlahir;
    }
    
};

int main(){
    umur obj;
    obj.assign(2021, 1990);
    cout<<"Berarti Usia Kalian sekarang adalah "<<obj.usia()<<" Tahun"<<endl;
    return 0;
}

https://prod.liveshare.vsengsaas.visualstudio.com/join?2F185530AADF4467254A9662684F537273EC