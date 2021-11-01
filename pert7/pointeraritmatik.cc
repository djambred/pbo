#include <iostream>
using namespace std;

int main()
{
    int var = 2;
    int var1 = 2;

    int *pVar = &var;
    int *pVar1 = &var1;

    
    pVar++;
    pVar1--;
    cout<<"valuenya : "<<*pVar<<endl;
    cout<<"alamatnya : "<<pVar<<endl;
    cout<<"valuenya : "<<*pVar1<<endl;
    cout<<"alamatnya : "<<pVar1<<endl;

    return 0;
}