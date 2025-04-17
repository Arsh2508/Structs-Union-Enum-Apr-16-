#include <stdio.h>

union Data{
	int a;
	float b;
	char c;
};

int main()
{
	union Data ob;
	ob.a = 12;
	printf("int: %d float: %f char: %c\n", ob.a, ob.b, ob.c);

	ob.b = 34.5;
	printf("int: %d float: %f char: %c\n", ob.a, ob.b, ob.c);

	ob.c = 'A';
	printf("int: %d float: %f char: %c\n", ob.a, ob.b, ob.c);
	
	printf("Size of union: %lu\n", sizeof(ob));	
	return 0;
}
