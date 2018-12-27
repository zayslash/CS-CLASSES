
Circle::Circle()
{
    centerX = 0.0;
    centerY = 0.0;
}

 void Circle::setCenterX(double this_x){
 
    centerX = this_x;
 
 }
 
 void Circle::setCenterY(double this_y){
 
    centerY = this_y;
    
 }
    
    void Circle::setPointX(double this_x){
       pointX = this_x;
    }
    void Circle::setPointY(double this_y){
       pointY = this_y;
    
    }
    
  double Circle::get_radius() const{
     return radius;
    }
    
    
  double Circle::get_Area() const{
    
    return area;
    
    }
    
   double Circle::get_diameter() const{
     return diameter;
    }
    
   double Circle::radiusOfTwoPoints(){
    radius = sqrt(((pointY - centerY)*(pointY - centerY)) + ((pointX - centerX)* (pointX - centerX)) );
  }
  
   void Circle::setDiameter() {
    diameter = (2 * radius);
  
  }
  
    double Circle::get_circumference() const{
    
    return circumference;
    
    }
    
  void Circle::setCircleName(std::string name){
  
  Circlename = name;
  
  }
  
  
    void Circle::getPropertiesOfObject(){
    

  std::cout << "\n";
  std::cout << "\n";
  std::cout << "************PROPERTY PRINT************\n";
 
  std::cout << "name: " << getCircleName() << "\n";
   std::cout <<"Center X: " <<  getCenterX()<< "\n";
  std::cout << "Center Y: " <<  getCenterY()<< "\n";
  std::cout << "Point X: " <<  getPointX()<< "\n";
  std::cout << "Point Y: " <<  getPointY()<< "\n";
  std::cout << "Radius: " << get_radius() << "\n";
  std::cout << "Diameter: "<< get_diameter() << "\n";
  std::cout << "Area: "<< get_Area()<< "\n";
  std::cout << "Circumference: "<< get_circumference();


    
  }
    
  