// IMPLEMENTING SINGLE INHERITANCE

#include<iostream>
using namespace std;

//  BASE CLASS

class base
{
    public :
    
        //  DATA MEMBERS

        int a, b, c;
    public :

        //  MEMBER FUNCTIOIN

        void get_number()
        {
            cout << "Enter number for A : ";
            cin >> a;
            cout << "Enter number for B : ";
            cin >> b;

            c = a + b;
        }
};

//  DERIVED CLASS

class derived : public base         //  LINKING THE BASE CLASS AND DERIVED CLASS
{
    public : 

        int odd_even()
        {
            if(c % 2 == 0)
            {
                cout << "The value C \'" << c << "\' is even.\n";
            } 
            else
            {
                cout << "The value C \'" << c << "\' is odd.\n";
            }

            return 0;
        }
};

//  MAIN FUNCTION

int main()
{

    //  CREATING OBJECT FOR THE CLASS DERIVED AND ACCESS THE BASE CLASS MEMBER FUNCTION.

    derived ob;     

    ob.get_number();
    ob.odd_even();

    return 0;
}


/*

output :

Enter number for A : 12
Enter number for B : 23
The value C '35' is odd.

*/