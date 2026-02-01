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
        cout<<"\nEnter Book Name :: ";
        getline(cin,name);
        cout<<"\nEnter Book's Author name :: ";
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
    temp obj;
    char choice;
    cout<<"----------------------";
    cout<<"\n1-Show All Books";
    cout<<"\n2-Extract All Books";
    cout<<"\n3-Add books(Admin)";
    cout<<"\n3-Exit";
    cout<<"----------------------";
    cout<<"\nEnter Your choice ::";
    cin>>choice;

    switch (choice){
        case '1':
        cin.ignore();
        obj.showAll();
        break;
        case '2':
        cin.ignore();
        obj.extractBook();
        break;
        case '3':
        cin.ignore();
        obj.addBook();
        break;
        case '4':
        return 0;
        break;
        default :
               cout<<"Invalid Choice...!";
    }
               return 0;

    }