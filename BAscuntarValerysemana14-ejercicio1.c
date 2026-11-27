#include <stdio.h>

int main() {
	int arr[]={20,30,15,12,47};
	int *aparr=arr;
	
	printf("primer elemento: %p\n", aparr);
	printf ("primer elemento: %d\n", *aparr);
	printf ("segundo elemento: %d\n", *(aparr+1));
	
	return 0;
}

