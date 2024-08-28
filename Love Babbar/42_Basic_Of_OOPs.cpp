#include<iostream>
#include<cstring>
using namespace std;

class Hero {

    //properties
    private:
    int health;

    public:
    char *name;
    char level;

// Constructor Function
    Hero () {
        cout << "Simple Constructor Called" << endl;
        name = new char[100];
    }

// Parameterised Constructor
    Hero (int health){
        cout << "this -> " << this << endl;
        this -> health = health;
    }

    Hero (int health, char level){
        this-> level = level;
        this -> health = health;
    }

    // Copy Constructor
    Hero (Hero &temp){
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this -> name = ch;
        cout << "Copy Constructor " << endl;
        this -> health = temp.health;
        this -> level = temp.level;

    }

    void print(){
        cout << endl;
        cout << "[ Name: " << this->name << ", ";
        cout << "Health: " << this ->health << ", ";
        cout << "Level: " << this->level << " ]";
        cout << endl;
        cout << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    int setHealth(int h){
        health = h;
    }

    char setLevel(char ch){
        level = ch;
    }

    char setName(char name[]){
        strcpy(this->name, name);
    }
};

int main(){

    // Section 1
/*   
    // Creation Of Objects
    Hero ramesh;
    
    // cout <<"Size : " << sizeof(ramesh) << endl;

    // ramesh.health = 70;
    ramesh.level = 'A';
    cout << "Health of Ramesh is: " << ramesh.getHealth() << endl;

    ramesh.setHealth(70);
    cout << "Health is: " << ramesh.getHealth() << endl;
    cout << "Level is: " << ramesh.level << endl;

    */


   /// Section 2

   /*

   // Static allocation of memory
    Hero a;
    a.setHealth(80);
    a.setLevel('B');

    cout << "Level is " << a.level << endl;
    cout << "Health is " << a.getHealth() << endl;


    // Dynamic Allocation of memory
    Hero *b = new Hero;
    b->setHealth(70);
    b->setLevel('A');

    cout << "Level is " << b->level << endl;
    cout << "Health is " << b->getHealth() << endl;

    cout << "Level is " << (*b).level << endl;
    cout << "Health is " << (*b).getHealth() << endl;

*/


    // Section 3
    //statiscally
    // cout << "HI" << endl;
    // Hero ramesh;     // it acts as a function call ramesh.Hero();
    // cout << "Hello" << endl;

    // //Dynamically

    // Hero *b = new Hero;


// Section 4
/*
    Hero tt;

    Hero ramesh(10);
    cout << "Address of Ramesh " << &ramesh << endl;
    ramesh.print();

    // Dynamically
    Hero *h = new Hero;
    h->print();

    Hero temp(22, 'B');
    temp.print();

*/

// section 5
   
/*
    Hero S(50, 'C');
    S.print();


    // Copy Constructor
    Hero R(S);
    R.print();

    */

   Hero hero1;

   hero1.setHealth(12);
   hero1.setLevel('D');
   char name[7] = "Babbar";
    hero1.setName(name);

    hero1.print();

    // use default copy constructor
    Hero hero2(hero1);
    hero2.print();
    // Hero hero2 = hero1;

    hero1.name[0] = 'G';
        hero1.print();

           hero2.print(); 
    return 0;
}