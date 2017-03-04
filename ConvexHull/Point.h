#pragma once
#include <iostream>
struct Point {
    int x, y;
    Point(int x, int y) : x(x), y(y) {}
    //if a is left of b
    static bool leftOf(const Point& a, const Point& b);
    //if a is right of b
    static bool rightOf(const Point& a, const Point& b);
    //if a is above b
    static bool above(const Point& a, const Point& b);
    //if a is below b
    static bool below(const Point& a, const Point& b);
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;

    friend std::ostream& operator<<(std::ostream& out, const Point& point) {
        return out << '(' << point.x << ", " << point.y << ')';
    }
};
