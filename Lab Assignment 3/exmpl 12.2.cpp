#include <iostream>
#include <fstream>
#include <string>

int main()
{
   std::string fileName;
   std::cout << "Enter a filename: " << std::endl;
   std::getline(std::cin, fileName);
   // Open file for reading
   std::fstream inputFile(fileName.c_str() , std::ios::in);

   std::string currentLine;
   int lineCount = 0;
   while (std::getline(inputFile, currentLine))
   {
       std::cout << currentLine << std::endl;
       lineCount++;
       if (lineCount == 24)
       {
           std::cout << "[Press any key to continue.]";
           std::cin.get();
           lineCount = 0;
       }
   }

   std::cout << "Reached end of file. Closing." << std::endl;
   inputFile.close();

   std::cin.get();

   return 0;
}

