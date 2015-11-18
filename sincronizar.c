#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <wait.h>

int procesos(int nProc)
{
	int i;
	for(i=1;i<=nProc;i++)
		if(fork()==0)
		return i;
		return 0;
}




int main ()
{
int pid;
int status;
//pid = procesos(3);
int pos;
int i;

printf("Numero de procesos que deseas \n");
         scanf("%d",&pos);
         pid = procesos(pos);

        for(i=0;i<pos;i++){
                wait(&pos);
        }
	  if(pid == 0){
         printf( "Soy el padre con PID:%d \n",pid,getpid());


	}else{
		printf("Soy  el hijo %d  \n ",pid,getpid());
	}
	



}
