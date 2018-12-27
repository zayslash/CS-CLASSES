/*********************************************************************************************************************************************************************************
//Name    : Zanif Sandy
//Creation: 01.12.17
//Version : v1
//Description: Prints random set of arrays then sorts it in decending order.
**********************************************************************************************************************************************************************************************/

#include <iostream>
#include "zsort.h"
int main(){
int v[10],number_one,number_two;
cout<< "Enter Two distict numbers: ";
cin >> number_one >> number_two;
RandomNumber(number_one,number_two,10,v); 
cout << "\n***********Random Numbers***********" << endl;
PrintArray(v,10);
sort(v,10);
cout << "\n***********Decending Sorted Numbers***********" << endl;
PrintArray(v,10);  
  
  return 0;
}
/***********************************************************************************************************************************************************************************
//Flowchart:
//Label          Task                                                                                   Goto
//01             (start)                                                                                  02
//02             [int v[10],number_one,number_two]                                                        03
//03             print(Enter Two distict numbers: )                                                       04
//04             prompt(number_one,number_two)                                                            05
//05             RandomNumber(number_one,number_two,10,v)                                                 06
//06             print(***********Random Numbers***********)                                              07
//07             PrintArray(v,10)                                                                         08
//08             sort(v,10)                                                                               09
//09             print(***********Decending Sorted Numbers***********)                                    10
//10             PrintArray(v,10)                                                                         11
//11             exit:0
*********************************************************************************************************************************************************************************/