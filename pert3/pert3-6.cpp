#include <iostream>

using namespace std;

int main(){
    cout<<"Iteration Statement"<<endl;
    cout<<"Penggunaan do while"<<endl;

    int a = 1;
    int b = 5;

    do{
        cout<<a<<endl;
        a = a+1;
    }while(a<=b);
    
    return 0;
}