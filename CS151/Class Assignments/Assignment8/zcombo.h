//Name    : Zanif Sandy
//Creation: 05.12.17

#ifndef ZCOMBO_H
#define ZCOMBO_H
#include <string>
using namespace std;


//Name: ComboWithout()
//Parameters: none
//Return: void
//Flowchart:
//Label   Task                                                                                                           Goto
//01      (start)                                                                                                         02
//02      [int divider_counter = 0, columns_count = 10]                                                                   03
//03      [string alpha_stringarray, row_divide = "\n", col_divide = "    "]                                              04
//04      <char c = 'A'; c <= 'Z'; ++c>                                                                                   05,04
//05      [alpha_stringarray +=c;]                                                                                        06
//06      [string alphabet_letters = alpha_stringarray]                                                                   07
//07      <int count_i = 0; count_i < (sizeof(alphabet_letters) - (sizeof(alphabet_letters)/4)); count_i++>               08,16
//08      <int count_z = count_i + 1; count_z < (sizeof(alphabet_letters) - (sizeof(alphabet_letters)/4-1)); count_z++>   09,16
//09      <int count_x = count_z + 1; count_x < (sizeof(alphabet_letters) - (sizeof(alphabet_letters)/4-2)); count_x++>   10,16
//10      <divider_counter != 0 && divider_counter % columns_count == 0>                                                  11,12
//11      print(row_divide)                                                                                               12
//12      print(alphabet_letters[count_i])                                                                                13
//13      print(alphabet_letters[count_z])                                                                                14
//14      print(alphabet_letters[count_x])                                                                                15
//15      print(col_divide)                                                                                               16
//16      divider_counter++                                                                                               17
//17      exit                                                                                                           
void ComboWithout() {
 int divider_counter = 0, columns_count = 10 ;

string alpha_stringarray, row_divide = "\n" , col_divide = "  " ;
for(char c = 'A'; c <= 'Z'; ++c){
alpha_stringarray +=c; }
string alphabet_letters = alpha_stringarray;

 //Formula for Combinations   n! / r!(n-r)
 
for (int count_i = 0; count_i < (sizeof(alphabet_letters) - (sizeof(alphabet_letters)/4)); count_i++){
for (int count_z = count_i + 1; count_z < (sizeof(alphabet_letters) - (sizeof(alphabet_letters)/4-1)); count_z++){
for (int count_x = count_z + 1; count_x < (sizeof(alphabet_letters) - (sizeof(alphabet_letters)/4-2)); count_x++){

if (divider_counter != 0 && divider_counter % columns_count == 0 ) {
     cout << row_divide;
  }
cout << alphabet_letters[count_i];
cout << alphabet_letters[count_z];
cout << alphabet_letters[count_x];
cout << col_divide;
divider_counter++;
}}
}}

#endif 
