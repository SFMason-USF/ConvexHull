#include "Point.h"

bool Point::leftOf(const Point & a, const Point & b) {
    return a.x < b.x;
}

bool Point::rightOf(const Point & a, const Point & b) {
    return a.x > b.x;
}

bool Point::above(const Point & a, const Point & b) {
    return a.y > b.y;
}

bool Point::below(const Point & a, const Point & b) {
    return a.y < b.y;
}

bool Point::operator==(const Point & other) const {
    return this->x == other.x && this->y == other.y;
}

bool Point::operator!=(const Point & other) const {
    return this->x != other.x || this->y != other.y;
}
