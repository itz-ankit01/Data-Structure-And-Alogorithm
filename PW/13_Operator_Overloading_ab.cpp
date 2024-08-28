#include<iostream>
using namespace std;

// OPERATOR OVERLAODING OF ADDITION
/*
class Complex {
    public :
        int real;
        int img;

    Complex add (Complex x){
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};
int main(){

    Complex c1, c2, c3;
    c1.real = 5;  c1.img = 10;
    c2.real = 3;  c2.img = 5;

    c3 = c2.add(c1);

    cout << c3.real << "+i" << c3.img << endl;
    return 0;
}             */

// OPERATOR OVERLOADING
/*
    class Complex {
    public :
        int real;
        int img;

    Complex operator+ (Complex x){
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};
int main(){

    Complex c1, c2, c3;
    c1.real = 5;  c1.img = 10;
    c2.real = 3;  c2.img = 5;

    c3 = c2 + c1;

    cout << c3.real << " + " <<  "i" << c3.img << endl;
    return 0;
}       */

// FRIEND OPERATOR OVERLOADING
/*
    class Complex {
    private :
        int real;
        int img;

    public :

    Complex (int r = 0, int i = 0){
        real = r;
        img = i;
    }
    void Display (){
        cout << real << "+i" << img << endl;
    }

    friend Complex operator+ (Complex c1, Complex c2);
    
};

Complex operator+ (Complex c1, Complex c2){
        Complex temp;
        temp.real = c1.real + c2.real;
        temp.img = c1.img + c2.img;
        return temp;
    }

int main(){

    Complex c1(10, 5), c2(5, 3), c3;
    
    c3 = c2 + c1;
    //c3 = operator+(c1, c2);

    c3.Display();
    
    return 0;
}             */

// INSERTION OPERATOR OVERLOADING
/*
    class Complex {
    private :
        int real;
        int img;

    public :

    Complex (int r = 0, int i = 0){
        real = r;
        img = i;
    }
    void Display (){
        cout << real << "+i" << img << endl;
    }
};

int main(){

    Complex c1(10, 5);

    c1.Display();
    
    return 0;
}             */   

// INSERTION OPERATOR OVERLOADING
/*
    class Complex {
    private :
        int real;
        int img;

    public :

    Complex (int r = 0, int i = 0){
        real = r;
        img = i;
    }

    friend ostream & operator << (ostream &out, Complex &C);
    
};

ostream & operator << (ostream &out, Complex &C){
    out << C.real << "+i" << C.img <<endl;
    return out;
}
int main(){

    Complex c1(10, 5);

    cout << c1 << endl;
    //operator <<(cout, c1) << endl;
    
    return 0;
}       */

// WRITE A CLASS FOR RATIONAL NUMBER (P/Q) WITH OVERLOADING + AND << OPERATOR

    class Rational {
        private :
            int p;
            int q;
        public :
            Rational (){
                p = 1;
                q = 1;
            }
            Rational (int p, int q){
                this -> p = p;
                this -> q = q;
            }
            Rational (Rational &r){
                this -> p = r.p;
                this -> q = r.q;
            }
            int getP() { return p; }

            int getQ () { return q; }

            void setP (int p){
                this -> p = p;
            }
            void setQ (int q){
                this -> q = q;
            }

            Rational operator+(Rational r){
                Rational t;
                t.p = this -> p*r.q + this -> q*r.p;
                t.q = this -> q*r.q ;
                return t;
            }
            friend ostream & operator << (ostream &os, Rational &r);
    };
    ostream & operator << (ostream &os, Rational &r){
        os << r.p << "/" << r.q;
        return os;
    }
    int main(){

        Rational r1(3, 4), r2(2, 5), r3;

        r3 = r1 + r2;

        cout << "Sum of " << r1 << " and " << r2 << " is " << r3 << endl;
        return 0;
    }