/*********************************************************************************************************************************************************************************
//Name    : Zanif Sandy
//Creation: 08.03.18
//Version : v1
//Description: 4.

**********************************************************************************************************************************************************************************************/


#include <iostream>
#include <fstream>
#include <string>
using namespace std;
bool IsSet(string filename);

void SwapIfGreater(int v[],int i, int j){
  int p = 0;
  if (v[i]>v[j]){
    
    p = v[i];
    v[i]=v[j];
    v[j]= p;
  }
}

void  ConsecSwapIfGreater(int v[],int i, int n){
  
   int j = i+1;

  if (0<=i && i < n){
   SwapIfGreater(v,i,j);
  }
}  
  
 void SwapUntil(int v[], int i,int n){
  
  for(int c= i; c < n ;c+=1){
 
 ConsecSwapIfGreater(v,c,n);

}
 
}

void BubbleSort(int v[],int n){
 int y = 0;
  for(int i = 0; i < n; i+=1){
   
    SwapUntil(v,y,n);
    
  }
  
}



int main()
{
string data[2] = {"data1.txt","data2.txt"};
for(int i = 0;i < 2; i += 1)
{
cout << data[i] << (IsSet(data[i])?(" does"):(" does not")) << " represent a set\n";
}
return 0;
}



bool IsSet(string filename){
 
  ifstream file;
  
  file.open(filename);
  
  int n=0;
  int SIZE = 353;
  int a[SIZE];
  
 if (file.is_open()){
  
   while (file >> a[n] )  //getline (file,line) )
   {
     n++;
  
   }
   
   BubbleSort(a,SIZE);
   
   for(int i= -0; i < SIZE; i++){
     int j = i+1;
     
     if(0<=i && i < SIZE){
        
         if(a[i] == a[j]){
          
           return false;
         }
  }
   }
    return true;
   
   file.close();
   
 }
  
  
  
  
  
  
}