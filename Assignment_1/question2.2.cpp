#include<iostream>

class Date
{
   private:
   int day;
   int month;
   int year;

 public:
   void initDate(Date* ptrDate)
   {

    ptrDate->day = 01;
    ptrDate->month = 01;
    ptrDate->year = 0001;

   }

   void printDateOnConsole(Date* ptrDate)
   {

    std::cout << ptrDate->day << std::endl << ptrDate->month << std::endl << ptrDate->year <<std::endl;
   }

   void acceptDateFromConsole(Date* ptrDate)
   {
      std::cout<<"Please enter Day Month and Year"<<std::endl;
      std::cin >> ptrDate->day;
      std::cin >> ptrDate->month;
      std::cin >> ptrDate->year;

   }

   bool isLeapYear()
   {
    return ((this->year % 4==0 && this->year %100 !=0)) || (this->year%400==0);

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
   while((choice = menu()) != 5)
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
         D.isLeapYear();
         case 5:
         std::cout<<"Wrong choice"<<std::endl;
         
      }

   }
   

    return 0;
}