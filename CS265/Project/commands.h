#ifndef COMMANDS_H
#define COMMANDS_H


char fileSystem[20];



#include "userAuth.h"

void run_command_list() {

        char input_command[128]; 

        printf("%s%s",userToken,OPEN_INDICATOR);
        scanf("%s",input_command);    
     
        if(checker(input_command,"where")) {
            puts(GRN);
            system("pwd");
            puts(RESET);

            run_command_list();
        }

        else if (checker(input_command, "list")) {
            puts(YEL);
            system("ls -al");
            puts(RESET);
            run_command_list();
        }

        else if (checker(input_command, "go")){

            char option[64];
            printf("where: ");
            scanf("%s", option);

            //if(listOfFile(option))
            {       
                 chdir(option);
                 puts(GRN);
                 system("pwd");
                 puts(RESET);
                 
                 run_command_list();
            }
        
        }
        else if (checker(input_command ,"exit")){
            gitCloudPush();
            return;
        }
        else if (checker(input_command, "file")){
        
            FILE* fp;
            char option[64];
            scanf("%s", option);
            fp = fopen(option, "w");
            fclose(fp);


        fp = fopen(".fileList", "r");
             run_command_list();
        }
        else if(checker(input_command , "\n")){
             run_command_list();
        }
        else if(checker(input_command , "folder")){
           
            char option[64];
            scanf("%s", option);
            
            char *dependencies = malloc(sizeof(char) * 128);
            strcat(strcat(dependencies, "mkdir "), option);
            system(dependencies);
            

          run_command_list();
        }
        else if (checker(input_command, "delete")){

            char option[64];
            scanf("%s", option);
            char *dependencies = malloc(sizeof(char) * 128);
            strcat(strcat(dependencies, "rm -rf "), option);
            system(dependencies);
            run_command_list();
            
        }
        else if (checker(input_command, "man") || checker(input_command, "Manual")){
           printf(MANUAL);
           run_command_list();
        }
         else if (checker(input_command, "update")){
           gitCloudPull();
           run_command_list();
        }
        else if (checker(input_command, "show")){
            
            system("caja .");
            
            run_command_list();
        }
        else{
            run_command_list();
        }
}






#endif