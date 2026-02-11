#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int choice;
    cout<<"1- Area of Circle"<<endl;
    cout<<"2- Area of Rectangle"<<endl;
    cout<<"3- Area of Square"<<endl;
    cout<<"4- Enter your Choice :: ";
    cin>>choice;

    // You can now use 'choice' safely here
    // Example: cout << "You selected option " << choice << endl;
    switch(choice){
        case 1:
        cout<<"Enter the radius of the Circle :: ";
        cin>>radius;
        area=3.14 * pow(radius,2);
        break;
        case 2 ;
        cout<<"Enter the Length of the Rectangle ::";
        cin>>length;
        cout<<"Enter the width of the Rectangle :: ";
        cin>>width;
        area = length * width ;
        break ;
        case3;
        cout<<"Enter the length of side of square"
        cin>>length;
        area = pow(length,2);
        break ;
        default:
        cout<<"\nInvalid Choice...!";
}
return 0;
}
