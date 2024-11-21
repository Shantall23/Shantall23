#ifndef POINTARRAY_H
#define POINTARRAY_H

#include "Point.h"
#include <stdexcept>

class PointArray {
private:
    Point* points; 
    int size;      

public:
    PointArray();
    PointArray(int size); //C Prametrizado
    PointArray(const PointArray& other); //C Copia
    ~PointArray();

    PointArray& operator=(const PointArray& other);

    bool operator==(const PointArray& other) const;

    bool operator!=(const PointArray& other) const;

    const Point& operator[](int index) const;

    Point& operator[](int index);

    int getSize() const;
};

#endif 
