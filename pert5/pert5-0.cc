#include <iostream>
using namespace std;

class Jam{
    private:
        int jam=0, menit=0, detik=0;
    public:
    Jam(){
        jam = 10;
        menit = 59;
        detik = 59;
    }
    void tambahJam(){
        jam++;
    }
    void tambahMenit(){
        menit++;
    }
    void tambahDetik(){
        detik++;
    }
    void displayJam(){
        cout << jam << ":" << menit << ":" << detik << endl;
    }
};

int main(){
    Jam calljam;
    calljam.displayJam();
    calljam.tambahJam();
    calljam.tambahMenit();
    calljam.tambahDetik();
    calljam.displayJam();
    return 0;
}