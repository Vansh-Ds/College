#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	pid_t pid = fork();
	if (pid ==0){
		printf("Balls\n");
	}
	else if (pid > 0){
		sleep(2);
		printf("Tits\n");
		wait(NULL);
		printf("Dick\n");
	}
	return 0;
}
