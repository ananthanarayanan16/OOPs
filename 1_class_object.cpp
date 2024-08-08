//CLASS AND OBJECT

#include<iostream>                              
using namespace std;

class fact_even  //  "fact" IS THE CLASS NAME
{
    public:     //  ACCESS SPECIFIER
        int num, sum = 1;   //   MEMBER VARIABLE ALSO CALLED ATTRIBUTES OR PROPERTIES
    
    //  DEFINE FUNCTION
    
    public:     //  ACCESS SPECIFIER
                //  THE DEFINE FUNCTION IS CALLED MEMBER FUNCTION 
        
        int factorial()     //  FACTORIAL FUNCTION
        {
            cout << "Enter a number to find factorial : ";
            cin >> num;

            //  CALCULATING FACTORIAL VALUE

            for(int i = 1; i <= num; i++)
            {
                sum = sum * i;
            }

            cout << "The factorial of " << num << " is : " << sum << endl;
            return 0;
        }

        int even_odd()      //  EVEN OR ODD FUNCTION
        {
            cout << "Enter a number to find is even or odd : ";
            cin >> num;

            // FINDING EVEN OR ODD

            if(num % 2 == 0)
            {
                cout << "The given number " << num << " is EVEN." << endl;
            }
            else
            {
                cout << "The given number " << num << " is ODD." << endl;
            }
            return 0;
        } 

};


//  MAIN FUNCTION

void main()
{
    //  CREATING OBJECT FOR THE CLASS "fact", 'object' IS THE OBJECT OF THE CLASS

    fact_even object;

    //  CALLING FUNCTION USING OBJECT

    object.factorial();     // FACTORIAL FUNCTION

    object.even_odd();      //  EVEN ODD FUNCTION


}



/*
output : 

Enter a number to find factorial : 5
The factorial of 5 is : 120
Enter a number to find is even or odd : 11
The given number 11 is ODD.

*/