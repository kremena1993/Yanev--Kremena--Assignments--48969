/******************************************************************************/
/******************************  Homework 9.10 **********************************/
/********************************************************************************/
#include <iostream>
using namespace std;
int* reverseArray(int*, int);
int main()
{
	const int size = 5;
	int array1[size] = {10, 20, 30 , 40, 50};
	int* numptr = array1;
	for( int i = 0; i < size; i++ )
		cout << numptr[i] << endl;
	cout << endl;
	numptr = reverseArray(array1, size); //assigns numptr to the memory location of the return
	for( int i = 0; i < size; i++ )
		cout << numptr[i] << endl;
	delete[] numptr; 
	numptr = 0; 
	return 0;
}
int* reverseArray(int* in, int size)
{
	int *newArray = new int[size]; 
	for( int oldIndex = size-1, newIndex = 0; oldIndex >= 0; oldIndex--, newIndex++ )
		newArray[newIndex] = in[oldIndex];
	return newArray;
}
