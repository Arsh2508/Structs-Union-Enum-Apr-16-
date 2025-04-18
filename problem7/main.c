#include <stdio.h>
#include "union.h"

int main()
{
	union Value ob;
	ob.a = 25;
	printf("Integer value %d\n", ob.a);
	ob.b = 12.5;
	printf("Float value %.2f\n", ob.b);
	
	printf("Size of union: %lu bytes\n", sizeof(ob)); // union have the size of the largest member on it
	return 0;
	
}
