//Name    : Zanif Sandy
//Creation: 10.25.17

#include<iostream>
#include<string>
#include<cmath>

#ifndef ZMAX_H
#define ZMAX_H

//Name: swapbyVal()
//Parameters: float &, float &
//Return: float
//Flowchart:
//Label   Task                                                                     Goto
//01      (start:x,y)                                                               02
//02      [float tempHold = x]                                                      03
//03      [x=y]                                                                     04
//04      [y=tempHold]                                                              05
//05      (exit)
void swapbyVal(float & x, float & y)
{
  float tempHold=x;
  x=y;
  y=tempHold;
}




//Name: maximum()
//Parameters: float, float &, float &, float &, float &
//Return: float
//Flowchart:
//Label   Task                                                                     Goto
//01      (start: x,y,z,w,v)                                                        02
//02      <(x>=y)&&(x>=z)&&(x>=w)&&(x>=v)>                                          03,10
//03      return x;                                                                 04
//04      <(y>=x)&&(y>=z)&&(y>=w)&&(y>=v)>                                          05,10
//05      return y;                                                                 06
//06      <(z>=x)&&(z>=z)&&(z>=w)&&(z>=v)>                                          07,10
//07      return z;                                                                 08
//08      <(w>=x)&&(w>=z)&&(w>=w)&&(w>=v)>                                          09,10                                
//09      return w;                                                                 10
//10      return v;                                                                 11
//11      (exit)

float maximum(float& x,float& y, float& z, float& w, float& v)
{
  if((x>=y)&&(x>=z)&&(x>=w)&&(x>=v))
  {
    return x;
  }
  else if ((y>=x)&&(y>=z)&&(y>=w)&&(y>=v))
  {
    return y;
  }
  else if ((z>=x)&&(z>=z)&&(z>=w)&&(z>=v))
  {
    return z;
  }
  else if ((w>=x)&&(w>=z)&&(w>=w)&&(w>=v))
  {
    return w;
  }
  else
  {
    return v;
  }
}




//Name: minimum()
//Parameters: float &, float &, float &, float &, float &
//Return: float
//Flowchart:
//Label   Task                                                                     Goto
//01      (start: x,y,z,w,v)                                                        02
//02      <(x<=y)&&(x<=z)&&(x<=w)&&(x<=v)>                                          03,10
//03      return x;                                                                 04
//04      <(y<=x)&&(y<=z)&&(y<=w)&&(y<=v)>                                          05,10
//05      return y;                                                                 06
//06      <(z<=x)&&(z<=z)&&(z<=w)&&(z<=v)>                                          07,10
//07      return z;                                                                 08
//08      <(w<=x)&&(w<=z)&&(w<=w)&&(w<=v)>                                          09,10                                
//09      return w;                                                                 10
//10      return v;                                                                 11
//11      (exit)

float minimum(float& x,float& y, float& z, float& w, float& v)
{
  if((x<=y)&&(x<=z)&&(x<=w)&&(x<=v))
  {
    return x;
  }
  else if ((y<=x)&&(y<=z)&&(y<=w)&&(y<=v))
  {
    return y;
  }
  else if ((z<=x)&&(z<=z)&&(z<=w)&&(z<=v))
  {
    return z;
  }
  else if ((w<=x)&&(w<=z)&&(w<=w)&&(w<=v))
  {
    return w;
  }
  else
  {
    return v;
  }
}


//Name: median()
//Parameters: float & ,float & , float & , float & , float & 
//Flowchart:
//Label   Task                                                                     Goto
//01      (start: x,y,z,w,v)                                                       02
//02      <x > y>                                                                  03,22
//03      [swapbyVal(x,y)]                                                         04
//04      <x > z>                                                                  05,22
//05      [swapbyVal(x,z)]                                                         06
//06      <x > w>                                                                  07,22
//07      [swapbyVal(x,w)]                                                         08
//08      <x > v>                                                                  09,22
//09      [swapbyVal(x,v)]                                                         10
//10      <y > z>                                                                  11,22
//11      [swapbyVal(y,z)]                                                         12
//12      <y > w>                                                                  13,22
//13      [swapbyVal(y,w)]                                                         14
//14      <y > v>                                                                  15,22
//15      [swapbyVal(y,v)]                                                         16
//16      <z > w>                                                                  17,22
//17      [swapbyVal(z,w)]                                                         18
//18      <z > v>                                                                  19,22
//19      [swapbyVal(z,v)]                                                         20
//20      <w > v>                                                                  21,22
//21      [swapbyVal(w,v)]                                                         22
//22      [return z]
//23      exit
float median(float& x,float& y, float& z, float& w, float& v)
{
  if (x > y)
  {
  swapbyVal(x,y);
  }
  if (x > z)
  {
  swapbyVal(x,z);
  }
  if (x > w)
  {
  swapbyVal(x,w);
 }
 if (x > v)
  {
  swapbyVal(x,v);
  }
 if (y > z)
  {
  swapbyVal(y,z);
  }
if (y > w)
  {
  swapbyVal(y,w);
  }
  if (y > v)
  {
  swapbyVal(y,v);
  }
 if (z > w)
  {
 swapbyVal(z,w);
  }
if (z > v)
  {
 swapbyVal(z,v);
  }
  if (w > v)
  {
  swapbyVal(w,v);
  }
return z;
}





//Name: thirdQuartile()
//Parameters: float & ,float & , float & , float & , float & 
//Return: float
//Flowchart:
//Label   Task                                                                     Goto
//01      (start: x,y,z,w,v)                                                        02
//02      [median(x,y,z,w,v)]                                                       03
//03      [return w]                                                                04
//04      (exit)

float thirdQuartile(float& x,float& y, float& z, float& w, float& v)
{
 median(x,y,z,w,v);
 return w;

}



//Name: firstQuartile()
//Parameters: float & ,float & , float & , float & , float & 
//Return: float
//Flowchart:
//Label   Task                                                                     Goto
//01      (start: x,y,z,w,v)                                                        02
//02      [median(x,y,z,w,v)]                                                       03
//03      [return y]                                                                04
//04      (exit)
float firstQuartile(float& x,float& y, float& z, float& w, float& v)
{
  median(x,y,z,w,v);
  return y;
}

#endif
