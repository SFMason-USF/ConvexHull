#include "Segment.h"

Segment::Segment(const Point & start, const Point & end) : a(start), b(end) {}

bool Segment::toTheLeft(const Point & point) const {
    //Keep an eye on this because it does not work reliably when a point isn't directly left/right of a line, 
    //e.g. left but way above the end of the line
    //see http://stackoverflow.com/questions/1560492/how-to-tell-whether-a-point-is-to-the-right-or-left-side-of-a-line
    return ((b.x - a.x) * (point.y - a.y) -
        (b.y - a.y) * (point.x - a.x)) < 0;
}

float Segment::length(void) const {
    return sqrtf(
        (b.x - a.x) * (b.x - a.x) +
        (b.y - a.y) * (b.y - a.y));
}
