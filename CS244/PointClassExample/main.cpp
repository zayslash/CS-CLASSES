#include <iostream>
//#include <stdlib>
#include "point.h"
#include "point.cc"
using namespace std;


  int main()
{
   point p1;
   point p2;

    p1.initialize(-1.0,  0.8);
    cout << p1.get_x( ) << p1.get_y() << endl;
    p2.initialize(p1.get_x(),  p1.get_y());
    cout << p2.get_x( ) << p2.get_y() << endl;
    p2.shift(1.3, -1.4);
    cout << p2.get_x( ) << p2.get_y() << endl;


 cout << "\n";
     p2.reset_y(2.5);
     cout << p2.get_x( ) << p2.get_y() << endl;

    p2.reset_x(3.8);
    cout << p2.get_x( ) << p2.get_y() << endl;

    p2.set_x_to_y();
    cout << p2.get_x( ) << p2.get_y() << endl;

    p2.reset_y(4.8);
    cout << p2.get_x( ) << p2.get_y() << endl;


    p2.set_y_to_x();
    cout << p2.get_x( ) << p2.get_y() << endl;


  return 0;
}
