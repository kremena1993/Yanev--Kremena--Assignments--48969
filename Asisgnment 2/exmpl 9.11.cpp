/******************************************************************************/
/***************************** Homework 9.11 ********************************/
/********************************************************************************/

//This program is used to accept an int array and the array's size as arguments, and then creates a new
//array that is twice the size of the argument array.
#include <iostream>
using namespace std;

int* expandSize (int*, int);

int main()
{
	const int SIZE = 10;											//Number of elements
	int ary [SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};				//Used to hold numbers
	int* num=ary;													

	for(int index=0;index<SIZE;index++)
		cout<<num[index]<<endl;
	

	num=expandSize(ary, SIZE);	//Used to assign num to the memory location of the return

	for(int index=0;index<SIZE*2;index++)
		cout<<num[index]<<endl;

	delete[] num;	//Used to delete memory
	num = 0;		//Used to point the unused elements of the second array with zero.

	return 0;
}
//**********************************************************************************************************
//The function expandSize accepts an int array and the array's size as arguments. The function then creates*
//a new array that is twice the size of the argument array.												   *
//**********************************************************************************************************
int* expandSize(int* ary, int size)
{
int* expandArray=new int[size * 2];

for (int index=0;index<size;index++)
expandArray[index]=ary[index];

for (int index=size;index<size*2;index++)
expandArray[index]=0;

return expandArray;
}
