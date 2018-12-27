#define RESET  "\033[0m"
#define RED    "\033[31m"
#define YELLOW "\033[33m"

#include <iostream>
#include "baseball.h"
#include "baseball.cc"
#include <ctime>
#include <cstdlib>

using namespace std;




int main() {


 baseball player;
 baseball player2;
 player2.setPlayerName("Zanif");
 player.setPlayerName("Adam");

 cout << "\n";
 cout << player.getPlayerName() << " av:" << player.getbatAverage();



 srand(time(NULL));

 for (int i =0 ; i < 5; i++){

      int randomval = rand() % 2;
      player.setHitBall(randomval);

 }


 cout  << YELLOW << "\n" << player.getPlayerName() << RESET << " swung " << player.getBats() << " times";

 std::cout << RED << " and Hits the ball " << player.getHits() << " times " << RESET;

 cout << "His batting average is " << player.getbatAverage();



 //Player 2
  cout << "\n";
 cout << "\n";
 cout << player2.getPlayerName() << " av:" << player2.getbatAverage();

 for (int i =0 ; i < 5; i++){

     int randomval2 = rand() % 2;
     player2.setHitBall(randomval2);


 }


 cout << YELLOW << "\n" << player2.getPlayerName() << RESET <<" swung " << player2.getBats() << " times";

 cout  << RED << " and Hits the ball " << player2.getHits() << " times " << RESET;

 cout << "His batting average is " << player2.getbatAverage();


}
