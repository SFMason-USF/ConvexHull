#include "include.h"

void testSegmentLeftOf(void);
void testConvexHull(void);

int main(int argc, char* argv[]) {
    using namespace std;

    testSegmentLeftOf();
}

void testSegmentLeftOf(void) {
    using namespace std;
    vector<Point> points = {
        Point(0,0), Point(10000,10000),
        Point(1,0), //left
        Point(1,1), //collinear
        Point(0,1), //right
        Point(0, 50) //extreme left
    };

    Segment segment = Segment(points[0], points[1]);
    cout << segment.toTheLeft(points[2]) << endl; //left
    cout << segment.toTheLeft(points[3]) << endl; //collinear
    cout << segment.toTheLeft(points[4]) << endl; //right
    cout << segment.toTheLeft(points[5]) << endl; //extreme left
}

void testConvexHull(void) {
    using namespace std;
    vector<Point> points = {Point(0,0),Point(-1,1),Point(0,1),Point(2,-4),Point(2,-3)};
    for(auto i : ConvexHull::Incremental(points)) {
        cout << i << endl;
    }
}