//  HYBRID  INHERITANCE

#include<iostream>
using namespace std;

//BASE CLASS

class base
{
    public :

        int a, b;

        void get_1()
        {
            cout << "Enter a value for A : ";
            cin >> a;
            cout << "Enter a value for B : ";
            cin >> b;
        }
};

//  CLASS DERIVED_1 IS CHILD OF THE  BASE CLASS

class derived_1 : public base
{
    public :

        int c, d;

        void add()
        {
            cout << "\nAddition of two values is : " << a + b << endl;
        }

        void get_2()
        {
            cout << "\nEnter a value for C : "; 
            cin >> c;
            cout << "Enter a value for D : ";
            cin >> d;
        }
};

//  CLASS DERIVED_2 IS CHILD OF THE DERIVED_1;

class derived_2 : public derived_1
{
    public :

        void sub()
        {
            cout << "\nSubraction of two values c & d is : " << c - d << endl;
        }
};

//  CLASS DERIVED_3 IS CHILD OF THE DERIVED_1

class derived_3 : public derived_1
{
    public : 

        void mult()
        {
            cout << "\nMultipication of two values c & d is : " << c * d << endl;
        }
};

//  MAIN FUNCTION

int main()
{
    //  CREATE OBJECT OF DERIVED_1 TO ACCESS THE BASE CLASS

    derived_1 D1;

    D1.get_1();
    D1.add();

    derived_2 D2;

    D2.get_2();
    D2.sub();

    derived_3 D3;

    // D3.get_1();      WE ACCESS THE BASE CLASS DATA MEMBER AND MEMBER FUNTION IN THE DERIVED_3 CLASS
    D3.get_2();
    D3.mult();

    return 0;    
}

/*
output : 

Enter a value for A : 12
Enter a value for B : 12

Addition of two values is : 24

Enter a value for C : 23
Enter a value for D : 12

Subraction of two values c & d is : 11

Enter a value for C : 12
Enter a value for D : 9

Multipication of two values c & d is : 108

*/