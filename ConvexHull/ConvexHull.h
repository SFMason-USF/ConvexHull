#pragma once
#include <vector>
#include <algorithm>
#include "Point.h"
#include "Segment.h"

namespace ConvexHull {
    //Returns the convex hull of a set of Points, constructed with the incremental algorithm
    std::vector<Point> Incremental(std::vector<Point> pointSet);
}