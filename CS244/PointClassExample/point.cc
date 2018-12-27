void point::initialize(double init_x, double init_y)
{
     x = init_x;
     y = init_y;
}

double point::get_x() const
{
  return x;
}

double point::get_y() const
{
 return y;
}

void point::shift(double dx, double dy)
{
     x+= dx;
     y+= dy;
}

void point::reset_x(double ino_x){
     x = ino_x;

}
void point::reset_y(double ino_y){
     y = ino_y;

}

void point::set_y_to_x(){
       y = x;


}
void point::set_x_to_y(){
      x = y;


}
