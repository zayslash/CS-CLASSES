template <class T>
class bag
{
private:
     static const size_t CAPACITY = 20;
     T data[CAPACITY];
    
     
public:
    size_t count = 0;

     void insert(T content){
       if(count != CAPACITY){
         data[count] = content;
         count++;
      }
     }

    void remove_index(int index){
      if(count != CAPACITY){
       for (int i = index; i < count; i++){
         data[i] = data[i + 1];
        }
        count--;
      }
    }

    void remove_target(T target){
        if(count != CAPACITY){
          for(int i = 0; i < count; i++){
            if(data[i] == target){
              remove_index(i);
            }   }
        }
    }

    void show(){
      for (int i = 0 ; i < count; i++){
        std::cout << data[i] << " ";
      }
      std::cout << "\n" ;
    }

    bool in_bag(T element){
      for (int i = 0; i < count; i++){
        if(data[i] == element){
          return true;
        }
      }
      return false;
    }
  
   size_t occurencces(int target) const{
     size_t counter = 0;
     for (int i =0; i < count; i++){
       if(data[i] == target){
         counter++;
       }

     }
     return counter;
   }
};

template <class T>
class sets  : public bag <T>
{ 
  private:
   static const size_t CAPACITY = 20;
   T set[CAPACITY];
   size_t counter = 0 ;

   public:
   void insert_set(T object){
       if(counter != CAPACITY){
         set[counter] = object;
         counter++;
      }
   }

   void show_sets(){
     for (int i =0; i < counter; i++){
       set[i].show();
       std::cout << "\n";
     }
   }

};