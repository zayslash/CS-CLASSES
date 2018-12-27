#include <stdio.h>
#include <stdlib.h>

void Command_Menu(){  //Recursive Function

     int option;
     printf("\n%s\n", "1) Display your current Directory");
     printf("%s\n", "2) Display your home Directory");
     printf("%s\n", "3) List the content of your current directory");
     printf("%s\n", "4) Exit the program\n");

     printf("Please select a menu item: ");
     scanf("%d", &option);
     printf("\n" );

            if(option == 1){
              system("pwd");
              Command_Menu();

            }else if (option == 2){
               system("echo $HOME");
               Command_Menu();

            }else if (option == 3){
              system("ls -l .");
              Command_Menu();

            }else if (option ==4){
              printf("exit\n");

            }else{
              printf("INVALID COMMAND\n");
              Command_Menu();
            }
}

int main(){

Command_Menu(); // Function call
return 0;
}
