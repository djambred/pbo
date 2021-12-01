#include <iostream>
#include <cstring>

using namespace std;

void polindromangka()
{
    int input, angka, digit, rev = 0;
    
    cout << "\nMasukan Inputan Berupa Angka: ";
    cin >> angka;
    input = angka;
    
    // int angka = 12345;
    // int input, digit, rev = 0;

    do
    {
        digit = angka % 10;
        rev = (rev * 10) + digit;
        angka = angka / 10;
    } while (angka != 0);
     
    cout << "\nBalikan angka inputan: " << rev << endl;
    if (input == rev) {
        cout << "Polindrom";
    } else {
        cout << "Tidak Polindrom";
    }
}

void polindromkata()
{
    int input, length, check = 0;
    char kata[20];
    
    cout << "\nMasukan kata: "; 
    cin >> kata;
    
    // char kata[20] = "kodok";
    length = strlen(kata);
    
    for(input=0;input < length ;input++){
        if(kata[input] != kata[length-input-1]){
            check = 1;
        }
    }
    
    cout << "\nBalikan kata inputan: " << kata << endl;
    if (check) {
        cout << "Tidak Polindrom"; 
    } else {
        cout << "Polindrom"; 
    }
}

void fizzBuzz() {
    // int i, n;
    // cout <<"\ninput angka: ";
    // cin >> n;
    int i, n = 16;
    i=n;
    for(int i=1;i<=n;i++) {
            if(i%3==0 && i%5==0)
        {
            cout<<"FizzBuzz"<<endl;
        } else if(i%3==0 && (!i%5==0)) {
            cout<<"Fizz"<<endl;
        } else if(i%5==0 && !(i%3==0)) {
            cout<<"Buzz"<<endl;
        }else if(!(i%3==0 && i%5==0)) {
            cout<<i<<endl;
        }
    }
}

int main() {
    int pilih;
    
    do
    {
        cout << "\n===== MENU =====\n0. Quit\n1. Polindrom Angka\n2. Polindrom Kata\n3. FizzBuzz\nMasukan Pilihan: \n";    
        cin >> pilih;
        
        switch(pilih)
        {
            case 0:
                cout <<"Terima Kasih\n";
                return 0;
            case 1:
                polindromangka();
                break;
            case 2:
                polindromkata();
                break;
            case 3:
                fizzBuzz();
                break;
            default : 
                cout<<"Pilihan Anda Salah";
        }
        
    }
    while(pilih != 0);
}