
/****************************************************************************************
//Name    : Zanif Sandy
//Creation: 29.03.18
//Version : v1
//Description: Extra credit.
**************************************************************************************************/

#include <iostream>
#include <string>
#include "contact.h"
#include "contact.cc"
using namespace std;



int main() {

  contact person;
  string option;

  cout << "Choose options from the menu using 1,2,3 - 8  Numbers, to fill out your contact display card";


  while(option != "8"){

    cout << "\n";
    cout << "\n1.First Name\n" << "2.Surname\n" << "3.Email\n" << "4.phone number\n" << "5.occupation\n" << "6.Age\n" << "7.Display Contact card\n" << "8.Exit\n";


  cout << "\nChoose number option:";
  cin >> option;

  if(option == "1"){
    string inputName;
    cout << "Enter First Name:";
    cin >> inputName;
    person.setFirstName(inputName);

  }
  else if(option == "2"){
    string inputsurName;
    cout << "Enter Surname:";
    cin >> inputsurName;
    person.setSurname(inputsurName);

  }else if(option == "3"){
    string inputEmail;
    cout << "Enter Email:";
    cin >> inputEmail;
    person.setEmail(inputEmail);

  }else if(option == "4"){
    string inputphone;
    cout << "Phone Number:";
    cin >> inputphone;
    person.setPhoneNumber(inputphone);

  }else if(option == "5"){
    string inputoccu;
    cout << "Enter Occupation:";
    cin >> inputoccu;
    person.setOccupation(inputoccu);

  }else if(option == "6"){
    int inputAge;
    cout << "Enter Age";
    cin >> inputAge;
    person.setAge(inputAge);

  }
   else if(option == "7"){
    person.phoneBook();

  }

}
return 0;

}
