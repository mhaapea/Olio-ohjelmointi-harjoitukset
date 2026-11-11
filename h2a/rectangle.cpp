#include "rectangle.h"

Rectangle::Rectangle() : width(0), height(0) {}

int Rectangle::getArea() {
    int area = height * width;
    return area;
}

int Rectangle::getCircum() {
    int circumference = (2*height) + (2*width);
    return circumference;
}

void Rectangle::setHeight(int newHeight) {
    height = newHeight;
}

void Rectangle::setWidth(int newWidth) {
    width = newWidth;
}