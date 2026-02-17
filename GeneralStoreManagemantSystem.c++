#include<iostream>
using namespace.std
class temp{
       string itemID, itemName;
       int itemQuantity, itemPrice;
       fstream file ;
          public:
          void addProduct(void);
          void viewProduct(void);
          void buyProduct(void);

}


int main()
{
       cout<<"press 1 --> Start Shopping";
       cout<<"press 0 --> Exit";
       cin>>choice;
       switch (choice)
       {
        Case 'A'
        /*code*/
        break;
        case 1;
        break;
        case0;  
        break ;
        default:
        cout<<"Invalid Selection...!";
        break;
       }   
       return 0;         
}
void temp:: addProduct(){
       cout<<Enter Product ID :: ";
       cin>>itemID;
       cout<<Enter Product Name :: ";
       cin>>itemname;
       cout<<"Enter Product Quantity:: ";
       cin>>itemQuantity;
       cout<<"Enter Product Price :: ";
       cin>>itemPrice;
       

}