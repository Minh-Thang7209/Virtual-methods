#pragma once

#include <iostream>


class Figure
{
public:
	virtual double GetArea() const = 0;
};

class Reactangle : public Figure
{
private: 
	double width;
	double height;
public:
	Reactangle (double w, double h) : width(w), height(h){}
	double GetArea() const  {
		return width * height;
	}
};

class Circle : public Figure
{
private:
	double radius;
public:
	Circle(double r) : radius(r){}
	double GetArea() const {
		return 3.14 * radius * radius;
	}
};

class Triangle : public Figure 
{
private:
	double base;
	double height;
public:
	Triangle(double b, double h) : base(b), height(h){}
	double GetArea() const {
		return 0.5 * base * height;
	}
};



