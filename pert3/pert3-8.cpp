#include <iostream>

using namespace std;

int main(){
    cout<<"Jump Statement"<<endl;
    cout<<"Penggunaan continue"<<endl;
    
    int hitung = 0;
    while (hitung <= 10)
    {
        hitung = hitung+1;
        if (hitung == 5)
        {
            cout<<"skip"<<endl;
            continue;
        }
        cout<<hitung<<endl;
    }
    cout<<"looping diluar while"<<endl;
    
    return 0;
}