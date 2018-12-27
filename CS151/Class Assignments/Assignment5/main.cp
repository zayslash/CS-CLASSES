/*********************************************************************************************************************************************************************************
//Name    : Zanif Sandy
//Creation: 01.12.17
//Version : v1
//Description: Limited Recorded Guess My Number where GuessNumber() randomly selects a number between min and max inclusively; and then, prompts the user
to guess the number until the user guesses correctly or reaches limit guesses. If the user runs out of guesses, it
display the number. Whether or not, the user guesses correctly or runs out of guesses, it displays a list of the
user’s guesses enclosed in square braces separated by commas.
**********************************************************************************************************************************************************************************************/

#include <iostream>
#include "zguess.h"

using namespace std;


int main (){
 int x, y,limit,log[100];
  cout<<endl<< "Enter two numbers :";
  cin>>x>>y;

  cout<<"Enter a limit: ";
  cin>>limit;

GuessNumber(x,y,limit,log);
  return 0;
}

/***********************************************************************************************************************************************************************************
//Flowchart:
//Label          Task                                                                                   Goto
//01             (start)                                                                                  02
//02             [int x,y,limit,log[100]                                                                  03
//03             print(Enter two numbers :)                                                               04
//04             prompt(x>>y)                                                                             05
//05             print(Enter a limit: )                                                                   06
//06             prompt(limit)                                                                            07
//07             GuessNumber(x,y,limit,log)                                                               08
//08             exit:0
*********************************************************************************************************************************************************************************/

