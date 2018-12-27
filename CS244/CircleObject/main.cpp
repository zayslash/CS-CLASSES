/*************************************************************************************************************************************************************************
 * Names: Zanif Sandy & Rasheed Olayiwola
 * Date: 03/06/18
 * Version: V1
 * 
 * Description:Program creates an Object Circle inwhich Users Provides values for two points, calculates and prints the Radius, Diameter and Area of the Circle.
 * ***************************************************************************************************************************************************************************/
#include <iostream>
#include "Circle.h"
#include "Circle.cc"

using namespace std;

int main()
{

// c1 is an INSTANCE of Circle class
Circle c1;
c1.setCircleName("Wheel");
cout << "name: " << c1.getCircleName() << "\n";

//setCenterX method to set the value of private class variable centerX
c1.setCenterX(8.0);

 //setCenterY method to set the value of private class variable centerY
c1.setCenterY(5.5);

 // setPointX method to set the value of private class variable pointX;
c1.setPointX(15.0);

 // setPointY method to set the value of private class variable pointY;
c1.setPointY(25.5);

// radiusOfTwoPoints Method calculates the Radius of Two poiints 
c1.radiusOfTwoPoints();

// Prints The radius
cout << "Radius: " << c1.get_radius() << "\n";
  
// setDiameter Method calculates the Diameter 
c1.setDiameter();

// Prints Diameter
cout << "Diameter: "<< c1.get_diameter() << "\n";


//setAreaOfCircle Method calculates the Area
c1.setAreaOfCircle();

// Prints Area
cout << "Area: "<< c1.get_Area()<< "\n";


//setCircumference Method Calculates the Circumference
c1.setCircumference();

// Prints Cirumference
cout << "Circumference: "<< c1.get_circumference();


cout << "\n";
cout << "\n";




// c2 is an INSTANCE of Circle class using circle(double,double)
Circle c2(37.5, 20.7); 

c2.setCircleName("Pizza");
cout << "name: " << c2.getCircleName() << "\n";

 // setPointX method to set the value of private class variable pointX;
c2.setPointX(45.0);

 // setPointY method to set the value of private class variable pointY;
c2.setPointY(35.5);

// radiusOfTwoPoints Method calculates the Radius of Two poiints 
c2.radiusOfTwoPoints();

// Prints The radius
cout << "Radius: " << c2.get_radius() << "\n";
  
// setDiameter Method calculates the Diameter 
c2.setDiameter();

// Prints Diameter
cout << "Diameter: "<< c2.get_diameter() << "\n";


//setAreaOfCircle Method calculates the Area
c2.setAreaOfCircle();

// Prints Area
cout << "Area: "<< c2.get_Area()<< "\n";


//setCircumference Method Calculates the Circumference
c2.setCircumference();

// Prints Cirumference
cout << "Circumference: "<< c2.get_circumference();


Circle v[2]={c1,c2};
for(int i =0; i < 2; i++){
v[i].getPropertiesOfObject();
}



return 0;
}