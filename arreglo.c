#include <stdio.h>

int array1 [5]= {1,2,3,4,5};
int array2 [5];
int *copy;

void CopiasArreglo(int *copy)
{
	int i;
	for(i=0;i<5;i++){
	array2[i]= *copy+i; 
}
}




int main ()
{
	

	copy=array1;
	CopiasArreglo(copy);
	int i;
	for(i=0;i<5;i++){

	

	
	printf("%d \n", array2[i]);

}
}
