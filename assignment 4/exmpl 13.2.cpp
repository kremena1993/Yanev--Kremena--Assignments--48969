#include<iostream>
using namespace std;

class employee
{
   int emp_num;
   char emp_name[20];
   char pos[10];

   char dept[10];


   public:

       void get_details();
       void show_emp_details();
};

void employee :: get_details()
{
   cout<<"\nEnter employee number:\n";
   cin>>emp_num;
   cout<<"\nEnter employee name:\n";
   cin>>emp_name;
   cout<<"\nEnter employee dept:\n";
   cin>>dept;
cout<<"\nEnter employee position:\n";
   cin>>pos;
}


void employee :: show_emp_details()
{
   cout<<"\n\n\nDetails of : "<<emp_name;
   cout<<"\n\nEmployee number: "<<emp_num;
   cout<<"\nemployee position : "<<pos;
   cout<<"\nemployee department : "<<dept;
}

int main()
{
int i;
   cout<<"\nEnter number of employee details\n";
   employee e;

for(i=0;i<4;i++)
{
       e.get_details();
       e.show_emp_details();

}

}
