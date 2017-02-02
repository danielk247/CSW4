/*********************************************************************

** Author: Daniel Kim

** Date: 02/02/2017
* 
** Description: 
Write a void function named smallSort that takes three int parameters by reference and sorts their values into ascending order, 
so that the first parameter now has the lowest value, the second parameter the middle value, and the third parameter has the highest value. 
For example if the main method has:
int a = 14;
int b = -90;
int c = 2;
smallSort(a, b, c);
cout << a << ", " << b << ", " << c << endl;

Then the output should be:

-90, 2, 14

****************************************************************
*/
#include <iostream>

using namespace std;

// int& brings back the values for a,b,c, from main function

void smallSort(int& a, int&b, int& c)
{
    if(a > b)               // if a is greater than b then a and b swap values so that a is smaller
    {
        int temp = a;       //temp holds the value of a temporarily
        a = b;
        b = temp;
        
    }
    
    if(a > c)               // if b is greater than c then a and c swap values so that a is smaller
    {
        int temp = a;
        a = c;
        c = temp;
    }
    
    if(b > c)               // if b is greater than c then b and c swap values so that b is smaller
    {
        int temp = b;
        b = c;
        c = temp;
    }
    

}
/*
int main()
{   
    int a,b,c;
    cout << "Pick 3 numbers" << endl;
    cin >> a >> b >> c;
    
    smallSort(a,b,c);
    cout << a << ", " << b << ", " << c << endl;
    return 0;
    
}*/
    
