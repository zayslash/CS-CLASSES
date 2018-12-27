

/*********************************************************************************************************************************************************************************
//Name    : Zanif Sandy
//Creation: 11.14.17
//Version : v1
//Description: Base Converter converts respective base for random number generated
**********************************************************************************************************************************************************************************************/

#include "zbase.h"


using namespace std;

int main(){
  
  int base_id1, base_id2, base_id3;


 srand( (unsigned) time (0));
 int ran_id1= (rand() % 99 +1);
 int ran_id2= (rand() % 99 +1);
 
 
 cout<< "Enter Three Bases: ";
  cin>>base_id1>>base_id2>>base_id3;
 

 cout<<ran_id1<<" in base "<<base_id1<<" is ";
 baseConvert(base_id1,ran_id1);
 cout << endl;
 cout<<ran_id1<< " in base "<<base_id2<<" is ";
 baseConvert(base_id2,ran_id1);
 cout << endl;
 cout<<ran_id1<< " in base "<<base_id3<<" is ";
 baseConvert(base_id3,ran_id1);
 cout << endl;
cout << "\n";
 cout<<ran_id2<< " in base "<<base_id1<<" is ";
 numberGenerator(base_id1,ran_id2);
 cout << endl;
 cout<<ran_id2<< " in base "<<base_id2<<" is ";
 numberGenerator(base_id2,ran_id2);
 cout << endl;
 cout<<ran_id2<< " in base "<<base_id3<<" is ";
 numberGenerator(base_id3,ran_id2);
  
  
  return 0;
}

/***********************************************************************************************************************************************************************************
 //Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                   02
//02      (int base_id1 ,base_id2, base_id3)                                        03
//03      [srand ((unsigned) time (0))]                                             04
//04      (int ran_id1= (rand() % 99+1)                                             05
//05      (int ran_id2= (rand() % 99+1)                                             06
//06      print(Enter Three Bases:)                                                 07
//07      prompt(base_id1 , base_id2 , base_id3)                                    08
//08      print(ran_id1 "in base" base_id1 )                                        09
//09      [baseConvert(base_id1, ran_id1)]                                          10       
//10      print(endl)                                                               11
//11      print(ran_id1 "in base" base_id2 )                                        12
//12      [baseConvert(base_id2, ran_id1)]                                          13      
//13      print(endl)                                                               14
//14      print(ran_id1 "in base" base_id3 )                                        15
//15      [baseConvert(base_id3, ran_id1)]                                          16       
//16      print(endl)                                                               17
//17      print("\n")                                                               18
//18      print(ran_id2 "in base" base_id1 )                                        19
//19      [numberGenerator(base_id1, ran_id2)]                                      20       
//20      print(endl)                                                               21
//21      print(ran_id2 "in base" base_id2 )                                        22
//22      [numberGenerator(base_id2, ran_id2)]                                      23       
//23      print(endl)                                                               24
//24      print(ran_id2 "in base" base_id3 )                                        25
//25      [numberGenerator(base_id3, ran_id2)]                                      26      
//26      (exit:0)
 ***************************************************************************************************************************************************************************/