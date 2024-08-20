//      HIERARCHICAL INHERITANCE

#include<iostream>
using namespace std;

//  BASE CLASS

class base
{
    public :

        int a, b;

        void get()
        {
            cout << "\nEnter a value for A : ";
            cin >> a;
            cout << "Enter a value for B : ";
            cin >> b;
        }
};

//  DERIVED_1 CLASS

class derived_1 : public base
{
    public :

        void add()
        {
            cout << "\nAddition of two value is : " << a + b << endl;
        }
};

//  DERIVED_2 CLASS

class derived_2 : public base
{
    public :

        void sub()
        {
            cout << "\nSubraction of two value is : " << a - b << endl;
        }
};

//   MAIN FUNCTION

int main()
{

    //      ACCESS BASE CLASS FUNCTION IN THE FIRST DERIVED CLASS

    derived_1 D1;

    D1.get();
    D1.add();

    //      ACCESS BASE CLASS FUNCTION IN THE SECOND DERIVED CALSS

    derived_2 D2;

    D2.get();
    D2.sub();

    return 0;
}


/*
output :

Enter a value for A : 12
Enter a value for B : 12

Addition of two value is : 24

Enter a value for A : 34
Enter a value for B : 12

Subraction of two value is : 22

*/