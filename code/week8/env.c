#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[],char *env[]){
	int i=0;
	extern char **environ;

	for(;env[i];i++)
		printf("env:%s\n",env[i]);

	for(;environ[i];i++)
		printf("environ:%s\n",environ[i]);
	
	printf("getenv:%s\n",getenv("PATH"));
	return 0;
}
