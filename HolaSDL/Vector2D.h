#pragma once
#include <iostream>
class Vector2D {
private:
	int x;
	int y;
public:
	Vector2D(int x, int y);
	int GetX() const { return x; };
	int GetY() const { return y; };
	Vector2D& operator+=(const Vector2D& vector);
	Vector2D& operator-=(const Vector2D& vector);
	int operator*(const Vector2D& vector);
	Vector2D& operator*(const int num);
	bool operator==(const Vector2D& vector) const;
};
using Point2D = Vector2D;
