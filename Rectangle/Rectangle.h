#pragma once

class Rectangle
{
private:
	short x{ 0 }, y{ 0 };
	short width{ 0 }, height{ 0 };

public:
	Rectangle();
	void SetPos(short x, short y);
	void SetDim(short width, short height);
	int GetArea() const;
	void Print() const;
};
