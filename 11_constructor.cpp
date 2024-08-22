//      CONSTRUCTOR IMPLEMANTATION

#include<iostream>
using namespace std;

class base
{
    public : 

        int a, b, c;

        base()      //  CONSTRUCTOR FUNCTION. THIS FUNCTION HAS NO RETURN TYPE. THE CONSTRUCTOR NAME AND CLASS NAME BOTH ARE SAME.
        {
            cout << "Enter a value for A : ";
            cin >> a;
            cout << "Enter a value for B : ";
            cin >> b;
        }

        void add()
        {
            c = a + b;
            cout << "Addition of two number is : " << c << endl; 
        }

};

// MAIN FUNCTION

int main()
{

    //  THE CONSRUCTOR FUNCTION IS CALL IN CREATING THE OBJECT FOR THE CLASS 

    base B;

    B.add();

    return 0;
}

/*

output :

Enter a value for A : 12
Enter a value for B : 12
Addition of two number is : 24

*/