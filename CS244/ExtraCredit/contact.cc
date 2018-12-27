void contact::setMiddleName(std::string middleName){
       this->middleName = middleName;
     }

     void contact::setFirstName(std::string firstName){
       this->firstName = firstName;
     }

     void contact::setSurname(std::string surname){
       this->surname = surname;
     }

    void contact::setAge(int Age = 10){
       this->Age = Age;
     }

     void contact::setEmail(std::string EmailAddress){
       this->EmailAddress = EmailAddress;
     }

    void contact::setOccupation(std::string Occupation){
       this->Occupation = Occupation;
     }

     void contact::setPhoneNumber(std::string phoneNumber){
       this->phoneNumber = phoneNumber;
     }


     void contact::phoneBook(){
       std::cout << "\n***************************************\n";
       std::cout << "Name: " << firstName << " "<< surname << "\n";
       std::cout << "Age: " << Age << "\n";
       std::cout << "phone Number: " << phoneNumber << "\n";
       std::cout << "Email Address: " << EmailAddress << "\n";
       std::cout << "Occupation:" << Occupation <<"\n";
       std::cout << "\n***************************************";
     }
