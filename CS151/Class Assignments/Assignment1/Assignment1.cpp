/*********************************************************************************************************************************************************************************
//Name    : Zanif Sandy
//Creation: 09.06.17
//Version : v1
Description: Calculates the BMI fromUser, Input: Pounds, Feet Inches Output: BMI , Kilogram and Meters
**********************************************************************************************************************************************************************************************/
#include <iostream>
#include <string>

// From cmath Library and iomainip using pow(int ,int), setprecision(int)
#include <cmath>
#include <iomanip>
using namespace std;

// Name: Main
//Description: Displays message "Hello World!"
//Return: 0 if successful
//Parameters: None

int main() {

// Declaration of Varibles Float Type
float BMI_height_weight;
float weight;
float height_ft;
float height_in;

// Prompts User for input Pounds
  cout << "Enter Weight in (lbs): ";
  cin >> weight;

// Prompts User for input height in feet inches (ft in)
  cout << "\nEnter height in (ft in): ";
  cin >> height_ft >> height_in ;

// Calculates the FEET into INCHES
  height_in += height_ft*12;

// Declaration of Float type Vaiables 

//converts POUNDS to KILOGRAMS
float lbs_kg = weight * 0.453593;
//converts INCHES to METERS
float ft_m = (height_in) / 39.37008;

// BMI conversion from height(M), weight(Kg) 
  BMI_height_weight = (lbs_kg / pow(ft_m,2));
 
  cout << "\n";
  cout << "\n";
  cout << "\n";
 
//Prints to console Weight, Height, BMI. In a 2 place decimal floating point 
  cout << fixed << setprecision(2) << "Your weight: " << lbs_kg << " kg" << "\n";
  cout << fixed << setprecision(2) << "Your height: " << ft_m << " m" << "\n";
  cout << fixed << setprecision(2) << "BMI is " << BMI_height_weight;
  
return 0;
}

/**
//FLOWCHART:
LABEL         TASK                                                                             GOTO
01            (START)                                                                          02
02            [#include <iostream>]                                                            03
03            [#include <string>]                                                              04  
04            [#include <cmath>]                                                               05
05            [#include <iomanip>]                                                             06
06            [using namespace std;]                                                           07
07            [int main() {]                                                                   08
08            [float BMI_height_weight, weight ,height_ft ,height_in;]                         09
09            /cout << "Enter Weight in (lbs): ";/                                             10
10            /cin >> weight;/                                                                 11
11            /cout << "\nEnter height in (ft in): ";/                                         12
12            /cin >> height_ft >> height_in ;/                                                13
13            [height_in += height_ft*12;]                                                     14
14            [float lbs_kg = weight * 0.453593;]                                              15
15            [float ft_m = (height_in) / 39.37008;]                                           16
16            [BMI_height_weight = (lbs_kg / pow(ft_m,2));]                                    17
17            /cout << "\n";/                                                                  18
18            /cout << "\n";/                                                                  19
19            /cout << "\n";/                                                                  20
20            /cout << fixed << setprecision(2) << "Your weight: " << lbs_kg << " kg" << "\n";/21
21            /cout << fixed << setprecision(2) << "Your height: " << ft_m << " m" << "\n";/   22
22            /cout << fixed << setprecision(2) << "BMI is " << BMI_height_weight; /           23
23            (exit:0)
**/
