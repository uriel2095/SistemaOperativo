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
                
}



int main()
{
        int pid;
	int pos;
	int j;
	int i;
	int plus;
	int fit;
        int array[1000];        	
	  
        
	

         printf("Numero de procesos que deseas \n");
	 scanf("%d",&pos);
	 pid = procesos(pos);
        
	for(i=0;i<pos;i++){
		wait(&pos);
	} 
	
	 if(pid == 0){
	 printf( "Soy el padre  %d   con PID:%d \n",pid,getpid());
         }else{
	plus = 0;
	fit=j;
	 for(j=((pid-1)*100);j<=99+((pid-1)*100);j++)
        {
        plus += array[j];
        } 

	printf("Soy el hijo  %d   con PID:%d  suma %d \n",pid,getpid(),plus);
	// plus= 0;
      	//fit=j;

		
	
//	printf("suma %d \n",plus);

	}
	
}
