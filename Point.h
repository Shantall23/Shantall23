#ifndef POINT_H
#define POINT_H

class Point {
private:
    int x, y;

public:
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {} //C Parametrizado

    int getX() const { return x; }
    int getY() const { return y; }

    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }

    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }

    bool operator!=(const Point& other) const {
        return !(*this == other);
    }

    Point& operator=(const Point& other) {
        if (this != &other) {
            x = other.x;
            y = other.y;
        }
        return *this;
    }
};

#endif