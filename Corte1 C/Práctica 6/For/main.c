#include <stdio.h>
#include <unistd.h>

int main()
{int count;
     for(count = 0; count <= 10; count++)
     {
     	printf("%d\n", count);
     	sleep(1);
	 }
	return 0;
}
