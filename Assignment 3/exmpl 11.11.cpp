#include <iostream>

// Monthly Budget Struct
struct MonthlyBudget {
   float Housing,
       Utilities,
       Household_Expenses,
       Transportation,
       Food,
       Medical,
       Insurance,
       Entertainment,
       Clothing,
       Misc;
};

// Defining some functions.
// For getting user defined spending.
void getExpenses ( MonthlyBudget& );
// Compares user defined expenses to pre-defined constant spending values.
void checkExpenses ( MonthlyBudget );

// Constants for Budget amounts.
const float 
	HOUSING = 500.0,
	UTILITIES = 150.0,
    HOUSEHOLD_EXPENSES = 65.0,
    TRANSPORTATION = 50.0,
    FOOD = 250.00,
    MEDICAL = 30.0,
    INSURANCE = 100.0,
    ENTERTAINMENT = 150.0,
    CLOTHING = 75.0,
    MISC = 50.0;
const float BUDGET_TOTAL = HOUSING +
               UTILITIES +
               HOUSEHOLD_EXPENSES +
               TRANSPORTATION +
               FOOD +
               MEDICAL +
               INSURANCE +
               ENTERTAINMENT +
               CLOTHING +
               MISC;

int main () {
   // Creating my life's budget.
   MonthlyBudget myLife;
   getExpenses ( myLife );
   checkExpenses ( myLife );
   return 1;
}

void getExpenses ( MonthlyBudget &life ) {
   using namespace std;

   cout << "Please enter your expenses for the month." << endl;
   cout << "Housing: ";
   cin >> life.Housing;
   cout << "Utilities: ";
   cin >> life.Utilities;
   cout << "Household Expenses: ";
   cin >> life.Household_Expenses;
   cout << "Transportation: ";
   cin >> life.Transportation;
   cout << "Food: ";
   cin >> life.Food;
   cout << "Medical: ";
   cin >> life.Medical;
   cout << "Insurance: ";
   cin >> life.Insurance;
   cout << "Entertainment: ";
   cin >> life.Entertainment;
   cout << "Clothing: ";
   cin >> life.Clothing;
   cout << "Misc: ";
   cin >> life.Misc;
   cout << endl;
}

void checkExpenses ( MonthlyBudget life ) {
   using namespace std;
  
   cout << "Housing: " << ( life.Housing > HOUSING ? "Over":"Under" ) << endl;
   cout << "Utilities: " << ( life.Utilities > UTILITIES ? "Over":"Under" ) << endl;
   cout << "Household Expenses: " << ( life.Household_Expenses > HOUSEHOLD_EXPENSES ? "Over":"Under" ) << endl;
   cout << "Transportation: " << ( life.Transportation > TRANSPORTATION ? "Over":"Under" ) << endl;
   cout << "Food: " << ( life.Food > FOOD ? "Over":"Under" ) << endl;
   cout << "Medical: " << ( life.Medical > MEDICAL ? "Over":"Under" ) << endl;
   cout << "Insurance: " << ( life.Insurance > INSURANCE ? "Over":"Under" ) << endl;
   cout << "Entertainment: " << ( life.Entertainment > ENTERTAINMENT ? "Over":"Under" ) << endl;
   cout << "Clothing: " << ( life.Clothing > CLOTHING ? "Over":"Under" ) << endl;
   cout << "MISC: " << ( life.Misc > MISC ? "Over":"Under" ) << endl;

   float monthTotal = life.Housing +
               life.Utilities +
               life.Household_Expenses +
               life.Transportation +
               life.Food +
               life.Medical +
               life.Insurance +
               life.Entertainment +
               life.Clothing +
               life.Misc;

   if ( monthTotal > BUDGET_TOTAL ) {
       cout << "Over Budget by $" << (monthTotal-BUDGET_TOTAL) << endl;
   }
   else if ( monthTotal < BUDGET_TOTAL ) {
       cout << "Under Budget by $" << (BUDGET_TOTAL-monthTotal) << endl;
   }
   else {
       cout << "On Budget" << endl;
   }
}
