#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area() const = 0;

    virtual ~Shape() = default;
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double givenLength, double givenWidth)
        : length(given