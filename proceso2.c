#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>


int arreglo [10]= {1,2,3,4,5,6,7,8,9,10};
int i,j;
int pares,impares;

int main ()
{
	i=0;
	j=0;
	pares = impares = 0;

	switch(fork())
	{
		case -1:
		{
		printf("hubo problemas al crear el proceso \n");
		}
		case 0:
		{
			while (i<10)
			{
				if(i % 2 ==0)
					pares = pares + arreglo[i];
					i++;
			}
				printf("Pares = %d \n",pares);

		}break;
		default:
		{
			while(j<10)
			{
				if(j % 2==1)
				impares = impares + arreglo[j];
				j++;
			}
				printf("Impares = %d  \n",impares);
		}break;
	}

}
