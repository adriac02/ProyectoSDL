#include "Vector2D.h"

Vector2D::Vector2D(int nx, int ny) {
	x = nx;
	y = ny;
}
Vector2D& Vector2D::operator+=(const Vector2D& vector) {
	x += vector.x;
	y += vector.y;
	Vector2D* vec = new Vector2D(1,1);
	return *vec;
}
Vector2D& Vector2D::operator-=(const Vector2D& vector) {
	x -= vector.x;
	y -= vector.y;
	Vector2D* vec = new Vector2D(1, 1);
	return *vec;
}
int Vector2D::operator*(const Vector2D& vector) {
	return (x * vector.x) + (y * vector.y);
}
Vector2D& Vector2D::operator*(const int num) {
	x *= num;
	y *= num;
	Vector2D* vec = new Vector2D(1, 1);
	return *vec;
}
bool Vector2D::operator==(const Vector2D& vector) const {
	return x == vector.x && y == vector.y;
}