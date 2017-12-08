#include <iostream>

using namespace std;

int countword(char*);

int main()

{

     char in[81];

cout<<"Enter a string(max 80 characters) : ";

cin.getline(in,81);

cout<<in<<" has "<<countword(in)<<" words"<<endl;

return 0;

}

int countword(char* in)

{

     int k=0,count123=1;

for(k=0;*(in+k)!='\0';k++)

      if(*(in+k)==' ')

            count123++;

return count123;

}
