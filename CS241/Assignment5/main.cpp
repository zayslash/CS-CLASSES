#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int Perm3();

int main()
{
Perm3();
return 0;
}


int Perm3() {
  
 fstream file;
  
  file.open("perm.txt" ,fstream::out);
  
 int divider_counter = 0, columns_count = 10 ;
int counterCheck= 0;

string alpha_stringarray, row_divide = "\n" , col_divide = "  " ;
for(char c = 'A'; c <= 'Z'; ++c){
alpha_stringarray +=c; }
string alphabet_letters = alpha_stringarray;

//Formula for Combinations    n! / r!(n-r)!


int size = alphabet_letters.size();


for (int count_i = 0; count_i < size; count_i++){
for (int count_z = 0; count_z < size; count_z++){
    
   if(alphabet_letters[count_i] == alphabet_letters[count_z]){
    
     continue;
    
   } 
   
  
for (int count_x = 0; count_x < size; count_x++){

         if (alphabet_letters[count_x] == alphabet_letters[count_i]){
           continue;
         } 
         if (alphabet_letters[count_x] == alphabet_letters[count_z]){ 
           continue;
         }
   counterCheck++;

if (divider_counter != 0 && divider_counter % columns_count == 0 ) {
    // cout << row_divide;
  }
if(file.is_open()){
  
  file << counterCheck << ".\t";
file << alphabet_letters[count_i];
file << alphabet_letters[count_z];
file << alphabet_letters[count_x];
file << col_divide << "\n";
divider_counter++;
}
}}

}
  
  
  file.close();


}
