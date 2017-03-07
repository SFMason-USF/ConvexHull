#include "ConvexHull.h"

std::vector<Point> ConvexHull::Incremental(std::vector<Point> pointSet) {
    std::sort(pointSet.begin(), pointSet.end(), Point::leftOf);

    if(pointSet.size() < 3) {
        return pointSet;
    }

    //Start with the first 3 points
    std::vector<Point> hull = {pointSet[0]};
    //The if statement is to maintain counterclockwise order
    //If this is wrong, it may be due to Segment.toTheLeft()
    if(Segment(pointSet[0], pointSet[1]).toTheLeft(pointSet[2])) {
        hull.push_back(pointSet[1]);
        hull.push_back(pointSet[2]);
    }
    else {
        hull.push_back(pointSet[2]);
        hull.push_back(pointSet[1]);
    }

    const int n = pointSet.size();
    for(int i = 3; i < n - 1; ++i) {
        const Point& point = pointSet[i];
        Segment bot = Segment(hull[i - 3], hull[i - 2]);
        Segment top = Segment(hull[i - 2], hull[i - 1]);

        //TODO: handle inserting point into hull
        //TODO: handle replacing point in hull
    }

    return pointSet;
}
