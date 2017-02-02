/*********************************************************************

** Author: Daniel Kim

** Date: 02/02/2017

** Description: 
The following formula can be used to determine the distance an object falls due to gravity in a specific time period:

d = (1/2)* g(t^2)

where d is the distance in meters, g is 9.8, and t is the time in seconds that the object has been falling. 
This function named fallDistance takes the falling time as an argument.  
The function should return the distance in meters that the object has fallen in that time.  
For example if the function is passed the value 3.0, then it should return the value 44.1.

****************************************************************
*/

#include <iostream>
using namespace std;

double fallDistance(double ftime)
    {
      double d;
     
      //cout << "This was called" << endl;
      d = 0.5*9.8*(ftime * ftime); // ftime is the time the object fell, d is the distance
     // cout << d << endl;
      return d;
    }

 /*   int main()
{
    double d,t;
    cout << "Enter t" << endl;
    cin >> t;
    d = fallDistance(t);
    cout << d << endl;
    
return 0;

}
*/