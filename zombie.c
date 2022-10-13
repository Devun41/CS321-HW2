#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	int pid=fork();//create child process
	if(pid>0){
		printf("Parent sleep\n");
		sleep(10);
		printf("Exiting parent\n");
	}
	else{
		printf("Child process\n");
		sleep(10);
		printf("Exiting child\n");
	}
	
}