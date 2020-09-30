#include <iostream>
#include <cmath>

using namespace std;
// Base class
class Shape
{
public:
// pure virtual function providing interface framework.
    virtual float getArea() = 0;
    void setPIE(float PI)
    {
        p = PI;
    }
    void setRADIUS(float rad)
    {
        r = rad;
    }
protected:
    float p;
    int r;
};
class Circle: public Shape
{
public:
    float getArea()
    {
        return pow(p*r,2);
    }
};
int main(void)
{
    Circle Cir;
    Cir.setPIE(3.14);
    Cir.setRADIUS(7);
// Print the area of the object.
    cout << "Total Area of the Circle: " << Cir.getArea() << endl;
    return 0;
}
