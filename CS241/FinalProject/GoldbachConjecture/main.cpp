/*********************************************************************************************************************************************************************************
//Name    : Zanif Sandy
//Creation: 14.05.18
//Version : v1
//Description:
Goldbach's Conjecture
The strong Goldbach's conjecture states every even integer greater than or equal to 4 can be written
as a sum of two primes. Write a program that shows that Goldbach's conjecture is true for the even
integers between 4 and 2000 inclusively. Store the sums in a le with each sum on its own line.

**********************************************************************************************************************************************************************************************/


#include <iostream>
#include <fstream>
#include "golbach.h"
using namespace std ;


int main() {

const int sizeofCount = amountOfPrimes(2000);
int v[sizeofCount];

store_Primes(2000, v);

// for(int i = 0; i < sizeofCount; i++){
//   cout << v[i] << " ";
// }

Golbach(sizeofCount, v);


cout << "┏━━┓┏━┓┏┓︱┏━━┓┏━━┓┏━━┓┏━┓┏┓┏┓\n";
cout << "┃┏━┫┃┃┃┃┃︱┗┓┓┃┃┏┓┃┃┏┓┃┃┏┛┃┗┛┃\n";
cout << "┃┗┓┃┃┃┃┃┗┓┏┻┛┃┃┏┓┃┃┣┫┃┃┗┓┃┏┓┃\n";
cout << "┗━━┛┗━┛┗━┛┗━━┛┗━━┛┗┛┗┛┗━┛┗┛┗┛\n";

cout << "by Zanif Sandy";



std::cout << "\n\nAs we can see in output.txt File Golbach Conjecture is true for all even integers > 4\n\n";

std::cout <<"if Prime > 4      then:       (Prime + Prime) --> Even Integer\n\n\n";





return 0;
}
