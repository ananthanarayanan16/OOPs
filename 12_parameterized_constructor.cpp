//  PARAMETERIZED CONSTRUCTOR

#include<iostream>
using namespace std;


// CLASS

class base
{
    public :

        int a, b;

        base(int x, int y)
        {
            a = x;
            b = y;
        }

        void add()
        {
            cout << "Addition of two value is : " << a + b << endl;
        }
};

//  MAIN FUCNTION

int main()
{
    int a, b;

    cout << "Enter a value for A : ";
    cin >> a;
    cout << "Enter a value for B : ";
    cin >> b;

    base B(a, b);       //  PARAMETER PASS HERE. IN THE OBJECT CREATING STAGE.

    B.add();

    return 0;
}

/*

output :

Enter a value for A : 12
Enter a value for B : 23
Addition of two value is : 35

*/