#include <iostream>
#include <string>
using namespace std;

  //EXTRA CREDIT ----------------------------------------
  bool IsPalindrome(string  str){
    string foward_str , backwards_str, lowerstring;
  //deletes space in string array 
  for (int i = str.size()-1; i >= 0; --i) {
     if(str[i] == ' '){
        str.erase(i, 1);
       }
  }
  //changes str cases to lowercase
    for(int y = 0; str[y] != '\0'; y++){
  		str[y] = tolower(str[y]);
  		lowerstring += str[y];
    }
  //stores lowercase foward string to foward_str
   for(int i= 0 ; i < lowerstring.size(); i++){
    foward_str += lowerstring[i];
  }
  //stores lowercase backward string to backwards_str
   for(int r = lowerstring.size() - 1; r >=  0 ; r--){
    backwards_str +=lowerstring[r];
  } 
  //IsPalindrome test 
   if(foward_str == backwards_str){
      return true;
    }
    else {
      return false;
    }
  }
int main(){
    
  // 1 ----------------------------------------
  //char array[] = "Initial";  
  //char array2[] = {'I','n','i','t','i','a','l','\0'};
  
  // 2 ----------------------------------------
  //while(true){
  //  cout << "Why?\n";
  //}
  
  // 3 ----------------------------------------
  //int n = 3, i =1, r;
  //int sum;
  //while(i <= n){
  //  r = i*i;
  //  sum +=r;
  //  i++;
  //}
  //  cout << sum;
    
  //4 ----------------------------------------
  //char str[] ="ADER";
  //cout << str[1] << str[2] << str[0] <<str[3] << " " << str[3] << str[0] << str[1] <<str[2] ;
  
  //5 ----------------------------------------
  //string str ;
  //for(int i= 0 ; i < str.size(); i++){
  //  cout << str[i];
  //}
  //for(int r = str.size(); r >=  0 ; r--){
  //  cout << str[r];
  //  }
    
  //6 ----------------------------------------  
  //int n = 9;
  //int counter = 0;
  //    for(int i = 1; i <= n; ++i)
  //    {
  //       if(n % i == 0){
  //            counter +=1;
  //        }
  //    }
  //    cout << counter;
  //7 ----------------------------------------
  
  //string str ;
  //cout << "Enter lowecase only: " ;
  //getline(cin, str);  
  //string str2 = str;
  
  //for(int i = 0; str2[i] != '\0'; i++){
  //		str2[i] = tolower(str2[i]);
  //	}
  
  //for (int i= 0; str != str2 ; i+=1)
  //{
  //  cout << "Enter lowecase only: " ;
    
  //  getline(cin, str);
  //  str2 = str;
  //  for(int i = 0; str2[i] != '\0'; i++){
  //		str2[i] = tolower(str2[i]);
  //	}
  //}
  
  //8 ----------------------------------------
  // int n = 89;
  // int nums[n];
  // int q ;
  
    
  //   for(int i = 1; i <= n; ++i) {
  //   int y = 0;
    
  //     if(i % 4 == 0 ){
  //         //cout << i << ' ';
  //         if(i % 3 != 0){
            
  //           cout << i << ' ';
  //           y = i;
  //           nums[0] = y;
            
  //         }
  //     }
  //     }
        
  //EXTRA CREDIT ----------------------------------------
    //cout << IsPalindrome("A slut nixes sex in Tulsa");
    
  return 0;
}