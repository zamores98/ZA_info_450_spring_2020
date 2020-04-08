#include <iostream>
using namespace std;
const int PI = 3; // for simplicity, we'll pretend PI is 3
class shape{
  public:
    virtual int get_perimeter_length(){return -1;}
    virtual int get_area(){return -1;}
};
class circle : public shape{
  public:
    int i;
    int o;
    circle(int radius){
        i = 2 * PI * radius;
        o = PI*radius*radius;}
    int get_perimeter_length(){return i;}
    int get_area(){return o;}
};
class rectangle : public shape{
  public:
    int z;
    int x;
    rectangle(int height, int width){
    z = 2*(height+width);
    x = height*width;}
    int get_perimeter_length(){return z; }
    int get_area(){return x;}
};
class square : public shape{
  public:
    int n;
    int m;
    square(int side) {
    n = 4*side;
    m = side*side;}
    int get_perimeter_length(){ return n; }
    int get_area(){             return m; }
};
int main(){
  shape *s1;
  circle c(3);
  s1 = &c;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
  square s(3);
  s1 = &s;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
  rectangle r(4,5);
  s1 = &r;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
  return 0;
}
