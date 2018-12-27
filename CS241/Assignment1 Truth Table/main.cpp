
/*********************************************************************************************************************************************************************************
//Name    : Zanif Sandy
//Creation: 08.02.18
//Version : v1
//Description: The functions conjunction(), disjunction(), negation(), implication(), and equivalence() should return the truth value of the conjunction, disjunction, negation, implication and equivalence connectives respectively. The functions truthTable() return a formatted string of a truth table that consists of all the connectives like the one on the formula sheet. Use the symbols &, |, !, > and = to represent conjunction, disjunction, negation, implication and equivalence in the tables respectively.
**********************************************************************************************************************************************************************************************/
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

bool conjunction(bool,bool);
bool disjunction(bool,bool);
bool negation(bool);
bool implication(bool,bool);
bool equivalence(bool,bool);

char btoc(bool value)
{
return (value)?('T'):('F');
}

string truthTable(){
  cout<<"-----------------------------------------------------\n";
  cout<<" | A | B | A & B | A | B | A > B | A = B | !A | !B | \n";
 
  cout<<"-----------------------------------------------------\n";
  cout<<" | "<<btoc(true)<<" | "<<btoc(true)<<" |   "<< btoc(conjunction(true,true))<<"   |   "<<btoc(disjunction(true,true))<<"   |   "<<btoc(implication(true,true))<<"   |   "<<btoc(equivalence(true,true))<<"   |  "<<btoc(negation(true))<<" |  "<<btoc(negation(true)) << " |  " <<"\n";
  cout<<"-----------------------------------------------------\n";
  cout<<" | "<<btoc(true)<<" | "<<btoc(false)<<" |   "<< btoc(conjunction(true,false))<<"   |   "<<btoc(disjunction(true,false))<<"   |   "<<btoc(implication(true,false))<<"   |   "<<btoc(equivalence(true,false))<<"   |  "<<"  |  "<<btoc(negation(false)) << " |  " <<"\n";
  cout<<"-----------------------------------------------------\n";
  cout<<" | "<<btoc(false)<<" | "<<btoc(true)<<" |   "<< btoc(conjunction(false,true))<<"   |   "<<btoc(disjunction(false,true))<<"   |   "<<btoc(implication(false,true))<<"   |   "<<btoc(equivalence(false,true))<<"   |  "<<btoc(negation(false))<< " |  "<< "  |  "<<"\n";
  cout<<"-----------------------------------------------------\n";
  cout<<" | "<<btoc(false)<<" | "<<btoc(false)<<" |   "<< btoc(conjunction(false,false))<<"   |   "<<btoc(disjunction(false,false))<<"   |   "<<btoc(implication(false,false))<<"   |   "<<btoc(equivalence(false,false))<<"   |  "<< "  |  "<< "  |  "<<"\n";
  cout<<"-----------------------------------------------------\n";
 
}

int main()
{
cout << truthTable() << '\n';
return 0;
}



bool conjunction(bool first_connective, bool second_connective) {
	return (first_connective && second_connective);
}
bool disjunction(bool first_connective, bool second_connective) {
	return (first_connective || second_connective);
}
bool negation(bool connective){
  return (!connective);
}
bool equivalence(bool first_connective, bool second_connective){
  return (first_connective == second_connective);
}

//First solution
/*bool implication(bool first_connective, bool second_connective){
  return (disjunction(conjunction(equivalence(first_connective,true),equivalence(true,second_connective)) , disjunction(conjunction(equivalence(first_connective,false), equivalence(true,second_connective)) , conjunction(conjunction(equivalence(first_connective,false) ,equivalence(false,second_connective)) , (negation(conjunction(equivalence(first_connective,true),equivalence(false,second_connective))))))) );
}*/

//second solution
bool implication(bool first_connective, bool second_connective){
return (disjunction(negation(first_connective) , second_connective));
}

