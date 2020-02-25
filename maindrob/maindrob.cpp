
#include <iostream>
#include "Drob.h"
#include <string.h>
int main()
{
	try {
		Drob d(4, 0);
		Drob g(8, 54);
		g = g + d;
		g.print();
	}
	catch (char* str) {
		if (!strcmp(str, "zerro")) printf("znam=0");
	}




}



