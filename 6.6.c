#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<wait.h>


int main(){
int status;
pid_t pid;
if(fork()){
	execlp("ls","ls", NULL);
	fprintf(stderr,"Exec error\n");
}
sleep(30);
wait(&status);

if(WIFEXITED(status)){
	printf("Code=%d\n", WEXITSTATUS(status));
	printf("-----------------------------AFTER WAIT------------------------------------");
	system("ps -l");

}


return 0;
}