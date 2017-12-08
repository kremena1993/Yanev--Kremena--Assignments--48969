#include <iostream>
using namespace std;

struct student{
   public:
       string name;
       string id;
       double* marks;
       double average;
       char grade;
       student(string name,string id,double* marks){
           this->name = name;
           this->id = id;
           this->marks = marks;
       }
};

void assign_average(student* std){
   std->average = (std->marks[0] + std->marks[1] + std->marks[2])/3;
}

void compute_grade(student* std){
   if (std->average >= 91)
       std->grade = 'A';
   else if (std->average >= 81 && std->average <= 90)
       std->grade = 'B';
   else if (std->average >= 71 && std->average <= 80)
       std->grade = 'C';
   else if (std->average >= 61 && std->average <= 70)
       std->grade = 'D';
   else
       std->grade = 'F';
}

int main(){
   string name,ID;
   cout << "Enter student name and ID : ";
   cin >> name >> ID;
   double* marks = new double[3];
   cout << "Enter three scores : ";
   for (int i = 0; i < 3; i++)
       cin >> marks[i];
   student *std = new student(name,ID,marks);
   assign_average(std);
   compute_grade(std);
   cout << "---- STUDENT INFORMATION ---- " << endl;
   cout << "NAME : " << std->name << endl;
   cout << "ID : " << std->id << endl;
   cout << "AVERAGE : " << std->average << endl;
   cout << "COURSE GRADE : " << std->grade << endl;

   return 0;
}
