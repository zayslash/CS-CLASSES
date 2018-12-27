//Name    : Zanif Sandy
//Creation: 01.12.17

#ifndef ZSORT_H
#define ZSORT_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;


//Name: PrintArray()
//Parameters: int int[]
//Return: void
//Flowchart:
//Label   Task                                                                      Goto
//01      (start: data[], size)                                                      02
//02      print([)                                                                   03
//03      <int i ;i < size; i++>                                                     04     
//04      print(data[i] << ",")                                                      05, 04 
//05      print(])                                                                   06
//06      exit 
void PrintArray(int data[],int size){
cout <<"[" ;
    for(int i=0 ; i < size; i++){
   cout << data[i] <<"," ;
   }
   cout  << "]" << ""; 
}

//Name: RandomNumber()
//Parameters: int int int int[]
//Return: bool 
//Flowchart:
//Label   Task                                                                      Goto
//01      (Start: max, min ,size , data[])                                          02
//02      [int new_max, new_min]                                                    03
//03      <max>min>                                                                 04,06
//04      [new_max=max]                                                             05
//05      [new_min=min]                                                             06
//06      [new_max=min]                                                             07
//07      [new_min=max]                                                             08
//08      srand(time(0))                                                            09
//09      <int i = 0; i < size;i +=1>                                               10
//10      [data[i]= rand()  % (new_max-new_min+1) + new_min]                        09,11
//11      exit
bool RandomNumber(int max, int min, int size, int data[])
{
  int new_max, new_min;
  if(max>min){
    new_max = max;
    new_min = min;
  }
  else{
    new_max = min;
    new_min = max;
  }
  
srand(time(0));
for(int i = 0; i < size;i +=1){
  data[i]= rand()  % (new_max-new_min+1) + new_min;
 }  
}

//Name: sort()
//Parameters: int int[]
//Return: void 
//Flowchart:
//Label   Task                                                                      Goto
//01      (Start: size , data[])                                                     02
//02      [int temp, cont_i, count_u]                                                03
//03      <cont_i=0;cont_i<size;cont_i++>                                            04
//04      <count_u=cont_i+1;count_u<size;count_u++>                                  05
//05      <data[cont_i]<data[count_u]>                                               06,09
//06      [temp= data[cont_i]]                                                       07
//07      [data[cont_i]= data[count_u]]                                              08
//08      [data[count_u]=temp]                                                       09,03 
//09      exit                                                                  
void sort(int data[] , int size){
  int temp, cont_i ,count_u;
  for(cont_i=0;cont_i<size;cont_i++)
	{		
		for(count_u=cont_i+1;count_u<size;count_u++)
		{
			if(data[cont_i]<data[count_u])
			{
				temp=data[cont_i];
				data[cont_i]=data[count_u];
				data[count_u]=temp;}}
}
}

#endif 