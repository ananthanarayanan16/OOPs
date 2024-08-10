//  SINGLE INHERITANCE INSIDE FUNCTION IS PROCTECTED MODE

#include<iostream>
using namespace std;

//  BASE CLASS

class base
{
    protected :     //  ACCESS SPECIFIER

        int a, b;

        void get_number()   //  THE FUNCTION IS ACCESS WITHIN THE CLASS ONLY BECAUSE THE FUNCTION IN PROTECTED MODE. ANY FUNCTION IN PROTECTED MODE THE FUNCTION CAN ACCESS IN THE CLASS ONLY CANNOT ACCESS IN THE MAIN FUNCTION.   
        {
            cout << "Enter value for A : ";
            cin >> a;
            cout << "Enter value for B : ";
            cin >> b;
        }
};

//  DERIVED CLASS

class derived : public base
{
    public :
    
        int x, y;

        void even_odd()
        {
            get_number();       // CALL THE GET_NUMBER FUNCTION

            x = a;
            y = b;
            
            if((x + y) % 2 == 0)
            {
                cout << "\nThe addition of two value \'" << x + y << "\' is even number.\n";
            }
            else
            {
                cout << "\nThe addition of two value \'" << x + y << "\' is odd number.\n";
            }
        }
};

//   MAIN FUNCTION

int main()
{
    //  CREATE OBJECT FOE DERIVED CLASS

    derived D;

    D.even_odd();

    return 0;
}

/*

output 1 :

Enter value for A : 12  
Enter value for B : 12

The addition of two value '24' is even number.

output 2 :

Enter value for A : 45
Enter value for B : 32

The addition of two value '77' is odd number.

*/