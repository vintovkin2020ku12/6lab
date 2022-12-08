#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>


int main(){
extern char** environ;
char* uname_args[] = {"gpasswd","-a",NULL};

execve("/bin/gpasswd", uname_args, environ);
fprintf(stderr, "Evecve error\n");

return EXIT_SUCCESS;
}