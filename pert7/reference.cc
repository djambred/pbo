#include <iostream>
using namespace std;

int main()
{
    int myVar = 1;
    int &myRef = myVar;
    int *myPtr;
 
    cout<<myVar<<"\n";
    myRef = 2;
    cout<<myVar<<"\n";
    myPtr = &myVar;
    *myPtr = 3;
    cout<<myVar<<"\n";
 
    return 0;
}