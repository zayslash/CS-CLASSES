#include <iostream>
#include "stack.h"
#include "windows.h"
#include "windows.cc"

using namespace std;

int main() {

 int option;
 double spaces;

  Stack <window> windowStack;
  Stack <window> windowStackForward;

  window o1;

   cout << "Window o1\n\n";

   while(option != 11){

     o1.showListOfFiles(o1.getMinimize());
     o1.getMenu(o1.getMinimize());

     cout << "\nEnter Menu option:";
     cin >> option;

     string fileName;

      switch(option){

        case 1:
              cout << "\ninput file name:";
              cin  >> fileName;
              o1.openFile(fileName);
              break;

        case 2:
              cout << "\ninput file name:";
              cin  >> fileName;
              o1.copyFile(fileName);
               break;
        case 3:
              o1.createFile();
               break;
        case 4:
              o1.setMinimize();
              break;
         case 5:
              o1.setMaximize();
              break;

         case 6:

              cout << "\ninput file name:";
              cin  >> fileName;
              o1.deleteFile(fileName);

              break;

         case 7:
               cout << "\ninput spaces :";
               cin  >> spaces;
               o1.setMove(spaces);
               break ;

         case 8:
               windowStack.push( o1 );
               o1.setFileListEmpty();
               break;

        case 9:
             //o1.setBack();

             if(!windowStack.isEmpty()){

               o1 = windowStack.topElement();
               windowStackForward.push(windowStack.pop());
              // windowStack.pop();
              break;
             }

        case 10:

          o1 = windowStackForward.topElement();
          windowStackForward.pop();

          break;


      }

   }

}
