#pragma once
#include "Point.h"
#include <math.h>
class Segment {
    Point a, b;
public:
    Segment(const Point& start, const Point& end);
    //Returns true if point is to the left of this segment
    bool toTheLeft(const Point& point) const;
    float length(void) const;
};

