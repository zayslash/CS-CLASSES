
#include <math.h> // uses sqrt() function 
class Circle
{
    
  private:
    
     std::string Circlename;
     double centerX;
     double centerY;
    
     double pointX;
     double pointY;
     
     double radius;
     double area;
     double diameter;
     double circumference;
     
  public:
  
    Circle();
    Circle(double init_c_x, double init_c_y){
      centerX = init_c_x;
      centerY = init_c_y;
    }
    
    
    void setCenterX(double);
    void setCenterY(double);
    
    void setPointX(double);
    void setPointY(double);
    void setDiameter();
    void setCircleName(std::string);
    void getPropertiesOfObject();
    double radiusOfTwoPoints();
    
    std::string getCircleName(){
      return Circlename;
    }
    
   double getCenterX() const
  { return centerX; }
  
  double getCenterY() const
  { return centerY; }
  
   double getPointX() const
  { return pointX; }
  
  double getPointY() const
  { return pointY; }
  

  double get_radius() const;
  double get_diameter() const;
  double get_Area() const;
  double get_circumference() const;
  
  
  void setAreaOfCircle(){
    
    area = (3.141592 * (radius * radius));
    
    
  }
  void setCircumference(){
    circumference = 2 * (3.141592 * radius);
    
  }
  
  
  
  
};