#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int gy;
    int stat;
	double begin=clock();
	gy=fork();
	if(gy==0){
	
		system("/bin/ls");
		sleep(5);
		exit(1);

	}
	else{
	
		wait(&stat);
		printf("visszatert: %d",gy);
		
	}
	double end=clock();
	printf("futott %f",(end-begin));
	return 0;
	}
