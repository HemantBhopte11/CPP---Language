#include<iostream>
using namespace.std
class temp{
       string itemID, itemName;
       int itemQuantity, itemPrice;
       fstream file,file1;
       int totalAmount,quantity,itemRate;
       string search ;
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
       
       file.open("data.txt",ios :: out | ios :: app);
       file<<itemID<<"\t"itemName<<"\t"itemQuantity<<"\t"itemPrice<<end1;
       file.close();
}
void temp :: viewProduct(){
       file.open("data.txt",ios :: in);
       while(!file.eof()){
              cout<<"------------------";
              cout<<"Product Id\t\tProduct Name\t\tQuantity\t\tProduct Price"<<end1;
              cout<<itemID<<"\t\t\t"<<itemName<<"\t\t\t"<<itemQuantity<<"\t\t\t"<<itemPrice<<end1;
              cout<<"----------------------------"
       }
       file.close();
}
void temo :: buyProduct(){
       file.open("data.text",ios:: in);
       file1.open("temp.txt",ios :: out | ios :: app);
       cout<<"Enter Product ID :: ";
       cin>>search;
       cout<<"Enter Quantity";
       cin>>quantity;

       while(!file.eof()){
              if(itemID == search){
                     itemQuantity = itemQuantity - quantity;
                     file<<itemID<<"\t"<<itemName<<"\t"<<itemQuantity<<"\t"<<itemPrice<<end1;
                     }else{
                            file<<itemID<<"\t"<<itemName<<"\t"<<itemQuantity<<"\t"<<itemPrice<<end1;
                     }
       }
}
