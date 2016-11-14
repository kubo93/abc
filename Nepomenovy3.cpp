#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int generator(int n){
	
	int *pole = (int*) malloc(n*sizeof(int));
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++){
	*(pole+i)=rand()%20;}	
}

main()
{
int n=12;
int* vysledok = generator(n);
int i;
int *temp=vysledok;
for(i=0;i<n;i++)
printf("%d  ",*temp++);
free(vysledok); 

	
	return 0;
}
