/****************************************************************************************
//Name    : Zanif Sandy
//Creation: 22.03.18
//Version : v1
//Description: MidTerm Project
**************************************************************************************************/

#ifndef ZTRUTH_H
#define ZTRUTH_H

#include <string>
#include <fstream>

using namespace std;


/*Declaration of Global 2D Array variable Size 10 X 16, where each row represents
each row represents the respective elements of the table. A,B,C,D,R,0,1,2,3,4
*/
bool table_tree[10][16] = {{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0},{1,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0}, {1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0}, {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0}, {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};

//Checks a bool value and converts it into a Char T or F;
char btoc(bool value)
{
return (value)?('T'):('F');
}

//bool Function Definition to do conjunction of two paremeters
bool conjunction(bool first_connective, bool second_connective) {
	return (first_connective && second_connective);
}

//bool Function Definition to do disjunction of two paremeters
bool disjunction(bool first_connective, bool second_connective) {
	return (first_connective || second_connective);
}

//bool Function Definition to do negation of a single paremeter
bool negation(bool connective){
  return (!connective);
}

//bool Function Definition to do equivalence of two paremeters
bool equivalence(bool first_connective, bool second_connective){
  return (first_connective == second_connective);
}

//bool Function Definition to do implication of two paremeters
bool implication(bool first_connective, bool second_connective){
return (disjunction(negation(first_connective) , second_connective));
}


/*This functions prints out the values of table locatioin R where there is a negation
Print to the console in format --> [T T T T T T T T T T T T]. Function also logs to
a text file "file.txt" the outputs of table location R in form
!A
[T T T T T T T T T T T T].
*/
void R_print(string negation){
  cout << "\n";
  cout << "\n";
  cout << "[";

 for (int i = 0 ; i < 16 ; i++){
    cout << btoc(table_tree[4][i]) << " ";
  }
  cout << "]\n";
  cout << "\n";

ofstream logfile;

logfile.open("file.txt", fstream::out | fstream::app);
    if (logfile.is_open()){
      logfile << "\n";
      logfile << "!" << negation ;
      logfile << "\n";

      logfile << "[";
      for (int i = 0 ; i < 16 ; i++){
      logfile << btoc(table_tree[4][i]) << " ";
      }
      logfile << "]\n";
      logfile << "\n";
    }
  logfile.close();
}



/*
Overloading Function of R_print(negation);

This functions prints out the values of table location R where the user Choice is either
Conjunction,Disjunction,Implication or Equivalence;

Print to the console in format --> [T T T T T T T T T T T T]. Function also logs to
a text file "file.txt" the outputs of table location R in form

A choice B
[T T T T T T T T T T T T].
*/
void R_print(string choice, string first_choice, string second_choice ){
   string operatorPlace;

  if(choice == "2" || choice == "Conjunction"){
    operatorPlace = "&";
  }else if (choice == "3" || choice == "Disjunction"){
    operatorPlace = "|";
  }else if (choice == "4" || choice == "Implication"){
    operatorPlace = ">";
  }else if (choice == "5" || choice == "Equivalence"){
    operatorPlace = "=";
  }


  cout << "\n";
  cout << "\n";
  cout << "[";

 for (int i = 0 ; i < 16 ; i++){
    cout << btoc(table_tree[4][i]) << " ";
  }
  cout << "]\n";
  cout << "\n";


ofstream logfile;

logfile.open("file.txt", fstream::out | fstream::app);
    if (logfile.is_open()){
      logfile << "\n";
      logfile << first_choice;
      logfile << operatorPlace << second_choice ;
      logfile << "\n";

      logfile << "[";
      for (int i = 0 ; i < 16 ; i++){
      logfile << btoc(table_tree[4][i]) << " ";
      }
      logfile << "]\n";
      logfile << "\n";
    }
  logfile.close();

}

/*This functions prints out the values of table locatioin R where there the User selects a
memory location 2,3 or 4,

Print to the console in format --> [T T T T T T T T T T T T]. Function also logs to
a text file "file.txt" the outputs of table location R in form
@A
[T T T T T T T T T T T T].
*/
void memoryFilePrint(string memLocation){
  cout << "\n";
  cout << "\n";
  cout << "[";

 for (int i = 0 ; i < 16 ; i++){
    cout << btoc(table_tree[4][i]) << " ";
  }
  cout << "]\n";
  cout << "\n";


ofstream logfile;

logfile.open("file.txt", fstream::out | fstream::app);
    if (logfile.is_open()){
      logfile << "\n";
      logfile << "@" << memLocation ;
      logfile << "\n";

      logfile << "[";
      for (int i = 0 ; i < 16 ; i++){
      logfile << btoc(table_tree[4][i]) << " ";
      }
      logfile << "]\n";
      logfile << "\n";
    }
  logfile.close();
}


//Prints out all the elements in the 2D Array in order with Headings;
void tablePrint(){

  string Alfa[]={"A","B","C","D","R","0","1","2","3","4"};
  cout << "\n";
  for(int i=0; i<10; i++)    //This loops on the rows.
	{
	  cout << Alfa[i] << "|";
		for(int j=0; j < 16; j++) //This loops on the columns
		{
			cout << btoc(table_tree[i][j])  << "|";
		}
		cout << endl;
	}

}


//returns an integer value if User Choose A Row in the 2D array.
int letterChoiceLog(string choice){
   if(choice == "A"){
      return 0;
    }else if (choice == "B"){
      return  1;
    }
      else if (choice == "C"){
       return  2;
     }   else if (choice == "D"){
         return  3;
    }   else if (choice == "0"){
            return  5;
    }      else if (choice == "1"){
              return  6;
    }        else if (choice == "2"){
                return  7;
    }
               else if (choice == "3"){
                return  8;
    }
                else if (choice == "4"){
                return  9;
    }


}



/*
Recursive Function that Displays a Menu

1.Negation
2.Conjunction
3.Disjunction
4.Implication
5.Equivalence
6.Store
7.Quit

Then promps user to enter option using numerical or case sensitive corresponding menu Choice

if choice is Negation it prompts the user to enter a letter Choice location from the Table
the give the values of operation to data location R then R_prints(negation)

if choice is Conjunction, Disjunction,Implication or Equivalence the User is prompt to enter
two letter choices from the table, gives the values of operation to data location R then R_prints(negation)

if choice is Store the User is prompt to enter the location they would like to store the
value of R 2,3 or 4. then tablePrint();

if choice is Quit, the program terminates

else if the User enters an incorect value then the program would loop again.

*/
void truthTable(){
 string choice;

 cout << "\n1.Negation\n" << "2.Conjunction\n" << "3.Disjunction\n" << "4.Implication\n" << "5.Equivalence\n" << "6.Store\n" << "7.Quit\n" << "\n";

  cout << "Choice: ";
  cin  >> choice;
  if (choice == "1" || choice == "Negation"){
    string letterChoice;
    int location;
    cout << "Select Letter to Negate: ";
    cin >> letterChoice;

    for(int i = 0; i < 16 ; i++){
           table_tree[4][i] = negation(table_tree[letterChoiceLog(letterChoice)][i]);
         }
        R_print(letterChoice);
      // tablePrint();
       truthTable();

       } //End of Negation

   else if(choice == "2" || choice == "Conjunction"){
         string letter_Choice_one,letter_Choice_two;

        // string letterChoicelog[2];
         bool S1[16],S2[16];

          cout << "First ROW : ";
          cin >> letter_Choice_one;
          cout << "Second ROW: ";
          cin >> letter_Choice_two;

     //FIRST ROW IN CONJUNCTION
            for(int i = 0; i < 16; i++){
             S1[i] = table_tree[letterChoiceLog(letter_Choice_one)][i];
           }
     //SECOND ROW IN CONJUNCTION
            for(int i = 0; i < 16; i++){
             S2[i] = table_tree[letterChoiceLog(letter_Choice_two)][i];
           }

    for(int i =0;i < 16 ; i++){
      table_tree[4][i] = conjunction(S1[i],S2[i]);
       }
         R_print(choice,letter_Choice_one,letter_Choice_two);
        // tablePrint();
         truthTable();
       }//End of Conjunction



        else if(choice == "3" || choice == "Disjunction"){
         string letter_Choice_one, letter_Choice_two;

        // string letterChoicelog[2];
         bool S1[16],S2[16];

          cout << "First ROW : ";
          cin >> letter_Choice_one;
          cout << "Second ROW: ";
          cin >> letter_Choice_two;

     //FIRST ROW IN DISJUNCTION
            for(int i = 0; i < 16; i++){
             S1[i] = table_tree[letterChoiceLog(letter_Choice_one)][i];
           }
     //SECOND ROW IN DISJUNCTION
            for(int i = 0; i < 16; i++){
             S2[i] = table_tree[letterChoiceLog(letter_Choice_two)][i];
           }

    for(int i =0;i < 16 ; i++){
      table_tree[4][i] = disjunction(S1[i],S2[i]);
       }
          R_print(choice,letter_Choice_one,letter_Choice_two);
       //  tablePrint();
         truthTable();
       }//End of Disjunction


       else if(choice == "4" || choice == "Implication"){
         string letter_Choice_one, letter_Choice_two;

        // string letterChoicelog[2];
         bool S1[16],S2[16];

          cout << "First ROW : ";
          cin >> letter_Choice_one;
          cout << "Second ROW: ";
          cin >> letter_Choice_two;

     //FIRST ROW IN IMPLICATION
            for(int i = 0; i < 16; i++){
             S1[i] = table_tree[letterChoiceLog(letter_Choice_one)][i];
           }
     //SECOND ROW IN IMPLICATION
            for(int i = 0; i < 16; i++){
             S2[i] = table_tree[letterChoiceLog(letter_Choice_two)][i];
           }

    for(int i =0;i < 16 ; i++){
      table_tree[4][i] = implication(S1[i],S2[i]);
       }
        R_print(choice,letter_Choice_one,letter_Choice_two);
        // tablePrint();
         truthTable();
       }//End of IMPLICATION



         else if(choice == "5" || choice == "Equivalence"){
         string letter_Choice_one, letter_Choice_two;

        // string letterChoicelog[2];
         bool S1[16],S2[16];

          cout << "First ROW : ";
          cin >> letter_Choice_one;
          cout << "Second ROW: ";
          cin >> letter_Choice_two;

     //FIRST ROW IN EQUIVALENCE
            for(int i = 0; i < 16; i++){
             S1[i] = table_tree[letterChoiceLog(letter_Choice_one)][i];
           }
     //SECOND ROW IN EQUIVALENCE
            for(int i = 0; i < 16; i++){
             S2[i] = table_tree[letterChoiceLog(letter_Choice_two)][i];
           }

    for(int i =0;i < 16 ; i++){
      table_tree[4][i] = equivalence(S1[i],S2[i]);
       }
        R_print(choice,letter_Choice_one,letter_Choice_two);
       //  tablePrint();
         truthTable();
       }//End of EQUIVALENCE

       else if(choice == "6" || choice == "Store"){
         string memLocation;

         cout << "Choose Memory Location 2 - 4: ";
         cin  >> memLocation;

          if (memLocation == "2"){
             for(int i = 0; i < 16; i++){
              table_tree[7][i] = table_tree[4][i];
             }
          }else if (memLocation == "3"){
            for(int i = 0; i < 16; i++){
              table_tree[8][i] = table_tree[4][i];
            }
          }else if (memLocation == "4"){
            for(int i = 0; i < 16; i++){
              table_tree[9][i] = table_tree[4][i];
            }
          }
         memoryFilePrint(memLocation);
         tablePrint();
         truthTable();
       } //END OF STORAGE
         else if(choice == "7" || choice =="Quit"){
					 bool check;
            for (int i = 0; i < 16; i++){
              if(table_tree[4][i] == 1){
                      check = true;

              }else{
               check = false;
               break;
              }

            }

            if(check == true){
              cout << "This is a tautology\n";
            }else{

              cout << "This is not a tautology\n";
            }

           cout << "Exit";
					 return;
         }
         else {
           cout << "\nWrong Command\n";
           truthTable();
         }

}
//2
#endif
