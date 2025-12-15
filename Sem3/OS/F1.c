#include <stdio.h>
#include <unistd.h>

int main(){
	printf("Hello World1\n");
	fork();
	printf("Hello World2\n");
	return 0;
}
