#include <stdio.h>

int matriz[3][3];
int **ptr;
int *apuntador;
int *aput;

int main()
{
	
	
	matriz[0][0]=1;
	matriz[0][1]=2;
	matriz[0][2]=3;
	matriz[1][0]=4;
	matriz[1][1]=5;
	matriz[1][2]=6;
	matriz[2][0]=7;
	matriz[2][1]=8;
	matriz[2][2]=9;

//	aput = matriz[1];
	apuntador= matriz[0];
//	apuntador= matriz[1];	

	ptr = &apuntador;
//	ptr = &aput;

	printf("%d \n",*(*(matriz+1)+2));	
	printf("%d \n", *(*(ptr+1)+2));


}
