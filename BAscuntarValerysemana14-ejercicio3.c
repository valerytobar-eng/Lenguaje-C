#include <stdio.h>
void modificarArreglo (int *arreglo, int dimension)
    {
		for (int i = 0; i<dimension; i++){
	    arreglo [i]*=2;
	}
}	
int main (){
	
	int numeros[]={1, 2, 3, 4, 5, 6};
	int dimension = 5;
	modificarArreglo (numeros, dimension) ;
	
	for (int i =0; i <dimension ; i ++){
		printf ("El elemento: [%d] contiene %d\n",i,numeros[i]);
	}
	return 0;
}

