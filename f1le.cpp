//statistic upper,lower, digit, all char, rows, 

#include<stdio.h>
#include<ctype.h>

main() 
{
	FILE *fr;
	char c; 
	int coup = 0, colo = 0, codi = 0, coal = 0, coro = 0; 
	 
	
	fr = fopen("data.txt","r");
	
	if(fr==NULL){
	printf("Something happened \n");
	return 1;}
	
	while((c=fgetc(fr))!=EOF){
		
	if(isupper(c))
	coup++;
	
	if(islower(c))
	colo++;
	
	if(isdigit(c))
	codi++;
	
	if(c == '\n')
	coro++;}
	
	printf("%d upper %d lower %d digits  %d rows %d all",coup, colo, codi, coro, coal);
	
fclose(fr);

return 0;	
}
