#include "Box.h"
#include <iostream>

using namespace std;

int main(){
    
    Box ob1;
    Box ob2(2.0,3.0,4.0);

     cout << " Box Properties: " << endl;

     cout << "----------------------" << endl;

     cout <<"\n Volume of Box1: " << ob1.getVolume();

     cout <<"\n Surface Area of Box1: "<< ob1.getSurfaceArea();

     cout << endl;

     cout<< "\n Volume of Box2: " <<  ob2.getVolume();

     cout<<"\n Surface Area of Box2: " <<ob2.getSurfaceArea();

     cout << endl << endl;

     return 0;
}