/*********************************************************************

** Author: Daniel Kim

** Date: 02/09/2017
* 
** Description: 
Write a class called Box that has three double fields called height, width and length.  The class should have set methods for each field.  
It should have a three-parameter constructor that takes three doubles and passes them to the set methods to initialize the fields of the Box.  
It should have a default constructor that uses the set methods to initialize each field to 1.  
It should have a method that calculates and returns the volume of the Box and a method that calculates and returns the surface area of the Box.

The class declaration (interface) and the function definitions (implementation) must be in separate files - the interface or "header" file has a 
.hpp extension and the implementation has a .cpp extension. As usual, all data members should be private.  The Box class might be used as follows:

****************************************************************/

// this is the class declaration file

#ifndef BOX_H
#define BOX_H


class Box
{
    
    private:
        double  length, width, height;
        
        
    public: 
        Box(); //default constructor
        Box(double length, double width, double height); //constructor with parameters
        void setHeight(); //mutator
        void setWidth();
        void setLength();
        double getVolume(); //accessor
        double getSurfaceArea();
};


#endif

