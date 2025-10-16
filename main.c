#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int temp=1;

	for(i=0;i<5;i++)
	{
		printf("temp+%d\n", temp);
		temp++; // temp°¡ 5¹ø ¹Ýº¹ (ÂïÈû) 
	}
	
	return 0;
}
