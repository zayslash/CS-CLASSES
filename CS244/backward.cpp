//Name: Zanif Sandy 
//Version: v2
//Description: 



#include <iostream>
#include <string>
using namespace std;

int main() {

int arr[7] = {1,2,3,4,5,6,7};
int n = 6;
int arr2[n];

cout << "Enter N: ";
cin >> n;
for(int i = 0 ,r = n-i-1 ; r >= 0 ; i++ , r-- ){
  arr2[i]  =  arr[r];
} 

for(int i = 0 ,r = n-i-1 ; r >= 0 ; i++ , r-- ){
 
  arr[i]  =  arr2[i];
  cout << arr[i] << ",";

} 




}