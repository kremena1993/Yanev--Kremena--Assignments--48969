#include <fstream>
#include <iostream>

using namespace std;

int main() {
string filename;
string row, search;
int count = 0;

cout<<"Enter the file name: ";
cin>>filename;

cout<<"Enter string to search for: ";
cin>>search;

ifstream file(filename.c_str());
  
while(getline(file, row))
{
size_t found = row.find(search);
if (found!=string::npos) {
cout << "found in: " << row << '\n';
count ++;
}
}
cout<<search<<" was found "<<count<<" times.\n";
return 1;
}
