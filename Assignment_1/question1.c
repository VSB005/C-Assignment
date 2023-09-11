#include<stdio.h>

struct Date
{
   int day;
   int month;
   int year;

};

void initDate(struct Date* ptrDate)
   {

    ptrDate->day = 01;
    ptrDate->month = 01;
    ptrDate->year = 0001;

   }

   void printDateOnConsole(struct Date* ptrDate)
   {

    printf("%d",ptrDate->day);
    printf("\n");
    printf("%d",ptrDate->month);
    printf("\n");
    printf("%d",ptrDate->year);
    printf("\n");    

    
   }

   void acceptDateFromConsole(struct Date* ptrDate)
   {
      printf("Please enter Day Month and Year");
      printf("\n");
      scanf("%d",&ptrDate->day);
      scanf("%d",&ptrDate->month);
      scanf("%d",&ptrDate->year);

   }

   int menu()
{
    int choice ;
    printf("Plese choose from following options");
    printf("\n");
    printf("1.Intialise the members 2. Print date on console 3.Accept date from console 4. Exit ");
    printf("\n");
    scanf("%d",&choice);
    return choice;

}
int main()
{
   struct Date D;
    
   int choice ;
   while((choice = menu()) != 4)
   {
      switch(choice)
      {
         case 1:
         initDate(&D);
         break;
         case 2:
         printDateOnConsole(&D);
         break;
         case 3:
         acceptDateFromConsole(&D);
         break;
         case 4:
         printf("Wrong choice");
         
      }
   }


    return 0;
}