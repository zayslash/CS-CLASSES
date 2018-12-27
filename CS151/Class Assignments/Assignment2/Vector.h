/*********************************************************************************************************************************************************************************
//Name    : Zanif Sandy
//Creation: 10.06.17
//Version : v1
Description: Vector headder file
**********************************************************************************************************************************************************************************************/


#define VECTORS_H
#include <cmath>
#include <iomanip>


// Name: PI
//Return: 3.14159265
//Parameters: None
//FlowChart
//Label    Task                                 Goto
//01       (start)                              02
//02       (exit: 3.14159265)
float PI(){
  return 3.14159265;
}




// Name: toDegree
//Description: Convert a radian value to Degrees value
//Return: float;
//Parameters: float rad
//FlowChart:
//Label     Task                                Goto
//01        (start: deg)                        02
//02        (exit: rad * 180 / PI())

float toDegree(float rad){
   return (rad * 180 / PI());
}



// Name: toRadian
//Description: Convert a Degree value to Radian value
//Return: float
//Parameters: float deg
//FlowChart:
//Label     Task                                Goto
//01        (start: deg)                        02
//02        (exit: deg * PI() / 180)
float toRadian(float deg){
  return deg * PI() / 180;

}



// Name: toRectangular
//Description: Appy the values of magnitude to x and angle to x FROM Polar coordinates TO rectangular
//Return: VOID
//Parameters: float magnitude, float angle, float & x ,float & y
//FlowChart
//Label     Task                                            Goto
//01        (start: magnitude, angle, x, y)                  02
//02        [x = magnitude * cos(toRadian(angle)) ]          03
//03        [y = magnitude * sin(toRadian(angle))]           04
//04        (exit)
void toRectangular(float magnitude, float angle, float & x ,float & y){

  x = magnitude * cos(toRadian(angle));
  y = magnitude * sin(toRadian(angle));
 //test -------------------------------------------------
  /*cout << x << "\n";
  cout << y ;*/
}


// Name: toPolar
//Description: Appy the values of magnitude to x and angle to x FROM rectangular coordinates TO Polar
//Return: VOID
//Parameters: float magnitude, float angle, float & x ,float & y
//FlowChart
//Name: toPolar
//Parameters: float &magnitude, float &angle, float x, float y
//Return: none
//FlowChart
//Label       Task                                  Goto
//01          (start: x, y, magnitude, angle)       02
//02          [magnitude = sqrt((x*x)+(y*y))]       03
//03          [angle = toDegree(atan2(y,x))]        04
//04          (exit)
void toPolar(float x , float y ,float & magnitude , float & angle){
  magnitude = sqrt((x*x)+(y*y));
  angle = toDegree(atan2(y,x)) ;

  //test-------------------------------------------------
 // cout << magnitude << "\n";
 // cout << angle;
}






// Name: add
//Description: calculates the sum of two Vectors
//Return: 0
//Parameters: float mag1,float ang1,float mag2, float ang2, float & mag3, float & ang3
//FlowChart:
//Name: add
//Parameters: float mag1, float ang1, float mag2, float ang2, float &mag3, float &ang3
//Return: float
//Label       Task                                            Goto
//01          (start: mag1, ang1, mag2, ang2, mag3, float)     02
//02          [float xr1,yr1,xr2,yr2]                          03
//03          [toRectangular(mag1, ang1, xr1, yr1)]            04
//04          [toRectangular(mag2, ang2, xr2, yr2)]            05
//05          [mag3=xr1+yr1]                                   06
//06          [ang3=xr2+yr2]                                   07
//07          [toPolar(mag3, ang3, mag3, ang3)]                08
//08          (exit: 0.0)
float add(float mag1,float ang1,float mag2, float ang2, float & mag3, float & ang3){

 /*
         Alternative Solution
  mag3 = sqrt(mag1*mag1 + mag2*mag2);
  ang3 = toDegree(atan(mag1/ang1) + atan(mag2/ang2)) ;
  */
  float xr1,yr1,xr2,yr2;
  toRectangular(mag1,ang1,xr1,yr1);
  toRectangular(mag2,ang2,xr2,yr2);
  mag3=xr1+yr1;
  ang3=xr2+yr2;
  toPolar(mag3,ang3,mag3,ang3);
  return 0;
}



// Name: subtract
//Description: calculates the difference of two Vectors
//Return: 0
//Parameters: float mag1,float ang1,float mag2, float ang2, float & mag3, float & ang3
//FlowChart:
//Name: subtract
//Parameters: float mag1, float ang1, float mag2, float ang2, float &mag3, float &ang3
//Return: float
//Label       Task                                            Goto
//01          (start: mag1, ang1, mag2, ang2, mag3, float)     02
//02          [float xr1,yr1,xr2,yr2]                          03
//03          [toRectangular(mag1, ang1, xr1, yr1)]            04
//04          [toRectangular(mag2, ang2, xr2, yr2)]            05
//05          [mag3=xr2-xr1]                                   06
//06          [ang3=yr2-yrr]                                   07
//07          [toPolar(mag3, ang3, mag3, ang3)]                08
//08          (exit: 0.0)
float subtract(float mag1,float ang1,float mag2, float ang2, float & mag3, float & ang3){

  float xr1,yr1,xr2,yr2;
  toRectangular(mag1,ang1,xr1,yr1);
  toRectangular(mag2,ang2,xr2,yr2);
  mag3=xr2-xr1;
  ang3=yr2-yr1;
  toPolar(mag3,ang3,mag3,ang3);
  return 0;
}
