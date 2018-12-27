//NAME:Zanif Sandy
#include <iostream>
using namespace std;

int main() {
 // Arr = [3][3][5][33][22][3][50][2][3][40][3][3][43][6][3]
  //    Arr[0]--> FALSE
   //    Arr[1]--> FALSE
    //    Arr[2]--> FALSE
     //    Arr[3]--> FALSE
      //    Arr[4]--> TRUE                   SUM += 22
       //    Arr[5]--> FALSE
        //    Arr[6]--> TRUE                 SUM += 72
         //    Arr[7]--> TRUE                SUM += 74
          //    Arr[8]--> FALSE
           //    Arr[9]--> FALSE 
            //    Arr[10]--> TRUE            SUM += 114
             //    Arr[11]--> FALSE
              //    Arr[12]--> FALSE
                //    Arr[13]--> TRUE        SUM += 120
                 //    Arr[14]--> FALSE
 int Arr[]= {3,3,5,33,22,3,50,2,3,40,3,3,43,6,3};
  int sum = 0;
  for(int i = 0; i <= 15 ; i++){
    if (Arr[i] % 2 == 0){
      sum += Arr[i];
    }

  }
  cout << sum;
}
