/*********************************************************************************************************************************************************************************
//Name    : Zanif Sandy
//Creation: 27.02.18
//Version : v1
//Description: 2. Write a program that evaluates a predicate of the form (Vx)P(x). Your program should define the following function
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

bool isOdd(int x)
{

  if ((Absolute_value(x) % 2) == 0)
  {
  return false;
  }else{
  return true;}
}

bool isMult5(int x)
{
  
  if((Absolute_value(x) % 5) == 0){
  return true;
  }else{
  return false;}
}

bool uWff (string doi, bool (*P)(int))
{
  int value ;
 
  ifstream file;
  file.open(doi);

 if (file.is_open()){
  
   while (file >> value)  
   {
      //cout << value << " ";
   
    if (!P(value)){
      return false;
    }
    }
    return true;
    file.close();
   
 }
}
int main() 
{
string files[2] = {"data1.txt","data2.txt"};
cout << boolalpha;
for(int i = 0;i < 2;i += 1)
{
cout << "Predicate wff evaluates to " << uWff(files[i],isOdd) << " for DOI " << (i + 1)
<< " and predicate isOdd()\n";
cout << "Predicate wff evaluates to " << uWff(files[i],isMult5) << " for DOI " << (i + 1)
<< " and predicate isMult5()\n\n";
}
return 0;
}
