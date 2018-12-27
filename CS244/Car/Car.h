//Rasheed Olayiwola and Zanif Sandy

class Car
{
  private:
   double carPosition_X; //position on the X
   double carPosition_Y; //poistion on the Y
   
   double direction;    // North, South ,East, West
   double turn;         //Left or Right
   double moving;         //Foward or Backwards
   bool power_ON_OFF;   // if True Car can Move
   
   bool breakStop;           //if True Car Stops
   

   double destination_X;  
   double destination_Y;  
  
   double fuel;      
   double Distance;     //Distance
   double Time;         //Time
   double speed;        // speed of car
    
  public:
       Car();
       Car(double init_x, double init_y); //Car destination on x,y Axis
       
  void setPower(bool);                 //set Power True or False     
  void setDirection() ; 
  void setTurn(double);                //set turn
  void setMoving(double);              //set Moving
  void setBreakStop(bool);             //set Stop True or False
  void setFuel(double);                //set Fuel
  void setDestination(double, double); //set destination_X , destination_Y
  void setDistance(double);            // distance = Speed * Time
  void setTime(double);                // Time = distance / speed
  void setSpeed(double);               //Speed = distance / time
  
  //getters
  double getDirection(){
    return direction;
  }
  
  double getMoving(){
    return moving;
  }
  double getTurn(){
    return turn;
  }
  bool getPowerState(){
    return power_ON_OFF;
  }
  double getSpeed(){
    return speed;
  }
  double getDistance(){
    return Distance;
  }
  double getTime(){
    return Time;
  }
  
};









