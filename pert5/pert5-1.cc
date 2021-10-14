#include<iostream>

using namespace std;

class Persegi{
    private:
        int panjang, lebar;
    
    public:
        int getPanjang(){
            return panjang;
        }

        void setPanjang(int p){
            panjang = p;
        }

        int getLebar(){
            return lebar;
        }

        void setLebar(int l){
            lebar = l;
        }

        int hitungLuas(){
            return panjang*lebar;
        }

        int hitungKel(){
            return 2*panjang*lebar;
        }

};

int main(){
    Persegi persegiluas;
    Persegi persegikel;

    persegiluas.setPanjang(5);
    persegiluas.setLebar(2);

    cout << "Luas : "<<persegiluas.hitungLuas()<<endl;

    persegikel.setPanjang(5);
    persegikel.setLebar(2);

    cout << "Keliling : "<<persegikel.hitungKel()<<endl;
}