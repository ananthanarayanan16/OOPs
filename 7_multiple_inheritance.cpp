//  MULTIPLE INHERITANCE

#include<iostream>
using namespace std;

// FIRST BASE CLASS

class base_1
{
    public :        //  ACCESS SPECIFIER

        int a;

        void get_a()
        {
        cout << "Enter value for A : ";
        cin >> a;
        }
};

//  SECOND BASE CLASS

class base_2
{
    public :        //  ACCESS SPECIFIER

        int b;

        void get_b()
        {
        cout << "Enter value for B : ";
        cin >> b;
        }
};

//  DERIVER CALSS

class derived : public base_1, public base_2

{
    public :        //  ACCESS SPECIFIER

        int c;

        void even_odd()
        {
        if((a + b) % 2 == 0)
        {
            cout << "The addition of two value \'" << a + b << "\' is Even.\n";
        }
        else
        {
            cout << "The addition of two value \'" << a + b << "\' is Odd.\n";
        }
        }
};

//  MAIN FUNCTION

int main()
{
    derived D;

    D.get_a();          //  FIRST BASE CLASS FUNCTION
    D.get_b();          //  SECOND BASE CLASS FUNCTION
    D.even_odd();       //  DERIVED CLASS FUNCTION

    return 0;
}


/*

output 1 :

Enter value for A : 12
Enter value for B : 12
The addition of two value '24' is Even.

output 2 :

Enter value for A : 12
Enter value for B : 23
The addition of two value '35' is Odd.

*/