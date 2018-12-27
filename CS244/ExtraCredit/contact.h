class contact{

  private:

        std::string firstName;
        std::string middleName;
        std::string surname;
        std::string phoneNumber;
        int Age;
        std::string EmailAddress;
        std::string Occupation;

  public:

     void setMiddleName(std::string);
     void setFirstName(std::string);
     void setSurname(std::string);

     void setAge(int);
     void setEmail(std::string);
     void setOccupation(std::string);
     void setPhoneNumber(std::string);
     void phoneBook();


     std::string getFirstName() const{
       return firstName;
     }

     std::string getSurname() const{
       return surname;
     }
     std::string getMiddleName() const{
       return middleName;
     }

     std::string getEmail() const{
       return EmailAddress;
     }

     std::string getPhoneNumber() const{
       return phoneNumber;
     }

     int getAge() const{
       return Age;
     }

     std::string getOccup() const{
       return Occupation;

     }


};
