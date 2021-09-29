#include <iostream>

using namespace std;

int main(){
    cout<<"Jump Statement"<<endl;
    cout<<"Penggunaan break"<<endl;
    
    int hitung = 0;
    while (hitung <=10)
    {
        hitung = hitung+1;
        if (hitung == 2)
        {
            break;
        }
        cout<<"lopping didalam while"<<endl;
    }
    cout<<"looping diluar while"<<endl;
    
    return 0;
}