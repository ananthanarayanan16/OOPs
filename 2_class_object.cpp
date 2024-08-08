// FUNCTION DEFINITION OUT SIDE OF THE CLASS

#include<iostream>
#include<string>
using namespace std;

class reg_book
{
    public:
        int age;
        string name, address, from, to;

    public:

        //  FUNCTION DECLARE INSIDE THE CLASS

        void reg();
        void travel();
        void display();
};

//   THE DECLARED FUNCTION IS DEFINING OUTSIDE FO THE CALSS

//  DEFINE THE FUNCTION 'reg()'

void reg_book :: reg()
{
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter age : ";
    cin >> age;
    cout << "Enter address : ";
    cin >> address;
}

//   DEFINE THE FUNCTION 'travel()'

void reg_book :: travel()
{
    cout << "\nEnter from : ";
    cin >> from;
    cout << "\nEnter to : ";
    cin >> to;
}

//   DEFINE THE FUNCTION 'display()'

void reg_book :: display()
{
    cout << endl;
    cout << "\nName is : " << name;
    cout << "\nAge is : " << age;
    cout << "\nAddress is : " << address;
    cout << "\nFrom : " << from;
    cout << "\nTo : " << to << endl;
}

//  MAIN FUNCTION

int main()
{
    reg_book object;
    
    //  CALLING THE FUNCTION

    object.reg();
    object.travel();
    object.display();

    return 0;
}



/*
output : 

Enter name : Srinivash
Enter age : 21
Enter address : ABCstreet

Enter from : chennai

Enter to : Tirunelveli


Name is : Srinivash
Age is : 21
Address is : ABCstreet
From : chennai
To : Tirunelveli

*/