#include "PointArray.h"

PointArray::PointArray() : points(nullptr), size(0) {}
PointArray::PointArray(int size) : size(size) {
    points = new Point[size];
}

PointArray::PointArray(const PointArray& other) : size(other.size) {
    points = new Point[size];
    for (int i = 0; i < size; ++i) {
        points[i] = other.points[i];
    }
}

PointArray::~PointArray() {
    delete[] points;
}

PointArray& PointArray::operator=(const PointArray& other) {
    if (this != &other) {
        delete[] points;

        size = other.size;
        points = new Point[size];
        for (int i = 0; i < size; ++i) {
            points[i] = other.points[i];
        }
    }
    return *this;
}

bool PointArray::operator==(const PointArray& other) const {
    if (size != other.size) return false;
    for (int i = 0; i < size; ++i) {
        if (points[i] != other.points[i]) return false;
    }
    return true;
}

bool PointArray::operator!=(const PointArray& other) const {
    return !(*this == other);
}

const Point& PointArray::operator[](int index) const {
    if (index < 0 || index >= size) throw std::out_of_range("Index out of bounds");
    return points[index];
}

Point& PointArray::operator[](int index) {
    if (index < 0 || index >= size) throw std::out_of_range("Index out of bounds");
    return points[index];
}

int PointArray::getSize() const {
    return size;
}
