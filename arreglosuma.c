#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
int array[10] = {0,1,2,3,4,5,6,7,8,9};
int i;
int plus;
int plus2;

int main ()
{
	switch(fork())
	{
		case -1:
		{
			printf("hi \n");
		}
		case 0:
		{
			for(i=0;i<10;i++)
			{
			if(array[i]%2=0)
			{
			plus=plus+array[i]
			printf("%d \n",sum);
			}
			else
			{
			
			}
			}
			default :
			{
				while (1)
					printf("papa \n")
			}	
		}
	}
}

