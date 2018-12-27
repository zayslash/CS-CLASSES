/*********************************************************************************************************************************************************************************
//Name    : Zanif Sandy
//Creation: 01.12.17
//Version : v1
//Description: Copy file to a new file 
**********************************************************************************************************************************************************************************************/

#include <iostream>
#include "zcopy.h"

using namespace std;


int main(){
  
  string file_copy;
  cout << "Enter file to copy: ";
  cin >> file_copy;
  copy(file_copy);
  return 0;
}

/***********************************************************************************************************************************************************************************
//Flowchart:
//Label          Task                                                                                   Goto
//01             (start)                                                                                02
//02             [string file_copy]                                                                     03
//03             print(Enter file to copy: )                                                            04
//04             prompt(file_copy)                                                                      05
//05             copy(file_copy)                                                                        06
//06             exit:0
*********************************************************************************************************************************************************************************/