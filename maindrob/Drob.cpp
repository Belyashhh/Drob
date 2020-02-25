#include "Drob.h"

#include "iostream"
using namespace std;




/*Drob Drob::operator+(const Drob& a)
{

	int x = this->znam;
	int y = a.znam; 
	if (this->znam != a.znam)
	{
		int chisl = this->chisl * y + a.chisl * x;
		int  znam = this->znam * y + a.znam * x;
	}
	else
	{
		int chisl = a.chisl + this->chisl;
		int znam = a.znam + this->znam;
	}
	Drob h(chisl,znam);
	return h;
}*/



Drob::Drob(int chisl, int znam) :chisl(chisl)
{
	this->chisl = chisl;
	if (!znam)
		throw("zerro");
	this->znam = znam;
}

Drob::Drob()
{
	chisl = 0;
	znam = 1;
}

Drob Drob::operator+(const Drob& a)
{
	int x = this->znam;
	int y = a.znam;
	int w = this->chisl;
	int u = a.chisl;

	chisl = x * u + y * w;
	znam = y * x;
	x = chisl;
	y = znam;

	int t;
	while (x != 0) 
	{
		t = x;
		x = y % x;
		y = t;
	}


	
	chisl /= y;
	znam /=y;
	


	return Drob(chisl, znam);
}

void Drob::print()
{
	cout << chisl << '/' << znam;
}

/*  int t;
  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
  return a;*/