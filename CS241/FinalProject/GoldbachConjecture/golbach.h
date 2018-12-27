#ifndef GOLBACH_H
#define GOLBACH_H

#include <iostream>
#include <fstream>

using namespace std;


bool checkIfPrime(unsigned int number){

 if(number < 2) return false;
 if(number == 2) return true;
 if(number % 2 == 0) return false;

  for(int i=3; (i*i)<=number; i+=2){
      if(number % i == 0 ) return false;
  }
 return true;

}


unsigned int amountOfPrimes(unsigned int numberSize){

  unsigned int count=0;
  unsigned int  i = 1 ;

  while ( i <= numberSize){

    if(checkIfPrime(i) == 1){
       count++;

    }

  i++;
 }
 return count;

}

void store_Primes(unsigned int numberSize,  int array[]){

  unsigned int count=0 ;
  unsigned int  i = 1 ;

  while ( i <= numberSize){

      if(checkIfPrime(i) == 1){

        array[count] = i;
        count++;

      }

   i++;
 }
}


void Golbach(unsigned int number, int array[]){
    ofstream file;

    file.open("output.txt");

    if(file.is_open()){

    int sum = 0;

    for(int j= 0; j < number;  j++){

       for (int i =0; i < number; i++){

           sum = array[i] + array[j];

           if (sum % 2 ==0 && sum < 2000){

           //cout << array[i] << "+" << array[j]<< "= " << sum << "\n";
            
           file << "("<< array[i] << " + " << array[j]<< ")"<<" --> " << sum << "\n";
         }
       }

     }
  }

}













#endif
