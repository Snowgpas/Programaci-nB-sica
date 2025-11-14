#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char nombre[] = {'G', ' ', 'a', ' ', 'b', ' ', 'r', ' ', 'i', ' ', 'e', ' ', 'l', '\0'};
	char nombre2[] = "G a b r i e l";
	
	printf("\nNombre con espacios: %s\n", nombre);
	printf("\nNombre con espacios2: %s", nombre2);
	
	return 0;
}
