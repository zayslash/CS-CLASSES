/*********************************************************************************************************************************************************************************
//Name    : Zanif Sandy
//Creation: 11.08.17
//Version : v1
//Description:Simple calculator that does Adiition Subtraction Division and Multiplication or Quits program. Main function does a simple function call defined in the zcalculator header file and logs the calculation to a txt file.
**********************************************************************************************************************************************************************************************/


#include <iostream>
#include <string>

#include "zcalculator.h"
using namespace std;


// Name: Main
//Description: Does a single function call
//Return: 0 if successful
//Parameters: None

int main (){

//Function call that displays a simple calculator from zcalculator.h headerfile if parameter is true 
  SimpleCalculator(true);


  return 0;
  
  
}


/**************************************************************************************************************************************************************************************************
  
 //Name: Main
 //Return: int
 //Parameters:none 
 //Flowchart:
 //Label                            Task                                      goto
 //01                               (start)                                   02
 //02                               SimpleCalculator(bool)                    03
 //03                               (exit: 0)
 
 ***********************************************************************************************************************************************************************************************/
  
 