#include <stdio.h>
#include <unistd.h>

int main(){
	pid_t c_pid = getpid();
	printf("%d\n", c_pid);

        printf("Hello World1\n");
        pid_t pid = fork();
	if (pid == 0){
		printf("Child %d\n", pid);
	}
	if (pid > 0){
		printf("Parent %d\n", pid);
	}
        printf("Hello World2\n");
        return 0;
}
