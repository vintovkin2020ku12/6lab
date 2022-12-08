#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>

int main(){
time_t start = time(NULL);
int i = 0;
pid_t pid = fork();
while((time(NULL) - start) < 2){
i++;
}
if(pid == 0){
	printf("\nparent process i = %d\n", i);
}else{printf("\nchild process i = %d\n", i);}
return 0;
}