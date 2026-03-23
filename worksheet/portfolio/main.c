
#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {
    
    Point p1 = makePoint(0.0, 0.0);
    Point p2 = makePoint(1.0, 0.0);
    Point p3 = makePoint(0.0, 1.0);

    Triangle t = makeTriangle(p1, p2, p3);

    float area = triangleArea(t);
    printf("Triangle area: %f\n", area);



    return 0;
}