//  SINGLE INHERITANCE INSIDE FUNCTION IS PRIVATE MODE

#include<iostream>
using namespace std;

//  BASE CLASS

class base
{
    private :        //  ACCESS SPECIFIER

        int a, b;

        void get_number()       //  FUNCTION IN PRIVATE MODE.
        {
            cout << "Enter value for A : ";
            cin >> a;
            cout << "Enter value for B : ";
            cin >> b;
        }
    
    public :

        int c, d;

        void convert()
        {
            get_number();       //  THE FUNCTION 'get_number()' IS CALL IN THE BASE CLASS. 

            c = a;
            d = b;
        }
};

//  DERIVED CLASS

class derived : public base
{
    public :

        void even_odd()
        {
            if(c + d % 2 == 0)
            {
                cout << "The addition of two value \'" << c + d << "\' is Even number.\n";
            }
            else
            {
                cout << "The addition of two value \'" << c + d << "\' is Odd numbre.\n";
            }
        }
};

//  MAIN FUNCTION

int main()
{
    derived D;

    D.convert();        //  WE ACCESS THE CLASS CONVERT IN THE BASE CLASS THE CLASS 'get_number' IS CANNOT ACCESS BY THE DERIVED CLASS BECAUSE THAT CLASS DECLERE IN PRIVATE MODE.
    D.even_odd();

    return 0;
}


/*

output 1 :

Enter value for A : 34
Enter value for B : 34
The addition of two value '68' is Odd numbre.

output 2 :

Enter value for A : 23
Enter value for B : 34
The addition of two value '57' is Odd numbre.

*/