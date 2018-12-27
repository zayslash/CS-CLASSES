#include <fstream>
#include <string>
#include <vector>

using namespace std;
class window{

  private:

  int FilePos;
  int windowPos;
  int windowAmount;
  int FileListSize ;

  vector <string> FileList;
  vector <string> windowList;

  bool Minimize;
  bool Maximize;

  bool open;
  double Move;

  bool back;
  int prevFileSize;

  string favourite;
  string files;

  public:


     window();



  void addFile(string fileName){

    FileList.push_back(fileName);

  }

     bool getOpen() const{
        return open;
       }

       bool getMinimize() const{
          return Minimize;
       }

       bool getback() const {
          return back;
       }


       double getMove() const{
         return Move;
       }

      int getWindowAmount() const{
        return windowAmount;
      }

      int getWindowPos()const {
        return windowPos;
      }

       void setMinimize(){
         Minimize = true;
       }


       void setMaximize(){
         Minimize = false;
       }





       void setFileListEmpty(){

         windowAmount++;

        windowList.assign(FileList.begin(), FileList.end());
        prevFileSize = FileListSize;



         FileList = {};
         FileListSize=0;

         windowPos++;

       }




    // void setBack(){
    //   if(windowPos == 0){

<<<<<<< HEAD
         cout << "CANNOT GO BACK";
       }
       else{
=======
    //     std::cout << "CANNOT GO BACK";
    //   }
    //   else{
>>>>>>> 1267d642673091bef159c96559af0565d27892c0


    // FileListSize = prevFileSize;
    // FileList.assign(windowList.begin(), windowList.end());

    //   windowPos--;
    // }
    // }



    void showListOfFiles(bool show){
        if(show == false){

          for (int u = 0 ; u < getMove(); u++){
          cout <<"\n";
          }
          cout << "\n***************** WINDOW " << getWindowPos() << " ***********************\n";
      for (int i = 0; i < FileListSize; i++){
        cout << FileList[i] << " ";

      }
      cout << "\n**************************************************";

        }
        else{
          cout << "";

        }

    }


   void getMenu(bool show){

    if (show == false){

<<<<<<< HEAD
     cout << "\n\n\n1.Open File\n";
     cout << "2.Copy File\n";
     cout << "3.Create File\n";
     cout << "4.Minimize\n";
     cout << "5.Maximize\n";
     cout << "6.Delete File\n";
     cout << "7.Move Window Down\n";
     cout << "8.New Empty Window\n";
     cout << "9.Back\n";
     cout << "10.Quit\n";
=======
     std::cout << "\n\n\n1.Open File\n";
     std::cout << "2.Copy File\n";
     std::cout << "3.Create File\n";
     std::cout << "4.Minimize\n";
     std::cout << "5.Maximize\n";
     std::cout << "6.Delete File\n";
     std::cout << "7.Move Window Down\n";
     std::cout << "8.New Empty Window\n";
     std::cout << "9.Back\n";
     std::cout << "10.Foward\n";
     std::cout << "11.Quit\n";
>>>>>>> 1267d642673091bef159c96559af0565d27892c0
      }

      else{

        cout << "\n\n\n5.Maximize\n";
        cout << "7.Quit";


      }
   }


  void openFile(string fileName){
    string line , content;

    ifstream file(fileName);

    if (file.is_open()){
      open = true;
      while ( getline (file,line) )
       {
     content += line + "\n";
     cout << line << "\n";
    }
   }
   open = true;
  file.close();
  }



  void copyFile(string filename){
    string line, content;

    ifstream file(filename);
    fstream logfile;

    string fileNameCreate;

    cout << "Enter new File name: ";
    cin >> fileNameCreate;

    if (file.is_open()){
       while ( getline (file,line) )
     {
     content += line + "\n";
    //cout << line << '\n';

        logfile.open(fileNameCreate , fstream::out);
        if (logfile.is_open()){
        logfile << content;
         }
        logfile.close();

       }
         file.close();

          }
          addFile(fileNameCreate);
          FileListSize++;

  }



  void createFile(){
   ofstream logfile;

    string fileNameCreate;

    cout << "Enter File name: ";
    cin >> fileNameCreate;

   logfile.open(fileNameCreate , fstream::out | fstream::app);

    if (logfile.is_open()){

    string line;
    cout << "\n";
    cout << "\n";

     getline(cin, line);
      cout <<line;
    logfile << line;

    }
    logfile.close();
    FileListSize++;
    addFile(fileNameCreate);

  }


   void deleteFile(string filename){

     for (int i =0 ; i <= FileListSize; i++){
       if (FileList[i] == filename){
           FileList[i] = "";
           //remove(filenameChar);
       }
     }

     FileListSize--;
   }



  void setMove(double num){
      Move = num;

  }
};
