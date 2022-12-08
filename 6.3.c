#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>


int main(){
int i = 0;
pid_t pid = fork();
pid_t pid2 = fork();
if(pid != 0){
	pid_t pid1 = fork();
	i++;
	pid_t pid2 = fork();
	i++;
	printf("i = %d, addres = %p, 1pid1 = %d\n",i, i, pid1);
}
if(pid2 != 0){
	pid_t pid1 = fork();
	i++;
	pid_t pid2 = fork();
	i++;
	printf("i = %d, addres = %p, 2pid1 = %d\n",i, i, pid2);
}
return 0;
}