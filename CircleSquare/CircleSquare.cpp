#include <iostream>
using namespace std;

class Square
{
    double Side;
public:
    Square(double side) : Side(side) { }
    double AreaSquare(double A) {
        return A * A * 4;
    }

};

class Circle
{
    double Radius;
    const double pi = 3.14;
public:
    Circle(double radius) : Radius(radius) { }
    double getRadius()
    {
        return Radius;
    }

    double AreaCircle(double A) {
        return pi * A * A;
    }

};

class CircleInSquare : public Circle, public Square
{
public:
    CircleInSquare(double radius) : Square(radius), Circle(radius) { }

};

void main()
{
    double r;
    cout << "Enter the radius of circle -> " ;
    cin >> r;

    CircleInSquare myArea = CircleInSquare(r);
    cout << "The area of square is ->" << myArea.AreaSquare(r) << endl;
    cout << "The area of circle -> "<< myArea.AreaCircle(r) << endl;

}