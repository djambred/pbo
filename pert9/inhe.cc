#include <iostream>
#include <string>
using namespace std;


class Animal {
private:
    
protected:
    string name;
    string dateOfBirth;
    bool alive;
public:
    Animal(string name, string dateOfBirth, bool alive) {
        this->name = name;
        this->dateOfBirth = dateOfBirth;
        this->alive = alive;
    }
    void print(string pre="") {
        cout << pre << "name = " << name << endl;
        cout << pre << "dateOfBirth = " << dateOfBirth << endl;
        cout << pre << "alive = " << alive << endl;
    }
    void eat() {
        cout << name << " can eat!" << endl;
    }
};


class Human : public Animal {
private:
    Human* father;
    Human* mother;
protected:
    
public:
    Human(string name, string dateOfBirth, bool alive, Human* father, Human* mother)
     : Animal(name, dateOfBirth, alive) {  
        this->father = father;
        this->mother = mother;
    }
    void print(string pre="") {
        Animal::print(pre);
        if ( father ) {
            cout << pre << "father: {" << endl;
            father->print(pre+pre);
            cout << pre << "}" << endl;
        }
        if ( mother ) {
            cout << pre << "mother: {" << endl;
            mother->print(pre+pre);
            cout << pre << "}" << endl;
        }
    }
    void eat() {
        cout << name << " eat fires! loll" << endl;
    }
};


class Dog : public Animal {
private:
    
protected:
    
public:
    Dog(string name, string dateOfBirth, bool alive)
     : Animal(name, dateOfBirth, alive) {  
        return;
    }
    void print(string pre="") {
        Animal::print(pre);
    }
    void bark() {
        cout << name << " bark!" << endl;
    }
};


int main(int argc, char* argv[]) {

    Human mother = Human("Amy", "1990-04-06", true, nullptr, nullptr);
    Human father = Human("Bob", "1990-01-02", true, nullptr, nullptr);
    Human child = Human("Canny", "2019-01-05", true, &father, &mother);
    Dog puppy = Dog("Puppy", "2019-06-03", true);
    string pre = "    ";  // for indentation

    cout << "mother: {" << endl;
    mother.print(pre);
    cout << "}" << endl << endl;

    cout << "father: {" << endl;
    father.print(pre);
    cout << "}" << endl << endl;

    cout << "child: {" << endl;
    child.print(pre);
    cout << "}" << endl << endl;

    cout << "puppy: {" << endl;
    puppy.print(pre);
    cout << "}" << endl << endl;

    mother.eat();
    father.eat();
    child.eat();
    puppy.eat();
    puppy.bark();

    return 0;
}