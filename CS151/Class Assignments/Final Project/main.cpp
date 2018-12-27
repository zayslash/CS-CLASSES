 //Name    :Zanif Sandy
//Creation: 18.12.17
//Version : v1
//Description: Program for the game Minesweeper usind 8 x 8 grid

#include <iostream>
#include "ksweep.h"
using namespace std;

int main()
{

do{
		assignArray();
		showArray(displayArray);
		play();
		cout << "Play game again? (Y/N): ";
		cin >> playAgain;
		} 
		while(playAgain == 'Y' || playAgain == 'y');
	return 0;
}

//Flowchart:
//Label          Task                                                     Goto
//01             (start)                                                  02
//02             assignArray()                                            03
//03             showArray(displayArray)                                  04
//04             play()                                                   05
//05             print("Play game again? (Y/N): ")                        06
//06             prompt(playAgain)                                        07
//07             (playAgain == 'Y' || playAgain == 'y')                   08,02
//08             exit:0


  
  

