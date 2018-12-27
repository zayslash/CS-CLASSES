//Name    : Zanif Sandy
//Creation: 01.12.17

#ifndef ZCOPY_H
#define ZCOPY_H

#include <string>
#include <fstream>

using namespace std;

//Name: copy()
//Parameters: string
//Return: void
//Flowchart:
//Label   Task                                                                     Goto
//01      (start: filename)                                                         02
//02      [string line, content]                                                    03
//03      [ifstream file(filename)                                                  04  
//04      [fstream logfile]                                                         05
//05      <file.is_open()>                                                          06,13
//06      <getline(file, line)>                                                     07
//07      content += line + "\n"                                                    08
//08      logfile.open("newcopyfile.txt", fstream::out)                             09
//09      <logfile.is_open()>                                                       10,12
//10      logfile(content)                                                          11
//11      logfile.close()                                                           12,07
//12      file.close()                                                              13
//13      exit                               

void copy(string filename){
 string line, content;

 ifstream file(filename);
 fstream logfile;
 if (file.is_open()){
   while ( getline (file,line) )
   {
     content += line + "\n";
    //cout << line << '\n';
   
   logfile.open("newcopyfile.txt", fstream::out);
    if (logfile.is_open()){
      logfile << content;
         }
  logfile.close();
    }
    file.close();
 }
}


#endif 




