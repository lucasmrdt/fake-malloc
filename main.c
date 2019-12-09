#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int main()
{
  for (int i = 0; i < 1000; ++i) {
	void *a = malloc(1);
  	write(1, &a, sizeof(void*));
  }
}
