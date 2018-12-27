#include <iostream>
#include "bag.h"
//#include "bag.cc"

int main() {

bag <int> b1;

 b1.insert(5);
 b1.insert(12);
 b1.insert(7);
 b1.insert(44);

 b1.show();

 b1.remove_index(1);
 b1.show();

 std::cout << b1.in_bag(12) << "\n";

 b1.remove_target(7);
 b1.show();

 b1.insert(5);
 std::cout << b1.occurencces(5);

return 0 ;

}