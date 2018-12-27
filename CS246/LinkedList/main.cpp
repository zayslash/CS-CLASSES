#include <iostream>
#include "llist.h"
#include "list.cc"

int main() {

List list;

for(int i=1; i<=15; i++)
  list.insertTail(i);

std::cout << "\nList: " ;
list.show();

std::cout << "\nReversed: " ;

list.reverse();
list.show();

std::cout << "\nNumbers of Multiples of in list " << list.multiplesOf(3) << "\n";


}
