#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(){

system(" > who.txt");
int name_extension ;
int i;
char name[] = "ssh ZanifSandy@cslab-";

   char result[100];
   int num;
   char str1[100];
   char str2[100];


for (i=1; i <= 14; i++){

 strcpy(str1, name);
 sprintf(result, "%d", i);
 strcpy(str2, result);
 strcat(str1, str2);

 //printf("%s%s\n", name,result );
 //printf("%s\n", str1);

  system(str1);


  //system("who");
  system("who >> who.txt");

  system("exit");


}




}
