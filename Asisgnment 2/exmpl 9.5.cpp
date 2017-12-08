/******************************************************************************/
/******************************  Homework 9.5 **********************************/
/********************************************************************************/

#include <iostream>
using namespace std;

int doSomething(int *x, int *y) {
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}

int main()
{
    int a,b;
    a=5;
    b=10;
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
    cout<<"after using function value of a + b = "<<doSomething(&a,&b)<<endl;
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
    return 0;
}

