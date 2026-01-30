#include<iostream>
#include<fstream>
using namespace std;
class temp{
    string id,name,author;
    fstream file;
    public:
    void addBook ();
    void showAll ();
    void extractBook();
};

int main()
{
    char choice;
    cout<<"----------------------";
    cout<<"1-Show All Books";
    cout<<"2-Extract All Books";
    cout<<"3-Add books(Admin)";
    cout<<"3-Exit";
    cout<<"----------------------";
    cout<<"Enter Your choice ::";
    cin>>choice;

    switch (choice){
        case '1':
        
        break;
        case '2':

        break;
        case '3':

        break;
        case '4':

        break;
        default :
               cout<<"Invalid Choice...!";
    }
               return 0;

    }