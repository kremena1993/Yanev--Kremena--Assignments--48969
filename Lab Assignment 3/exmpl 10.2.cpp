#include<iostream>
#include<string.h>

using namespace std;

void displayReverse(char str[]){
   int len = strlen(str);
   for(int i=len-1; i>=0; i--){
       cout<<str[i];
       }
   cout<<endl;
   }

int main(){
  
   char str[100];
   cout<<"Enter a string: ";
   cin.getline(str, 100);
  
   displayReverse(str);
  
   return 0;
   }
