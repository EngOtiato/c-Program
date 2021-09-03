#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;
class media
{
protected:
    string title;
    int price;
public:
    void getdetails()
    {
        cout<<"Enter the title of the publication: "<< endl;
        cin>>title;
        cout<<"Enter the price of the publication: "<< endl;
        cin>>price;
    }
};
class book: public media
{
private:
    int pages;
public:
   void get_pages()
    {
      cout<< "Enter the number of pages in the book:"<< endl;
      cin>>pages;
    }
     void display1()
    {
       cout<<"      BOOK DETAILS      "<< endl;
       cout<<"*****************************"<<endl;
       cout<< "TITLE             :  "<<title<<endl;
       cout<< "PRICE             :  "<<price<<endl;
       cout<< "NO. OF PAGES      :  "<<pages<<endl;
       cout<<"*****************************"<<endl;
   }
};
class tape: public media
{
private:
    int playing_time;
public:
    void getplaying_time()
    {
      cout<< "Enter the playing time of the tape minutes:"<< endl;
      cin>>playing_time;
    }
   void display2()
   {
       cout<<"      TAPE DETAILS      "<< endl;
       cout<<"*****************************"<<endl;
       cout<< "TITLE                :  "<<title<<endl;
       cout<< "PRICE                :  "<<price<<endl;
       cout<< "PLAYING TIME(MINS)   :  "<<playing_time<<endl;
       cout<<"*****************************"<<endl;
   }
};
int main()
{
    book med1;
    tape med2;
    int choice,no_items;
    cout<<"Enter the number of items you want to enter details for:"<<endl;
    cin>>no_items;
    for(int i=1;i<=no_items;i++)
    {
    cout<< "For Book Details, Enter 1:"<<endl;
    cout<< "For Tape Details, Enter 2:"<<endl;
    cin>>choice;
    if(choice==1)
    {
        med1.getdetails();
        med1.get_pages();
        //system("CLS");
        //med1.display1();
    }
    else if(choice==2)
    {
        med2.getdetails();
        med2.getplaying_time();
        //system("CLS");
        //med2.display2();

    }
   else
   {
       cout<< "Invalid choice!"<<endl;
   }
   system("CLS");
   }
   for(int i=1;i<=no_items;i++)
   {
        if(choice==1)
          med1.display1();
        else if(choice==2)
          med2.display2();
        else
            cout<<"    "<<endl;
   }
  return 0;
}
