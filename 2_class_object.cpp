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

        int reg();
        int travel();
        int display();
}object;

//   THE DECLARED FUNCTION IS DEFINING OUTSIDE FO THE CALSS

//  DEFINE THE FUNCTION 'reg()'

int reg_book :: reg()
{
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter age : ";
    cin >> age;
    cout << "Enter address : ";
    cin >> address;

    return 0;
}

//   DEFINE THE FUNCTION 'travel()'

int reg_book :: travel()
{
    cout << "\nEnter from : ";
    cin >> from;
    cout << "\nEnter to : ";
    cin >> to;

    return 0;

}

//   DEFINE THE FUNCTION 'display()'

int reg_book :: display()
{
    cout << endl;
    cout << "\nName is : " << name;
    cout << "\nAge is : " << age;
    cout << "\nAddress is : " << address;
    cout << "\nFrom : " << from;
    cout << "\nTo : " << to << endl;

    return 0;
}

//  MAIN FUNCTION

int main()
{
    // reg_book object;
    
    //  CALLING THE FUNCTION

    object.reg();
    object.travel();
    object.display();
    cout << "Size of object : " << sizeof(object);
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