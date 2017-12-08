#include <iostream> // header files

#include <cctype>

#include <cstring>

const int MAX_LENGTH = 500; // taking max length of the string

int main(){ // main function

char sentence[MAX_LENGTH]; // decalring a string for a sentence

std::cout << "Enter a sentence .\n";

std::cin.getline(sentence, MAX_LENGTH); // getting a sentence from the user

sentence[0]=toupper(sentence[0]); // changing first character to upper

for (int i = 1; i < strlen(sentence); i++){// from 2nd to last

if (sentence[i]=='.') // if u could find full stop

sentence[i+2]=toupper(sentence[i+2]); // then change the character after the space

}

std::cout << std::endl << sentence << std::endl; // printing output

return 0;

}
