/*********************************************************************************************************************************************************************************
//Name    : Zanif Sandy
//Creation: 27.02.18
//Version : v1
//Description: 2. Write a program that evaluates a predicate of the form (∃x)P(x). Your program should define the following function
**********************************************************************************************************************************************************************************************/
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int Absolute_value(int i)
{
	if( i >= 0)
		return i;
	else
		return -i;
}

bool isEven(int x)
{

  if ((Absolute_value(x) % 2) == 0)
  {
  return true;
  }else{
  return false;}
}

bool isMult3(int x)
{
  
  if((Absolute_value(x) % 3) ==0){
  return true;
  }else{
  return false;}
}

bool eWff (string doi, bool (*P)(int))
{
  int value ;
  string line, content;

  ifstream file;
  file.open(doi);

 if (file.is_open()){

   while (file >> value)  
   {
      
    if (P(value)){
      return true;
    }
    }
    return false;
    
    file.close();
   
 }
}
int main() 
{
string files[2] = {"data1.txt","data2.txt"};
cout << boolalpha;
for(int i = 0;i < 2;i += 1)
{
cout << "Predicate wff evaluates to " << eWff(files[i],isEven) << " for DOI " << (i + 1)
<< " and predicate isEven()\n";
cout << "Predicate wff evaluates to " << eWff(files[i],isMult3) << " for DOI " << (i + 1)
<< " and predicate isMult3()\n\n";
}
return 0;
}
