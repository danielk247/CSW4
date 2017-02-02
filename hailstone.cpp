/*********************************************************************

** Author: Daniel Kim

** Date: 02/02/2017

** Description: 
 hailstone sequence starts with some positive integer. 
 
 If that integer is even, 
 then you divide it by two to get the next integer in the sequence,
 but if it is odd, then you multiply it by three and add one to get the next integer in the sequence. 
 
 Then you use the value you just generated to find out the next value, according to the same rules. 
 
 Write a function named hailstone that takes the starting integer as a parameter and returns how many steps it takes to reach 1 
 (technically you could keep going 1, 4, 2, 1, 4, 2, etc.
 but you will stop when you first reach 1). If the starting integer is 1, the return value should be 0, 
 since it takes no steps to reach one (we're already there). If the starting integer is 3, 
 then the sequence would go: 3, 10, 5, 16, 8, 4, 2, 1, and the return value should be 7.

The function should just return the value, not display it (though of course you can use print statements during testing and debugging).
****************************************************************
*/

#include <iostream>


using namespace std;

int hailstone(int num)
{
    static int count = 0;
    
    if(num == 1)
    {
        return count;
    }
    if(num % 2 == 0)
    {
        count++;
        num = num / 2;
        hailstone(num);
    }
    else
    {   
        count++;
        num = num * 3 + 1;
        hailstone(num);
        
    }

}

/*int main()
{
   int n;
   cout << "Enter a positive integer: ";
   cin >> x;
   int count = hailstone(x);
   cout << "Number of steps took : " << count << endl;
   return 0;
}*/