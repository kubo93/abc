//otv subor 4 cisla zistit najv

#include<stdio.h>

main()
{
	FILE *fr;
	
	fr= fopen("num.txt","r");
	int i, min = 99999, max = 0, num;
	char c;
	;
	
if (fr == NULL){
	printf("Unknown error\n");
	return 1;
}

	fscanf(fr, "%d", &num );

for( int i = 0; i < 4; i++ )
{
   fscanf( fr, "%d", &num );
   if( num > max )
       max = num;
   if( num < min )
       min = num;
}
printf(" Min %d Max %d\n", min, max );
fclose(fr);
return 0;
	
	
}
