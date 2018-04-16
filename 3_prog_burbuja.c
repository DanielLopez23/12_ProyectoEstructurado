/*-------------------------------------------------------------*/
/*Autor Daniel Pedro Lopez Cruz--------------------------------*/
/*E-mail: Elcrackdani.1999@gmail.com---------------------------*/
/*Fecha de creacion : 12 de abril del 2018---------------------*/
/*Fecha de actualizacion: 14 de abril del 2018-----------------*/
/*Descripcion: un programa que ordene un arreglo de numeros ente
ros de forma ascenente (se surge revisar el metodo de ordenamien
to : (burbuja))---------------------------------------------- */


#include <stdio.h>
int main(void)
{
	     int arreglo[10] = {7,1,4,5,6,9,2,3,0,8}, variable;
	     for (int i = 0; i < 10; ++i)
	{
	     for (int j = i+1; j < 10; ++j)
	{
			 if (arreglo[i]>arreglo[j])
	{
			 variable = arreglo[j];
	     arreglo[j] = arreglo[i];
			 arreglo[i] = variable;
	}
	}
	}
		  printf("esta es la lista de los numeros en Orden ascendente\n");
			for (int i = 0; i < 10; ++i)
	{
  	 printf("%d\n", arreglo[i] );
	}
		 puts("\n\n\n");
		 printf("esta es la lista de los numeros en Orden descendente\n");
		 for (int i = 9; i >= 0; --i)
	{
	   printf("%d\n", arreglo[i] );
	}
     return 0;
}
