#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>


int main(){
	pid_t pid = fork();
	int child_max = sysconf(_SC_CHILD_MAX);
	if(pid == 0){printf("Process - child");}
	else if(pid > 0){printf("Parent process pid child %d\n", pid);}
	else{printf("Error fork, child not created\n");}
	fprintf(stdout, "pid = %d\n child-max = %d\n", pid, child_max);
	return 0;
}