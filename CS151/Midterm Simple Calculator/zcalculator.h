//Author: <Zanif Sandy>
//Creation: <11.08.2017>
//Description:Simple calculator that does Adiition Subtraction Division and Multiplication or Quits program. Main function does a simple function call defined in the zcalculator header file and logs the calculation to a txt file.

#ifndef ZCALCULATOR_H
#define ZCALCULATOR_H
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;




//Name: Addition
//Return: VOID
//Parameters:float,float
//FlowChart
//Label    Task                                 Goto
//01       (start: i,o)                          02
//02        print (Result:)                      03
//03        print [i + o]                        04
//04        (exit)
void Addition(float i,float o){
  
  cout << "Result: ";
  cout << fixed << setprecision(3) << i+o;
  
}



//Name: Subtraction
//Return: VOID
//Parameters:float,float
//FlowChart
//Label    Task                                 Goto
//01       (start: i,o)                          02
//02        print (Result:)                      03
//03        print [i - o]                        04
//04        (exit)
void Subtraction(float i,float o){
  
   cout << "Result: ";
  cout << fixed << setprecision(3) << i-o;
  
}



//Name: Multiplication
//Return: VOID
//Parameters:float,float
//FlowChart
//Label    Task                                 Goto
//01       (start: i,o)                          02
//02        print (Result:)                      03
//03        print [i * o]                        04
//04        (exit)
void Multiplication(float i,float o){
   cout << "Result: ";
  cout << fixed << setprecision(3) << i*o;
  
}





//Name: Division
//Return: VOID
//Parameters:float,float
//FlowChart
//Label    Task                                 Goto
//01       (start: i,o)                          02
//02        print (Result:)                      03
//03        <o == 0>                             04,05 
//04        print (CANNOT DIVIDE BY 0)           06
//05        print [i / o]                        06  
//06        (exit)
void Division(float i,float o){
   cout <<  "Result: ";
  if (o == 0){
  
  cout << "CANNOT DIVIDE BY 0";
  }
  else{
  cout << fixed << setprecision(3) << i/o;
  }
}






//Name: SimpleCalculator
//Return: VOID
//Parameters: NONE
//FlowChart
//Label    Task                                             Goto
//01       (start:)                                          02
//02       (float n[2])                                      03
//03       (string choice)                                   04
//04        print(Simple Calculator) + (endl)                05
//05        print(1. Addition) + (endl)                      06
//06        print(2. Subtraction) + (endl)                   07
//07        print(3. Multiplication) + (endl)                08
//08        print(4. Division) + (endl)                      09
//09        print(5.Quit) + (endl)                           10
//10        print(Enter a choice:)                           11
//11        prompt(choice)                                   12
//12        <choice =="1"  or choice == "addition">          13,51
//13        print(endl) + (Enter Operand 1: )                14
//14        prompt(n[1])                                     15
//15        print(Enter Operand 2: )                         16
//16        prompt(n[2])                                     17
//17        Addition(n[1],n[2])                              18
//18        print(endl)                                      19
//19        print(endl)                                      20
//20        SimpleCalculator()                               21
//21        <choice =="2"  or choice == "subtraction">       22,51
//22        print(endl) + (Enter Operand 1: )                23
//23        prompt(n[1])                                     24
//24        print(Enter Operand 2: )                         25
//25        prompt(n[2])                                     26
//26        Subtraction(n[1],n[2])                           27
//27        print(endl)                                      28
//28        print(endl)                                      29
//29        SimpleCalculator()                               30
//30        <choice =="3"  or choice == "multiplication">    31,51
//31        print(endl) + (Enter Operand 1: )                32
//32        prompt(n[1])                                     33
//33        print(Enter Operand 2: )                         34
//34        prompt(n[2])                                     35
//35        Multiplication(n[1],n[2])                        36
//36        print(endl)                                      37
//37        print(endl)                                      38
//38        SimpleCalculator()                               39
//39        <choice =="4"  or choice == "division">          40,51
//40        print(endl) + (Enter Operand 1: )                41
//41        prompt(n[1])                                     42
//42        print(Enter Operand 2: )                         43
//43        prompt(n[2])                                     44
//44        Division(n[1],n[2])                              45
//45        print(endl)                                      46
//46        print(endl)                                      47
//47        SimpleCalculator()                               48
//48        <choice =="5"  or choice == "quit">              49,51
//49        print(EXIT)                                      50
//50        (exit)                                           51
//51        print(endl)                                      52
//52        print(Invalid Search .....) + (endl)             53
//53        print(endl)                                      54
//54        SimpleCalculator()                               
void SimpleCalculator(){
 
 
  float n[2];
  string choice;

  
  
  cout     << "Simple Calculator\n";
  cout     << "1. Addition\n";
  cout     << "2. Subtraction\n";
  cout     << "3. Multiplication\n";
  cout     << "4. Division\n";
  cout     << "5. Quit\n";
  cout     << "Enter a choice: ";
  cin >> choice;
 

 
 if (choice=="1" ||  choice == "addition"){
   cout << "\n";
  cout << "Enter Operand 1: ";
   cin >> n[1];
    cout << "Enter Operand 2: ";
   cin >> n[2];
   
   Addition(n[1],n[2]);
   cout << "\n";
   cout << "\n";
   
   SimpleCalculator();
 }
 else if (choice=="2" ||  choice == "subtraction"){
   cout << "\n";
  cout << "Enter Operand 1: ";
   cin >> n[1];
    cout << "Enter Operand 2: ";
   cin >> n[2];
   
 Subtraction(n[1],n[2]);
 cout << "\n";
   cout << "\n";
   
   SimpleCalculator();
}
 else if (choice=="3" ||  choice == "multiplication"){
    cout << "\n";
  cout << "Enter Operand 1: ";
   cin >> n[1];
    cout << "Enter Operand 2: ";
   cin >> n[2];
   Multiplication(n[1],n[2]);
 cout << "\n";
   cout << "\n";
   
   SimpleCalculator();
}
  else if (choice=="4" || choice ==  "division"){
    cout << "\n";
  cout << "Enter Operand 1: ";
   cin >> n[1];
    cout << "Enter Operand 2: ";
   cin >> n[2];
   Division(n[1],n[2]);
 cout << "\n";
   cout << "\n";
   
   SimpleCalculator();
}
  else if (choice=="5" || choice == "quit"  ) {
    
   cout << "EXIT";
  return;
} 

else {
 
 cout << "\n";
 cout << "Invalid Search [type: 1,2,3,4,5 or the title eg.\"addition\"]\n";
  cout << "\n";
SimpleCalculator();
  
}
}





//Name: SimpleCalculator(dece)*
//Return: VOID
//Parameters: bool
//FlowChart
//Label    Task                                 Goto
//01       (start: dece)                          02
//02       <dece == true>                         03, 04
//03       SimpleCalculator();                    05
//04       print(SIMPLE Calculator IS NOT ACTIVE) 05
//05       (exit)
void SimpleCalculator(bool dece){
  if (dece == true){
    SimpleCalculator();
  }
  else{
    cout << "SIMPLE Calculator IS NOT ACTIVE" ;
    
  } 
}

#endif
