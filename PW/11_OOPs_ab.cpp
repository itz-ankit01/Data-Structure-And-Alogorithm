#include<iostream>
using namespace std;

// CLASS IN C++
/*
class Rectangle {
    public:
        int length;
        int breadth;

        int area (){
            return length * breadth;
        }

        int perimeter (){
            return 2 * (length + breadth);
        }
};

int main(){

    Rectangle r1, r2;

    r1.length = 10;
    r1.breadth = 5;  

    cout << "Area is " << r1.area() << endl;
    cout << "Perimeter is " << r1.perimeter() << endl;

    r2.length = 15;
    r2.breadth = 10;

    cout << "Area of r2 is " << r2.area() << endl;
    cout << "Perimeter of r2 is " << r2.perimeter() << endl;
    return 0;
}          */

// POINTER TO A OBJECT STACK
/*
class Rectangle {
    public :
        int length;
        int breadth;

        int area (){
            return length * breadth;
        }
        int perimeter () {
            return 2 * (length + breadth);
        }
};

    int main (){

            Rectangle r1;
            Rectangle *ptr;

            ptr = &r1;

            ptr -> length = 10;
            ptr -> breadth = 5;

            cout << "The Area of r1 is " << ptr -> area() << endl;
            cout << "The perimeter of r1 is " << ptr -> perimeter() << endl;
        return 0;
        
    }            */

// POINTER TO A OBJECT IN HEAP
/*
    class Rectangle{
        public :
        int length;
        int breadth;

        int area(){
            return length * breadth;
        }
        int perimeter (){
            return 2 * (length + breadth);
        }
    };

    int main(){

        Rectangle *ptr = new Rectangle;      // dynamic object created in heap

        ptr -> length = 10;
        ptr -> breadth = 5;

        cout << "The Area of r1 is " << ptr -> area() << endl;
        cout << "The perimeter of r1 is " << ptr -> perimeter() << endl;
    }            */

//  ACCESSOR AND MUTATORS (DATA HIDING)
/*
class Rectangle{
    private :
        int length;
        int breadth;

    public:
        void setLength(int l){
            if(l < 0) length = 1;
            else length = l;
        }
        void setBreadth(int b){
            if(b < 0) breadth = 1;
            else breadth = b;
        }
        int getLength(){
            return length;
        }
        int getBreadth(){
            return breadth;
        }
        int area(){
            return length * breadth;
        }
        int perimeter (){
            return 2 * (length + breadth);
        }
};

int main(){

    Rectangle r;

    r.setLength(-10);
    r.setBreadth(5);

    cout << "Length -> " << r.getLength()  << endl;
    cout << "Breadth -> " << r.getBreadth()  << endl;

    cout << "Area -> " << r.area() << endl;
    cout << "Perimeter -> " << r.perimeter() << endl;
        
}           */

// CONSTRUCTORS
/*
    class Rectangle{
    private :
        int length;
        int breadth;

    public:

        // Non - Parameterized constructor
        
        // Rectangle (){
        //     length = 1;
        //     breadth = 1;
        // }  

        // Parameterisezed constructor
        Rectangle (int l = 1, int b = 1){
            setLength(l);
            setBreadth(b);
        }

        // copy constructor
        Rectangle (Rectangle &r){
            length = r.length;
            breadth = r.breadth;
        }

        void setLength(int l){
            if(l < 0) length = 1;
            else length = l;
        }
        void setBreadth(int b){
            if(b < 0) breadth = 1;
            else breadth = b;
        }
        int getLength(){
            return length;
        }
        int getBreadth(){
            return breadth;
        }
        int area(){
            return length * breadth;
        }
        int perimeter (){
            return 2 * (length + breadth);
        }
};

int main(){

    Rectangle r1;    // it will call parameterised instead of non-parameterised 
    cout << "Area -> " << r1.area() << endl;

    Rectangle r2(10, 5);
    cout << "Area r2 -> " << r2.area() << endl;

    Rectangle r3(r2);
    cout << "Area r3 -> " << r3.area() << endl;
    
      return 0;  
}        */


//  SCOPE RESOLUTION IN CLASS OOPS
/*
    class Rectangle {
        private:
            int length;
            int breadth;

        public : 
            Rectangle ();
            Rectangle (int l, int b);
            Rectangle ( Rectangle &r);
            int getLength();
            int getBreadth();
            void setLength(int l);
            void setBreadth(int b);
            int area ();
            int perimeter ();
            bool isSquare();
            ~ Rectangle ();
    };

    int main(){

        Rectangle r1 (10, 5);
        cout << "Area -> " << r1.area() << endl;
        if(r1.isSquare()){
            cout << "Yes" << endl;
        }
        else cout << "Not a Square" << endl;
    }

    Rectangle :: Rectangle(){
        length = 1;
        breadth = 1;
    }
    Rectangle :: Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    Rectangle :: Rectangle (Rectangle &r){
        length = r.length;
        breadth = r.breadth;
    }
    int Rectangle :: getLength (){
        return length;
    }
    int Rectangle :: getBreadth (){
        return breadth;
    }
    void Rectangle :: setLength (int l){
        if(l<0) length = 1;
        else length = l;
    }
    void Rectangle :: setBreadth (int b){
        if(b<0) breadth = 1;
        else breadth = b;
    }
    int Rectangle :: area (){
        return length * breadth;
    }
    int Rectangle :: perimeter (){
        return 2 * (length + breadth);
    }
    bool Rectangle :: isSquare (){
        return length == breadth;
    }
    Rectangle :: ~Rectangle(){
        cout << "Rectangle Destroyed" << endl;
    }           */

// POINTER DEMO IN C++ CLASS (OOPS)
/*
    class Rectangle {
        private: 
            int length;
            int breadth;

        public:
            Rectangle(int length, int breadth){
                this -> length = length;
                this -> breadth = breadth;
            }
            int area (){
                return length * breadth;
            }
            int perimeter(){
                return 2 * (length + breadth);
            }
    };
    int main(){

        Rectangle r1(10, 5);
        cout << "Area -> " << r1.area() << endl;
        return 0;
    }        */

//  STRUCTURE VS CLASS IN C++
/*
    struct Demo {
        int x;
        int y;

        void Display (){
            cout << x << " " << y << endl;
        }
    };
    int main(){

        Demo d;
        d.x = 10;
        d.y = 20;
        d.Display();
        return 0;
    }    */

// The only difference between structure and class in c++ is that in structure everything is PUBLIC but in class everything is PRIVATE , we have to make it PUBLIC in class
/*
class Demo {
    public:
        int x;
        int y;

        void Display (){
            cout << x << " " << y << endl;
        }
    };
    int main(){

        Demo d;
        d.x = 10;
        d.y = 20;
        d.Display();
        return 0;
    }            */

//  WRITE A CLASS FOR STUDENT WITH ROLL, NAME, MARKS IN 3 SUBJECTS, FUNCTIONS FOR TOTAL MARKS, GRADE, AND REQUIRED METHOD

class Student {
    private :
        int roll;
        string name;
        int mathMarks;
        int phyMarks;
        int chemMarks;

    public :
        Student (int r, string n, int m, int p, int c){
            roll = r;
            name = n;
            mathMarks = m;
            phyMarks = p;
            chemMarks = c;
        }
        int total (){
            return mathMarks + phyMarks + chemMarks;
        }
        char grade (){
            float average = total()/3;
            if(average > 60) return 'A';
            else if(average <= 60 && average >= 40) return 'B';
            else return 'C';
        }
};
int main(){

    int roll; 
    string name;
    int m, p, c;
    cout << "Enter the name of Student " ;
    cin >> name;
    cout << "Enter the roll number of student ";
    cin >> roll;
    cout << "Enter the Marks of 3 Subjects ";
    cin >> m >> p >> c;

    Student s(roll, name, m, p, c);

    cout << "Name -> " << name << endl;
    cout << "Roll Number " << roll << endl;
    cout << "Total Marks " << s.total() << endl;
    cout << "Grade -> " << s.grade() << endl;
    return 0;
}