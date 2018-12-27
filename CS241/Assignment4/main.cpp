#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int gcd (int n1,  int n2) {
    int tmp;
    while (n2 != 0) {
        tmp = n1;
        n1 = n2;
        n2 = tmp % n2;
    }
    return n1;
}


int Phi(int);
int main()
{

fstream out;
out.open("data.dat",fstream::out);
for(int i = 1;i <= 100;i += 1)
{
out << setw(3) << setfill('0');
out << "Phi(" << i << ") = " << Phi(i) << "\n";
}


out.close();




return 0 ;
}

int Phi(int n){
  int Keepcheck =0;
  
  if (n < 0){
    return 0;
  }
  bool prime;
  for(int i = 1; i < n; i++){
    if(gcd(n,i) > 1){
      prime = false;
    }
    else{
      prime = true;
    }
  
  if (prime == true ){
    Keepcheck++;
    
  }
  
  }
  
  return Keepcheck;
  // cout << "(" << Keepcheck << ")";
  // cout << "\n";
}





