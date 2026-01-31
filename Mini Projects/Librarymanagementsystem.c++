#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class temp{
    string id,name,author;
    fstream file;
    public:
    void addBook()
    {
        cout<<"\nEnter Book ID :: ";
        getline(cin,id);
        cout<<"Enter Book Name :: ";
        getline(cin,name);
        cout<<"Enter Book's Author name :: ";
        getline(cin,author);

        file.open("bookData.txt",ios::out | ios::app);
        file<<id<<"*"<<name<<"*"<<author<<"\n";
        file.close();
    }
    
    void showAll(){
        file.open("bookData.txt",ios :: in);
        getline(file,id,'*');
        getline(file,name,'*');
        getline(file,author,'\n');
        while(!file.eof()){
        cout<<"\n\n";
        cout<<"\t\t";
        }
    }
    
    void extractBook(){
        // Implementation for extractBook
    }
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