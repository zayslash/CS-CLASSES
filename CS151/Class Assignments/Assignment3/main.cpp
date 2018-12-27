
/*********************************************************************************************************************************************************************************
//Name    : Zanif Sandy
//Creation: 10.25.17
//Version : v1
//Description: maximum() returns the maximum of the parameters, minimum() returns the minimum of the parameters,
average() returns the average of the parameters, and median() returns the median of the parameters. In the
main function,
**********************************************************************************************************************************************************************************************/


#include "zmax.h"
#include<iostream>
#include <iomanip>
using namespace std;


int main()
{
  float x,y,z,w,v;

cout<< "Enter 5 numbers:" ;
cin >> x >> y >> z >> w >> v;

cout << endl;
cout << endl;

cout << fixed << setprecision(1) << "The Maximum is: "<<maximum(x,y,z,w,v)<<endl;
cout << fixed << setprecision(1) << "The Third Quartile is: " <<thirdQuartile(x,y,z,w,v)<<endl;
cout << fixed << setprecision(1) << "The Median is:"<<median(x,y,z,w,v)<<endl;
cout << fixed << setprecision(1) << "The First Quartile is: "<<firstQuartile(x,y,z,v,w)<<endl;
cout << fixed << setprecision(1) << "The Minimum is: "<<minimum(x,y,z,w,v);

return 0;


}

/***********************************************************************************************************************************************************************************
//Flowchart:
//Label          Task                                                                                   Goto
//01             (start)                                                                                  02
//02             [float x,y,z,w,v]                                                                        03
//03             print(Enter 5 numbers:)                                                                  04
//04             prompt(x,y,z,w,v)                                                                        05
//05             print(The Maximum is: << maximum(x,y,z,w,v) << endl)                                     06
//06             print(The Third Quartile is: << thirdQuartile(x,y,z,w,v) << endl)                        07                   
//07             print(The Median is: << median(x,y,z,w,v) << endl)                                       08
//08             print(The First Quartile is: << firstQuartile(x,y,z,w,v) << endl)                        09
//09             print(The Minimum is: << minimum(x,y,z,w,v) << endl)                                     10
//10             exit:  0
*********************************************************************************************************************************************************************************/




