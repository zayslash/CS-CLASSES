class point
{
public:
     void initialize(double init_x, double init_y);
     void shift(double dx, double dy);
     double  get_x() const;
     double  get_y( ) const;
     void reset_x(double ino_x);
     void reset_y(double ino_y);
     void set_y_to_x();
     void set_x_to_y();
private:
     double x;
     double y;
};
