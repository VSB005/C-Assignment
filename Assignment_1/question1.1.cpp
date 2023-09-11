/*Write a menu driven program for Date in a C and CPP language.
Declare a structure Date having data members day, month, year.
Implement the following functions.
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);*/

#include<iostream>

struct Date
{
   private:
   int day;
   int month;
   int year;

 public:
   void initDate(struct Date* ptrDate)
   {

    ptrDate->day = 01;
    ptrDate->month = 01;
    ptrDate->year = 0001;

   }

   void printDateOnConsole(struct Date* ptrDate)
   {

    std::cout << ptrDate->day << std::endl << ptrDate->month << std::endl << ptrDate->year <<std::endl;
   }

   void acceptDateFromConsole(struct Date* ptrDate)
   {
      std::cout<<"Please enter Day Month and Year"<<std::endl;
      std::cin >> ptrDate->day;
      std::cin >> ptrDate->month;
      std::cin >> ptrDate->year;

   }
   
};

int menu()
{
    int choice ;
    std::cout<<"Plese choose from following options"<<std::endl;
    std::cout<<"1.Intialise the members 2. Print date on console 3.Accept date from console 4. Exit "<<std::endl;
    std::cin>>choice;
    return choice;

}

int main()
{
   Date D;
   int choice ;
   while((choice = menu()) != 4)
   {
      switch(choice)
      {
         case 1:
         D.initDate(&D);
         break;
         case 2:
         D.printDateOnConsole(&D);
         break;
         case 3:
         D.acceptDateFromConsole(&D);
         break;
         case 4:
         std::cout<<"Wrong choice"<<std::endl;
         
      }

   }
   

    return 0;
}