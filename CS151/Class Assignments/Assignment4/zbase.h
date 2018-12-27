//Name    : Zanif Sandy
//Creation: 11.14.17

#include<iostream>
#include<string>
#include <ctime>
#include <cstdlib>

using namespace std;
#ifndef ZBASE_H
#define ZBASE_H



//Name: numberGenerator
//Parameters: int , int
//Return: void
//Flowchart:
//Label   Task                                                                     Goto
//01      (start:base,value)                                                        02
//02      <value > 0>                                                               03,05
//03      [numberGenerator(base, value / base)]                                     04
//04      print(value % base)                                                       05
//05      (exit)
void numberGenerator(int base, int value)
{
  if (value > 0)
  {
 numberGenerator(base, value / base); }
  cout << (value % base);
}



//Name: baseConvert
//Parameters: int , int
//Return: void
//Flowchart:
//Label   Task                                                                     Goto
//01      (start:base,value)                                                        02
//02      <(base >= 2) && (base <= 9)>                                              03,05
//03      [numberGenerator(base, value)]                                            04
//04      print("")                                                                 05
//05      (exit)
void baseConvert(int base, int value)
{
  if ((base >= 2) && (base <= 9))
  {numberGenerator(base, value); }
  else{
    
    cout << "";
  }
}




#endif