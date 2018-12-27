//Name    : Zanif Sandy
//Creation: 01.12.17

#ifndef ZGUESS_H
#define ZGUESS_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

//Name: GuessNumber()
//Parameters: int int int int[]
//Return: void
//Flowchart:
//Label   Task                                                                     Goto
//01      (start: min,max,limit,log[])                                              02
//02      <max > min>                                                               03,05
//03       max=max                                                                  04
//04       min=min                                                                  07
//05       max=min                                                                  06
//06       min=max                                                                  07
//07       [int choice, i = 0, cast=0 ]                                             08
//08       srand(time(0))                                                           09
//09       int random_number= rand() % (max-min+1) + min                            10
//10       <choice!=random_number && limit>0>                                       11
//11       print(Guess my number: )                                                 12
//12       prompt(choice)                                                           13
//13       <choice == random_number>                                                14
//14       print(You got it! : )                                                    15
//15       <choice!= random_number && limit>1>                                      16 
//16       print(Incorrect. Guess again)                                            17
//17       log[i]                                                                   18
//18       i++                                                                      19
//19       limit--                                                                  20,11
//20       <choice!=random_number && limit==0>                                      21
//21       print(You have no more guesses)                                          22
//22       print(\nThe random number was << random_number)                          23
//23       print(\nYour guesses were [)                                             24
//24       <cast<i>                                                                 25
//25       print(log[cast])                                                         26
//26       <cast < i -1>                                                            27
//27       print(,)                                                                 28
//28       <cast == i -1>                                                           29
//29       print(])                                                                 30
//30       cast++                                                                   31,24
void GuessNumber(int min, int max, int limit, int log[])
{
  
  if(max>min){
    max=max;
    min=min;
  }
  else{
    max=min;
    min=max;
  }
  
  int choice,i=0,cast=0; 
  
 srand(time(0));
 int random_number= rand() % (max-min+1) + min ;
 while (choice!=random_number && limit>0)
 {
    cout<<endl<<"Guess my number: ";
    cin>>choice;
    
    if (choice == random_number)
    { 
      cout<< "You got it! :) "; 
      
    }
    
    if (choice!= random_number && limit>1){
      cout << "Incorrect. Guess again";
     
      
    }
    log[i]=choice; 
    i++; 
    limit--; 
 }
  if (choice!=random_number && limit==0)
    {
    cout<<"You have no more guesses"<<endl;
    cout<<"\nThe random number was " << random_number;
    }
    
  cout<<"\nYour guesses were [";
  while(cast<i) 
  {
    cout <<log[cast]; 
      if(cast < i - 1)
      {
        cout<<",";
      }
      if(cast == i - 1)
      {
        cout<<"]";
      }
      cast++;
   }
}

#endif 