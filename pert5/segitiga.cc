#include<iostream>

using namespace std;

class Segitiga{
    private:
        int alas, tinggi;
    public:


        void setAlas(int a){
            alas = a;
        }

        void setTinggi(int t){
            tinggi = t;
        }

        int hitungLuas(){
            return 0.5*alas*tinggi;
        }

};

int main(){
    Segitiga LuasSegitiga;

    LuasSegitiga.setAlas(2);
    LuasSegitiga.setTinggi(5);


    cout << "Luas : "<<LuasSegitiga.hitungLuas()<<endl;

    return 0;
}