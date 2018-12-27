//Name    : Zanif Sandy
//Creation: 18.12.17

#ifndef KSWEEP_H
#define KSWEEP_H

#include <sstream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
//defined Global Variables used throughout the program
char displayArray [8][8], mineArray [8][8], playAgain;
int numberofMines = 10, xPositionNum, yPositionNum, count = 0, counter1 = 0;
string mines, xPosition, yPosition;

//Pre defined Function definitions for functions used in program

void mine_Counter();
void adjacent_Checker();
int check_Game();

//This Function Assigns * and 0 symbols to the array displayArray[][] and mineArray[][]respectively, then assigns mines to random positions in Array mineArray[][] as # then calls mineCount function.
void assignArray()
{
	srand((unsigned int)time(0));
	
	//Assign symbol to the array
	for(int row = 0; row < 8; row ++){
		for(int col = 0; col < 8; col ++){
			displayArray [row][col] = '*';
			mineArray [row][col] = '0';
		}
	}
	//assigning mines
	for(int i = 1; i <= numberofMines; i++){
		int row = (rand() % 8);
		int col = (rand() % 8);
		while(mineArray[row][col] == '#'){
			row = (rand() % 8);
			col = (rand() % 8);
		}
		mineArray[row][col] = '#';
	}

	mine_Counter();
}

//This Function counts the mines for surrounding tiles 	if(mineArray [row][col] == '#')
void mine_Counter()
{
	for(int row = 0; row < 8; row ++){
	for(int col = 0; col < 8; col++){
		if(mineArray [row][col] == '#'){
		for(int x = row - 1; x <= row + 1; x++){
			for(int y = col - 1; y <= col + 1; y++)
					if(x >= 0 && x <= 8){
			if(y >= 0 && y <= 8){
		if(mineArray[x][y] != '#'){
									mineArray[x][y] += 1;
								}
							}}			}
				
			}		}	}
}

//This Function iterates and displays elements of a 2 dimentional Array for 8 x 8 grid , Funtion show array takes one character datatype 2 dimentional array and prints out the eliments of the grid " "
void showArray(char anArray[8][8])
{
	for(int row = 0; row < 8; row++){
		for(int col = 0; col < 8; col++){
			cout << anArray [row][col] << " ";
		}
		cout << endl;
	}
}


//This Function is the play function used to play the game. It promps user to Enter X and Y Coordinates seperatly then checks the MineArray[][] if the (x,y) postition is already taken then loops to input another instance of (x,y) if taken. After the loop it checks if the mineArray[xPositionNum - 1][yPositionNum - 1] == '#' to determin if the user wins or losses
void play()
{

	for(int i = 0; i <= 64; i++){

		do
		{
			cout << "Please enter x: ";
			cin >> xPosition;
			stringstream(xPosition) >> xPositionNum;
		}while(xPositionNum < 1 || xPositionNum > 8);

		do
		{
			cout << "Please enter y: ";
			cin >> yPosition;
			stringstream(yPosition) >> yPositionNum;
		}while(yPositionNum < 1 || yPositionNum > 8);

		while(displayArray[xPositionNum - 1][yPositionNum - 1] == mineArray[xPositionNum - 1][yPositionNum - 1]){

			cout << "That position taken." << endl << endl;

			cout << "Please enter another x: ";
			cin >> xPosition;
			stringstream(xPosition) >> xPositionNum;

			cout << "Please enter another y: ";
			cin >> yPosition;
			stringstream(yPosition) >> yPositionNum;
		
		}
		if(mineArray[xPositionNum - 1][yPositionNum - 1] == '#'){
			cout << "\nMINE !!!! MINE !!!!" << endl;
			cout << "Game Over!" << endl << endl;
			showArray(mineArray);
			return;
		}
		else{
		displayArray[xPositionNum - 1][yPositionNum - 1] = mineArray[xPositionNum - 1][yPositionNum - 1];
			adjacent_Checker();
			showArray(displayArray);
			count = check_Game();
      
			if(count == (64 - numberofMines)){
				cout << "\n WINNER WINNER, You won the Game!" << endl;
				
				return;
			}
		}
	}
}



//This Function checks the adjacent for revealing numbers surrounding a '0' tile. if(mineArray[xPositionNum - 1][yPositionNum - 1] == '0'), displayArray[x2][y2] = mineArray[x2][y2]
void adjacent_Checker()
{
	if(mineArray[xPositionNum - 1][yPositionNum - 1] == '0'){
		for(int x = xPositionNum - 2; x != xPositionNum + 1; x++){
		for(int y = yPositionNum - 2; y != yPositionNum + 1; y++){
		if(x >= 0 && x <= 4){
		if(y >= 0 && y <= 4){
		displayArray[x][y] = mineArray[x][y];						
		if(mineArray[x][y] == '0'){
		for(int x2 = x - 1; x2 != x + 2; x2++){
	for(int y2 = y - 1; y2 != y + 2; y2++){
				if(x2 >= 0 && x2 <= 4){
				if(y2 >= 0 && y2 <= 4){
				if(mineArray[x2][y2] != '#'){
	  		displayArray[x2][y2] = mineArray[x2][y2];
}	}	}	}	}	}	}	}	}}	} }

//This Function checks the game for a victory and returns the count if if(displayArray[x][y] == mineArray[x][y])
int check_Game()
{
	int count = 0;
	for(int x = 0; x < 8; x++){
		for(int y = 0; y < 8; y++){
			if(displayArray[x][y] == mineArray[x][y]){
				count += 1;
			}
				
		}
	}
	return count;
}

#endif 