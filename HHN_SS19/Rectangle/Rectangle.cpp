#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle()
	: x(0),
	y(0),
	width(0),
	height(0) {}

void Rectangle::SetPos(short x, short y)
{
	this->x = x;
	this->y = y;
}

void Rectangle::SetDim(short width, short height)
{
	this->width = width;
	this->height = height;
}

int Rectangle::GetArea() const
{
	return width * height;
}

void Rectangle::Print() const
{
	std::cout << "(" << x << "|" << y << ") - ("
		<< width << "|" << height << ") - " << GetArea() << std::endl;
}