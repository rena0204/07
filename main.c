#include <stdio.h>
#include <stdlib.h>
static int all_files;

extern void sub(void);

int main(int argc, char *argv[])
{
	sub();
	printf("%d\n", all_files);
	
	return 0;
}

