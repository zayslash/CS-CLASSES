//NAME:Zanif Sandy
#include <iostream>
using namespace std;



int main() {
  // Arr = [63][73][55][63][72][83][50][62][83][70][43][73][93][10]

                            //Arr[i] > 70
  //    Arr[0]--> FALSE
   //    Arr[1]--> TRUE                     print Arr[1]
    //    Arr[2]--> FALSE
     //    Arr[3]--> FALSE
      //    Arr[4]--> TRUE                  print Arr[4]
       //    Arr[5]--> TRUE                 print Arr[5]
        //    Arr[6]--> FALSE
         //    Arr[7]--> TRUE                print Arr[7]
          //    Arr[8]--> FALSE
           //    Arr[9]--> FALSE
            //    Arr[10]--> FALSE
             //    Arr[11]--> TRUE          print Arr[11]
              //    Arr[12]--> TRUE          print Arr[12]
                //    Arr[13]--> FALSE

  int Arr[]= {63,73,55,63,72,83,50,62,83,70,43,73,93,10};

  for(int i = 0; i <= 14 ; i++){
    if (Arr[i] > 70){
      cout << Arr[i] << " ";
    }

  }




}
