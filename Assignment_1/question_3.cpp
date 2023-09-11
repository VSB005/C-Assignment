#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    private:
    int rollno;
    string name;
    int marks;

    public:
    void initStudent(Student *ptrStudent)
    {
        this->rollno = 00;
        this-> name = "";
        this->marks = 00;
        
        
    }
    void printStudentOnConsole(Student *ptrStudent)
    {
        cout<< this->rollno <<endl << this->name << endl << this->marks <<endl;

    }
    void acceptStudentFromConsole(Student *ptrStudent)
    {
        cout<<"Please Enter the Student roll no, name and marks"<< endl;
        cin>>rollno;
        cin>>name;
        cin>>marks;

    }

};

int menu()
{
    int choice ;
    cout<<"Plese choose from following options"<<endl;
    cout<<"1.Intialise the student info 2. Print Student info on console 3.Accept Student info from console 4. Exit "<<endl;
    cin>>choice;
    return choice;

}
int main()
{
    int choice;
    Student one;
    while((choice = menu())!=4)
    {
        switch(choice)
        {
        case 1:
        one.initStudent(&one);
        break;
        case 2:
        one.printStudentOnConsole(&one);
        break;
        case 3:
        one.acceptStudentFromConsole(&one);
        break;
        default:
        cout<<"Please enter correct information"<<endl;
        break;
        }

    }
    return 0;
}