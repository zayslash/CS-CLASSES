#ifndef USERAUTH_H
#define USERAUTH_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <time.h>
#include <unistd.h>

#include "textgraphics.h"
#include "commands.h"
#include "userAuth.h"

typedef int bool;
#define true 1
#define false 0

#define RED   "\x1B[31m"        
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define RESET "\x1B[0m"

char *userToken;
char currentUser[128];


void gitCloudPull();
void gitCloudPush();
void run_command_list();
int checker(char input[],char check[]);
static char *rand_string(char *str, size_t size);
void addUser(char name[64], char* setUserName, char* setPassword);
int getUserlogin(char *username, char *password);
void destroyArray(char **ptr, int row);
int listOfFile(char *location);



void gitCloudPull(){

    system("git pull");

}

void gitCloudPush(){
    system("git add --all");
    system("git commit -m \"user\" ");
    system("git push origin master");
}

static char *rand_string(char *str, size_t size)
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJK...";
    if (size) {
        --size;
        size_t n;
        for (n = 0; n < size; n++) {
            int key = rand() % (int) (sizeof charset - 1);
            str[n] = charset[key];
        }
        str[size] = '\0';
    }
    return str;
}

int checker(char input[],char check[])
{
    int i,result=1;
    for(i=0; input[i]!='\0' || check[i]!='\0'; i++) {
        if(input[i] != check[i]) {
            result=0;
            break;
        }
    }
    return result;
}


void addUser(char name[64], char* setUserName, char* setPassword){
     FILE *file_name;
     // char *folderName = malloc(sizeof(char) * 128);;
      file_name  = fopen(name,"a");

    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    char s[64];
    strftime(s, sizeof(s), "%c", tm);

     //rand_string(folderName, 10);
     fprintf(file_name, "\n%.10s\t%20s\t%20s\t", setUserName, setPassword,s);
     char *output = malloc(sizeof(char) * 128);;
     char *directory = malloc(sizeof(char) * 128);;
     char *dependencies = malloc(sizeof(char) * 128);;

     strcat(strcat(output, "mkdir users/"), setUserName);
     strcat(strcat(directory, "cd users/"), setUserName);
     strcat(strcat(currentUser, "users/"), setUserName);
     strcat(strcat(dependencies, output), "/Home ");
     strcat(strcat(dependencies, output), "/Documents ");

     //output = strcat("mkdir users/", setUserName);
     printf("%s",dependencies);
     system(output);
     system(dependencies);
     //system(directory);
     chdir(currentUser);
     fclose(file_name);
}


int getUserlogin(char *username, char *password){
    static const char filename[] = "users.dat";
    FILE *file = fopen(filename, "r");
   if ( file != NULL )
   {
      char line[BUFSIZ];
      while ( fgets(line, sizeof line, file) != NULL )
      {
         char s[20];
         char p[20];
         if ( sscanf(line, "%s%s\n", s ,p) == 2 )
         {
            if (checker(username,s) && checker(password,p)){
              strcat(strcat(currentUser, "users/"), username);
              char *directory = malloc(sizeof(char) * 128);;
              strcat(strcat(directory, "cd "), currentUser);
              //system(directory);
              chdir(currentUser);
              //printf("%s",directory);

              return 1;
            }
         }
      }
   }
   else
   {
      perror(filename);
   }
   return 0;
}

void destroyArray(char **ptr, int row) {
	int i;
    for( i = 0; i < row; i++) {
		free(ptr[i]);
	}
	free(ptr);
}

int listOfFile(char *location){
    //system("ls -1a | cat > .fileList");
    char *output = malloc(sizeof(char) * 128);
    char *head = malloc(sizeof(char) * 128);
    strcat(strcat(head, "ls -1a ../../"), currentUser);
    strcat(strcat(output, head), " | cat > .fileList");
    //printf("%s",output);

    system(output);

        FILE* fp;
        char buffer[255];

        fp = fopen(".fileList", "r");

        while(fgets(buffer, 255, (FILE*) fp)) {
             printf("%s\n", buffer);

             if(checker(location, buffer)){
                 chdir(location);
                 return 1;
             } 
        }
    return 0;        
}




#endif