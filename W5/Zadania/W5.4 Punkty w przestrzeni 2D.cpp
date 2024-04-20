//#include <iostream>
//#include <cmath>
//#include <utility>
//#include <vector>
//#include <algorithm>
//#include <random>
//#include <fmt/core.h>
//
//struct Point {
//    int x;
//    int y;
//
//    void displayCoordinates() {
//        fmt::print("[ {}, {} ]\n", x, y);
//    }
//
//    double distanceFrom(Point point) {
//        return std::sqrt(std::pow(x - point.x, 2) + std::pow(y - point.y, 2));
//    }
//
//    void changeCoordinates(int new_x, int new_y) {
//        x = new_x;
//        y = new_y;
//    }
//};
//
//struct Rectangle{
//    Point bottomLeft;
//    Point bottomRight;
//    Point topLeft;
//    Point topRight;
//};
//
//std::vector<Point> generateRandomPoints(int amount) {
//    std::vector<Point> result;
//    std::random_device rd;
//    std::mt19937 gen(rd());
//    std::uniform_int_distribution<> dis(-100, 100);
//    for (int i = 0; i < amount; ++i) {
//        int randomX = dis(gen);
//        int randomY = dis(gen);
//        result.push_back({randomX, randomY});
//    }
//    return result;
//}
//
//Rectangle findEnclosingRectangle(const std::vector<Point>& points) {
//    int minX = points[0].x;
//    int minY = points[0].y;
//    int maxX = points[0].x;
//    int maxY = points[0].y;
//
//    for (auto point : points) {
//        minX = std::min(minX, point.x);
//        minY = std::min(minY, point.y);
//        maxX = std::max(maxX, point.x);
//        maxY = std::max(maxY, point.y);
//    }
//
//    return { {minX, minY}, {maxX, minY}, {minX, maxY}, {maxX, maxY} };
//}
//
//int main() {
//    Point point1{5, 5};
//    Point point2{10, 10};
//
//    fmt::print("Point 1: ");
//    point1.displayCoordinates();
//    fmt::print("Point 2: ");
//    point2.displayCoordinates();
//
//    fmt::print("Distance between points: {}\n", point1.distanceFrom(point2));
//
//    point1.changeCoordinates(7, 8);
//    fmt::print("New coordinates of Point 1: ");
//    point1.displayCoordinates();
//
//    std::vector<Point> randomPoints = generateRandomPoints(20);
//    fmt::print("Randomly generated points:\n");
//    for (Point point : randomPoints) {
//        point.displayCoordinates();
//    }
//
//    Rectangle enclosingRectangle = findEnclosingRectangle(randomPoints);
//    fmt::print("Smallest enclosing rectangle covering all points:\n");
//    fmt::print("Bottom Left: ");
//    enclosingRectangle.bottomLeft.displayCoordinates();
//    fmt::print("Bottom Right: ");
//    enclosingRectangle.bottomRight.displayCoordinates();
//    fmt::print("Top Left: ");
//    enclosingRectangle.topLeft.displayCoordinates();
//    fmt::print("Top Right: ");
//    enclosingRectangle.topRight.displayCoordinates();
//
//    return 0;
//}
