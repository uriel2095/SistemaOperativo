#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int procesos(int nProc)
{       
        int i;
        for(i=1;i<=nProc;i++)
        if(fork()==0)
                return i;
		return 0;
 
}
int main()
{
	char cadena[10];
	FILE *archivo;
	int numero;
	int array[100];
	int pid,i,k,j,status;
	int valor = 0;	

	printf("Numero de procesos \n");
	scanf("%d",&numero);

	archivo = fopen ("Colocar.txt", "w");
	fprintf(archivo ,"5\n");
	fprintf(archivo ,"8\n");
	fprintf(archivo ,"9\n");
	
	fclose(archivo);
	pid = procesos(numero);

	if(pid == 0){
		for(k = 0; k <= numero; k++){
		wait(&status);
}

	}else{

	archivo = fopen ("Colocar.txt", "r");


	for(j = (pid); j <= 10; j++){
		while (!feof(archivo)) {
		fgets(cadena, 10, archivo);
	if (!feof(archivo)){
	valor = atoi(cadena);
	
	if (valor == j){
		printf("Hola mundo %d\n " ,pid,getpid(),valor);
					}	

				}
			}
		}
	}

	exit(0);
	fclose(archivo);

}
