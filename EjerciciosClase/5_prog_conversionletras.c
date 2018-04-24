/*-------------------------------------------------------------*/
/*Autor Daniel Pedro Lopez Cruz--------------------------------*/
/*E-mail: Elcrackdani.1999@gmail.com---------------------------*/
/*Fecha de creacion : 23 de abril del 2018---------------------*/
/*Fecha de actualizacion: 24 nde abril del 2018-----------------*/
/*Descripcion:  conversion de letras-------------------------- */

/*declaracion de bibliotecas*/
#include <stdio.h>
/*definir una constante*/

const int tamanio = 5;

/*declaracion de la funcion principal*/
int main(void)

{
  char c;
  char array[tamanio] , array2[tamanio];


  int index = 0;
  /*Leer caracter a caracter*/
  while((c = getchar()) !='\n')

  {
    /*validando unicamente caracter: letras minusculas*/
    if(c >= 97 && c <= 122) 
    {
    c = c-32;
    array[index] = c;
    index++;
    }

  }
  printf("\n");
  for(int i=0; i<tamanio; i++)
{
  printf("%c",array[i]);
}
  printf("\n");
  index = 0;

 /*Leer caracter a caracter*/
while((c = getchar()) !='\n')

  {
    /*validando unicamente caracter: letras minusculas*/
    {
    if(c >= 65 && c <= 90)
    c = c+32;
    array2[index] = c;
    index++;
    }

  }
  printf("\n");
  for(int i=0; i<tamanio; i++)
{
  printf("%c",array2[i]);
}

  printf("\n");


  return 0;
}
