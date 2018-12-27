//Name    : Zanif Sandy
//Creation: 12.02.18
//Version : v1

#include <iostream>
#include <string>
#include <time.h>

using namespace std;

void randomSeq(char v[],int n){

   char letters[3] = {'Y','O','R'};
    srand ( time(NULL) );
    for (int i = 0; i < n; i++)
    {
        int j = rand() % 3;
        v[i] = letters[j] ;
    }
}
void printArray(char v[], int n){
    cout <<"( " ;
    for(int i=0 ; i < n; i++)
    {
        cout << v[i] <<" "   ;
    }
        cout  << ")" << " "; 
}

void searchSeq(char v[], int n){
   int temp = 1;
 for( int i=0 , j =1, k = 2 ,r =3 ,z = 4 ,t=5 ; i < n; i++, j++, k++ ,r++ ,z++, t++){
  if(v[i] == v[j] && v[j] == v[k] ){
     while(v[k] == v[r] && v[k] == v[z] && v[k]==v[t]){
      v[r] = 'x';
      v[z] = 'x';
      v[t] = 'x';
    }
     if(v[k] == v[r] && v[k] == v[z]  ){
        temp = 1;
        v[r] = 'x';
        v[z] = 'x'; 
     }
      if(v[k] == v[r]){
      v[r] = 'x';
      
    }
    v[i]  ='x';
    v[j]  ='x';
    v[k]  ='x';
  }
 }
}


int searchIndex(char v[], int n){
  int count = 0;
  for( int i=0 , j =1, k = 2 ,r =3 ,z = 4 ,t=5 ; i < n; i++, j++, k++ ,r++ ,z++, t++){
  if((v[i] == v[j] && v[j] == v[k]) == 'O' ){
    while((v[k] == v[r] && v[k] == v[z] && v[k]==v[t])== 'O'){
     count += 3;
    }
     if((v[k] == v[r] && v[k] == v[z]  )== 'O'){
       count += 2;
     }
      if((v[k] == v[r]) ==  'O'){
      count +=1;
      
    }
    count += 3;
   }
   
  }
  cout << count;
}

int main() {
  
char array[25]; 
randomSeq(array,25);
printArray(array,25);
searchIndex(array,25);
searchSeq(array,25);
cout << "\n";
cout << "\n";
printArray(array,25);
cout << "\n";
cout << "\n";
printArray(array,25);

}