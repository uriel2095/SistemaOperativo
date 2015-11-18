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
	int plus =0;	

	printf("Numero de procesos \n");
	scanf("%d",&numero);
	archivo =fopen ("suma.txt","w");
	fclose(archivo);
	pid = procesos(numero);

	for(i = 0; i < 100; i++){
	array[i] = i+1;
	}

	if(pid == 0){
		for(k = 0; k <= numero; k++){
		wait(&status);
}
	archivo = fopen ("suma.txt", "r");
	while (!feof(archivo)) {
	fgets(cadena, 10, archivo);
	if (!feof(archivo)){
	puts(cadena);
	plus += atoi(cadena);
	printf("%d\n", plus);
	}
}
	fclose(archivo);
	printf("Soy el padre %d con pid%d la suma es:%d \n", pid,getpid(),plus);
	exit(0);
	}else{
		for(j = ((pid-1)*10); j <= 9+((pid-1)*10); j++){
		plus += array[j];
}
		archivo = fopen ("suma.txt", "a+");
		fprintf(archivo, "%d\n", plus);
		fclose(archivo);
		printf("Soy el hijo %d con pid%d y la suma: %d \n", pid,getpid(),plus);
		exit(0);
	}
}

