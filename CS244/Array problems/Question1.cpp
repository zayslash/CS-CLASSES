//NAME:Zanif Sandy
#include <iostream>
using namespace std;

// v = [63][73][55][63][72][83][50][62][83][70]

 //    v[0]-->
  //    v[1]-->
   //    v[2]-->
    //    v[3]-->
     //    v[4]-->
      //    v[5]-->
       //    v[6]-->
        //    v[7]-->
         //    v[8]-->
          //    v[9]-->          SUM +=

      // Average = SUM / 10;

  string GPA(double v[]){

  double Average;
  double sum;

  for(int i = 0; i <= 10 ; i++){
      sum += v[i];

  }
       Average = sum / 10;
  cout << Average;
    if (Average <=100 && Average >= 90){
      return " A";
    }
    else if(Average <= 90 && Average >=80){
      return " B";
    }else if (Average <= 80 && Average >= 70 ){
      return " C";
    }else if (Average <= 70 && Average >= 60 ){
      return " D";
    }else if (Average <= 60 && Average >= 0 ){
      return " F";
    }

  }




int main() {


  double semester1[] ={63,73,55,63,72,83,50,62,83,70};
  double semester2[] ={44,66,77,88,99,99,88,99,96,96};


  cout << " Semester 1 Average is: " << GPA(semester1) << "\n";

  cout << " Semester 2 Average is: " << GPA(semester2);



}
