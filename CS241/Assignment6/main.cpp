#include <iostream>
#include <string>
using namespace std;


void Add2(int* A,int* B,int* R);
void Print(int* A);



int main()
{
int A[4], B[4], C[4];
cout << "Enter the elements of matrix A\n";
for(int i = 0;i < 4;i += 1)
{
cin >> A[i];
}
cout << "Enter the elements of matrix B\n";
for(int i = 0;i < 4;i += 1)
{
cin >> B[i];
}
cout << "The product of\n";
Print(A);
cout << "and\n";
Print(B);
cout << "is\n";
Add2(A,B,C);
Print(C);

  return 0;
}



void Add2(int* A,int* B,int* R) {
  int i = 0;
  while(i<4){
          R[i]= A[i] + B[i];
          i++;
    }
}

void Print(int* A){
  int i = 0;
  while(i<4){
    int u = i;
    while(u< 2+i && u<4){
      cout<< A[u] << "\t";
      u++;
    }
     cout<< endl;


     i+=2;
}
}
