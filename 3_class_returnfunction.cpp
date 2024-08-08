//  RETURN TYPE FUNCTION


#include<iostream>
using namespace std;

//  CLASS 

class add
{
    public:
        int a, b, c;
    
    public:
        int get_a()
        {
            cout << "Enter value for a : ";
            cin >> a;

            return a;
        }

        int get_b()
        {
            cout << "Enter value for b : ";
            cin >> b;

            return b;
        }

        int addition()
        {
            c = get_a() + get_b();
            cout << "Addition of two number is : " << c << endl;
            
            return 0;
        }
};

//  MAIN FUNCTION

int main()
{
    add object;

    //  CALLING FUNCTION USING OBJECT

    object.addition();

    return 0;
}


/*

output :

Enter value for a : 12
Enter value for b : 23
Addition of two number is : 35

*/