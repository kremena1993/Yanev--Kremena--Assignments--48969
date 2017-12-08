#include<iostream>
using namespace std;

class Population
{
   long population;
   long no_births;
   long no_deaths;
public:
   //constructor to initialize private members to zero
   Population()
   {

       population = 0;
       no_births = 0;
       no_deaths = 0;
   }
   //method to set values of an object of type Population
   void set_population(long pol, long births, long deaths)
   {
       population = pol;
       no_births = births;
       no_deaths = deaths;
   }
   //method to calculate birth rate
   double birth_rate()
   {
       double rate =((double)no_births/population)*100;
       return rate;
   }
   //method to calculate death rate
   double death_rate()
   {
       double rate = ((double)no_deaths/population)*100;
       return rate;
   }

};

int main()
{
   //declare an object of type population
   Population obj;
   //local variable to store values entered from user
   long polulation,births,deaths;

   cout<"Enter values for population, number of births , number of deaths\n";
   cout<<"Population = ";
   cin>>polulation;

   cout<<"births = ";
   cin>>births;

   cout<<"deaths = ";
   cin>>deaths;

   //set above values for an object pol
   obj.set_population(polulation,births,deaths);

   cout<<"Birth rate = "<<obj.birth_rate()<<"%"<<endl;
   cout<<"Death rate = "<<obj.death_rate()<<"%"<<endl;
  
}
