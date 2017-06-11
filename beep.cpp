#include <stdio.h>
int main (){
	long int i;
	printf("\a");
	for (i=0; i<10000000; i++);
	printf("\a");
	return (0);
}
