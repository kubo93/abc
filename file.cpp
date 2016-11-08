#include<stdio.h>
#include<ctype.h>

main()
{
FILE *fr,*fw;

fr= fopen("data.txt","r");
fw= fopen("result.txt","w");
if(fr==NULL){
printf("Error, something happened.\n");
return 1;	
}

if(fw==NULL){
printf("Error, something happened.\n");
return 1;	
}

char c;
while ((c=fgetc(fr))!=EOF){
	putchar(c);
	if(c<= 'A'){
	(toupper(c));}
	if(c>='Z'){
	(tolower(c));}
	fputc(c,fw);
}
fclose(fr);
fclose(fw);
}
