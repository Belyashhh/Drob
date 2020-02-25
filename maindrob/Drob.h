#pragma once
class Drob
{
	int chisl;
	int znam;
public:
	Drob();
	Drob(int chisl, int znam);
	Drob operator+(const Drob& a);
	void print();
};

