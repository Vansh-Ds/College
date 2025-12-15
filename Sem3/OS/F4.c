#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Kernel Version\n");
	system("user -r");

	printf("\nCPU Information: \n");
	system("lscpu | grep 'Model name\\|Architecture\\|CPU(s)'");

	return 0;
}

