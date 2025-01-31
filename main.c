#include <stdio.h>
#include <my_functions.h>;


int main() {
	char name[10];
	printf("Insert your name: ");
	readln(name, sizeof(name));

	printf("Insert your family: ");
	char family[15];
	readln(family, sizeof(family));

	printf("Hello, %s %s!", name, family);
	getchar();
	return 0;

}
