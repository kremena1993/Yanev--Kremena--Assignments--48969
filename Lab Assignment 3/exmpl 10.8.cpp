#include<iostream>
#include<string>
using namespace std;
int main()
{
string input;
cout <<"Enter series of single digits numbers :";
cin >> input;
int max = input[0]-'0';
int min = input[0]-'0';
int sum = 0;
for(int i=0; i<input.length(); i++)
{
sum = sum + input[i]-'0';
if((input[i]-'0')>max) max = input[i]-'0';
if((input[i]-'0')<min) min = input[i]-'0';
}
cout <<"Sum of digits in string is : " << sum << endl;
cout <<"Highest digit in string is : " << max << endl;
cout <<"Lowest digit in string is : " << min << endl;
return 0;
}
