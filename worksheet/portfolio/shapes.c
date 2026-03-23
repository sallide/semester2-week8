
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point new;
    // implementation

    new.x = x;
    new.y = y;

    return new;
}

Line makeLine(Point p1, Point p2) {
    Line new;
    // implementation

    new.p[0] = p1;
    new.p[1] = p2;

    return new;
}

Triangle makeTriangle(Point p1, Point p2, Point p3) {
    Triangle new;
    // implementation

    new.p[0] = p1;
    new.p[1] = p2;
    new.p[2] = p3;

    return new;
}


float lineLength(Line l) {
    float length = sqrt(pow((l.p[1].x - l.p[0].x),2) + pow((l.p[1].y - l.p[0].y),2));


    return length;
}

float triangleArea(Triangle t) {
     
    float a = lineLength(makeLine(t.p[0], t.p[1]));
    float b = lineLength(makeLine(t.p[1], t.p[2]));
    float c = lineLength(makeLine(t.p[2], t.p[0]));

    float s = (a+b+c)/2;

    float area = sqrt(s*(s-a)*(s-b)*(s-a));
    return area;
}

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()
