#include <iostream>

using namespace std;

class hitung{
    private:
    int a, b, c;
    public:
    void assign(int d, int e, int f){
        a=d;
        b=e;
        c=f;
    }
    int tambah(){
        return a+b+c;
    }
    int kali(){
        return a*b*c;
    }
    int bagi(){
        return a/b/c;
    }
    int kurang(){
        return a-b-c;
    }

};

int main(){
    hitung obj;
    obj.assign(10,5,2);
    cout<<"Hasil Penjumlahan adalah "<<obj.tambah()<<endl;
    cout<<"Hasil Pengurangan adalah "<<obj.kurang()<<endl;
    cout<<"Hasil Perkalian adalah "<<obj.kali()<<endl;
    cout<<"Hasil Pembagian adalah "<<obj.bagi()<<endl;
    return 0;
}