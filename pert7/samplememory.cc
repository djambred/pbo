#include <iostream>

using namespace std;

int main(){
    int a[10], i;
    string b;
    float c;
    double d;

    cout<<"alokasi int : "<<sizeof(int)<<endl;
    cout<<"alokasi string : "<<sizeof(string)<<endl;
    cout<<"alokasi float : "<<sizeof(float)<<endl;
    cout<<"alokasi double : "<<sizeof(double)<<endl;


    for (i = 0; i<1; i++){
        cout<<"alamat memory int : "<<i<<&a[i]<<endl;
        cout<<"alamat memory string : "<<i<<&b<<endl;
        cout<<"alamat memory float : "<<i<<&c<<endl;
        cout<<"alamat memory double : "<<i<<&d<<endl;
    }

    return 0;

}