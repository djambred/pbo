#include <iostream>

using namespace std;

class umur{
    private:
    int a, b;

    public:
    void assign(int tahunlahir, int tahunsekarang){
        a=tahunlahir;
        b=tahunsekarang;
    }
    int usia(){
        return a-b;
    }
    
};

int main(){
    umur obj;
    obj.assign(2021, 1990);
    cout<<"Berarti Usia Kalian sekarang adalah "<<obj.usia()<<" Tahun"<<endl;
    return 0;
}