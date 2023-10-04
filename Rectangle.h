#pragma once
#include "Shape.h"
class Rectangle :
    public Shape
{
private:
    float width;
    float length;

public:
    // TODO: add set and get

    void draw();
    float calculateArea();

};

