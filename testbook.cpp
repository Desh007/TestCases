#include<iostream>
#include<string.h>
#define SIZE 2      //Macro of 2 is defined

using namespace std;

class bshop        // class declared
{
   int price,noc;              
   char title[20],auth[20],publ[20];

   public :
      int cost,count,ch,i;
      char btitle[20],bauth[20];
      bshop();                            //Default constructor
      void getdata();
      void disp();
      void search();
      void accept_book_info();
      void display_book_status();
};

bshop::bshop()                     //Defination of default constructor
    {
          price=00;
          noc=0;
          strcpy(title,"");
          strcpy(auth,"");
          strcpy(publ,"");

    }

void bshop::getdata()
{
   cout<<"\nEnter 2 books detail:\nTitle\tAuthor\tPublication\tPrice\tNo of copies\n";
   cin>>title>>auth>>publ>>price>>noc;

}

void bshop::accept_book_info()
{
   cout<<"\nEnter title :";
   cin>>btitle;
   
   cout<<"\nEnter author :";
   cin>>bauth;
     
}

void bshop::search()
{   
  bshop book[SIZE];
  for(i=0;i<SIZE;i++)
   {
        if(book[i].title==btitle && book[i].auth==bauth)
             {
             cout<<"\n\tYour Book is available :\n";  
             display_book_status();

             }
        else 
            {
             cout<<"\nSorry Your book is not available";
             }
   }  //For Loop end.

}


void bshop::display_book_status()
{
   cout<<"\nEnter no of copies you want :";
   cin>>count;     
   bshop book[SIZE];
  for(i=0;i<SIZE;i++) 
     {
          if(count<=noc && book[i].btitle==title)
                  {
                   cost=count*book[i].price;
                   disp();
                  }
     
          else
           {
              cout<<"\nSorry we dont have that count in stock.";                        
           }                            //End of if-else
    
       }                    //End of for condition

}   // End of display_book_status().     

void bshop::disp()
{
     bshop book[SIZE];
     cout<<"\n\t\t!!---Welcome to Aniket book Shop---!!";
     cout<<"\n\tMenu\n1.Add Books\n2.search Book\nEnter your choice :";
     cin>>ch;
     switch(ch)
      {
          case 1:
              {
                 for(i=0;i<SIZE;i++)
                      {
                        book[i].getdata();
                     }
      
              }
             break; 

          case 2:
              {
                 accept_book_info();
              }
             break;

          default :
             cout<<"Sorry !! Invalid Choice";
            
      }                //End of switch statement



}    //End of disp().

int main()
{
    int i;
    bshop book[SIZE];

    book[i].disp(); 

    book[i].disp();

   
    book[i].accept_book_info();
    book[i].search();     
    book[i].display_book_status();

   return 0;
}
