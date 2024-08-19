//  MULTI LEVEL INHERITANCE

#include<iostream>
using namespace std;

class base      //  BASE CALSS
{
    public :        //  ACCESS SPECIFIER
        int a, b;

        void get_1()
        {
            cout << "Enter value for A : ";
            cin >> a;
            cout << "Enter value for B : ";
            cin >> b;
        }
};

class derived_1 : public base       //  DERIVED_1 CLASS
{
        public :            //  ACCESS SPECIFICE
            int c, d;

            //  MEMBER FUNCTIONS

            void add()
            {
                cout << "\nAddition of two value a & b is : " << a + b << endl;
            }

            void get_2()
            {
                cout << "\nEnter the value for C : ";
                cin >> c;
                cout << "Enter the value for D : ";
                cin >> d;
            }
};

class derived_2 : public derived_1
{
    public:

        void sub();     //  FUNCTION DECLERE INSIDE THE CLASS
};

void derived_2 :: sub()     //  FUNCTION DEFINE OUTSIDE THE CLASS
{
    cout << "\nThe subraction of two value c & d is : " << c - d << endl;
};

//  MAIN FUCNTION

int main()
{

    //   ACCESS BASE CLASS FUNCTIONS & DATA MEMBER IN THE FIRST DERIVED CLASS 

    // derived_1 D1;   //  CREATE OBJECT FOR FIRST DERIVED CLASS

    // D1.get_1();
    // D1.add();

    //   ACCESS BASE CLASS FUNCTIONS & DATA MEMBERS IN THE SECOND DERIVED CLASS.

    derived_2 D2;   //  CREATE OBJECT FOR SECOND DERIVED CLASS

    D2.get_1();
    D2.add();
    D2.get_2();
    D2.sub();

    return 1;
}


/*

output :

Enter value for A : 12
Enter value for B : 12

Addition of two value a & b is : 24

Enter the value for C : 12
Enter the value for D : 12

The subraction of two value c & d is : 0

*/