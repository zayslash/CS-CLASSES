#include "textgraphics.h"
#include "commands.h"
#include "userAuth.h"

int main(){

system("clear");
printf("%sUNIX FINAL PROJECT - Zanif Sandy\n\n",RUSH);
// struct User_ account_user;
char *start_option = malloc(sizeof(char) * 128);
int check = 1;

char* input_userName = malloc(sizeof(char) * 128);
char* input_password = malloc(sizeof(char) * 128);

printf("login (l) or Sign-Up (s): ");
scanf("%s", start_option );

if(checker(start_option, "sign-up") || checker(start_option,"s")){ //SIGN UP USER
  char* validate_password = malloc(sizeof(char) * 128);;
  printf("create User account \n");
  printf("Username: " );
  scanf("%s", input_userName );

   while(check){

     printf("Password: ");
     scanf("%s", input_password);
     printf("Re-Enter Password:");
     scanf("%s", validate_password);

     if(checker(input_password ,validate_password)){

          addUser("users.dat",input_userName , input_password );
          userToken = input_userName;
          check = 0;
        }
     else{continue;}

   }

run_command_list();
}//end of Sign up
else if (checker(start_option, "login") || checker(start_option, "l")){
int tries = 0;
do{

      if(tries > 0){
        printf("Wrong Username or Password\n");
      }

     printf("Username: ");
     scanf("%s", input_userName);
     printf("Password: ");
     scanf("%s", input_password);
     userToken = input_userName;
     tries++;
}
    while( getUserlogin(input_userName,input_password) == 0 );  //USER AUTH
    gitCloudPull();        // UPDATES CURRENT ENVIRONMENT STATE FROM SERVER
    run_command_list(); // RECURSVE FUNCTION CALL FOR COMMANDS
}
else if (checker(start_option, "exit")){
    return 0;
}
else{
    main();
}
     

    return 0 ;
}
