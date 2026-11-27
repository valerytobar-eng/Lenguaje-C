#include <stdio.h>

int main() {
	int arr[]={20,30,15,12,47};
	int *aparr=arr;
	
	for (int i =0; i <5; i++){
		printf ("El elemento: [%d] contiene %d\n", i, *(aparr+i));
		
	}
	
	return 0;
}

