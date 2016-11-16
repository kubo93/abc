#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int checkCode(int num);
void checkCodeusingptr(int* pnum);
void printarr(int array[8][8]);

main()
{
	int code1, code2, code3, code4;
	int field[8][8];
	int i,j;
	int bit;
	int position;
	int positionr, positionc;
	
	printf("Welcome, author: Jakub Icso\n");
	printf("Enter code 1: \n");
	scanf("%d",&code1);
	
	printf("Enter code 2: \n");
	scanf("%d",&code2);
	
	printf("Enter code 3: \n");
	scanf("%d",&code3);
	
	printf("Enter code 4: \n");
	scanf("%d",&code4);
	
	code1 = checkCode(code1);
	code2 = checkCode(code2);
	checkCodeusingptr(&code3);
	checkCodeusingptr(&code4);
	
	printf("%d %d %d %d",code1,code2,code3,code4);
	
	for(j=7;j>=0;j--){
		bit = code1 & 1;
		field[1][j]=bit*(-1);
		
		bit = code2 & 1;
		field[3][j]=bit*(-1);
		
		bit = code3 & 1;
		field[5][j]=bit*(-1);
		
		bit = code4 & 1;
		field[7][j]=bit*(-1);
		
		code1>>=1;
		code2>>=1;
		code3>>=1;
		code4>>=1;
		}
		
		for(j=7;j>=0;j--){
		bit = code1 & 1;
		field[0][j]=bit*(-1);
		
		bit = code2 & 1;
		field[2][j]=bit*(-1);
		
		bit = code3 & 1;
		field[4][j]=bit*(-1);
		
		bit = code4 & 1;
		field[6][j]=bit*(-1);
		code1>>=1;
		code2>>=1;
		code3>>=1;
		code4>>=1;
		}
		
		printarr(field);
		printf("Enter position of the ship: (<0,63>)\n");
		scanf("%d",&position);
		
		if(position<0||position>63){
		printf("Wrong input: postion = %d",position);
		return 1;
	}
	
	positionr= position/8;
	positionc = position/8;
	if(field[positionr][positionc]==-1){
	printf("Wrong position - Island");
	return 2;}
}

if(positionc>0 && field[positionr][positionc-1]==0)
	field[positionr][positionc]=1;
if(positionc>0 && field[positionr][positionc-1]==0)
	field[positionr][positionc]=1;
if(positionc>0 && field[positionr][positionc-1]==0)
	field[positionr][positionc]=1;
if(positionc>0 && field[positionr][positionc-1]==0)
	field[positionr][positionc]=1;
	
	
	int count = 1;
	for(i=0;i<8;i++){
		for(j=0;j<8;j++)
		if(field[i][j]==count)
		if(positionc>0 && field[positionr][positionc-1]==0)
	field[positionr][positionc]=1;
if(field[i]>0 && field[positionr][positionc-1]==0)
	field[positionr][positionc]=1;
if(positionc>0 && field[positionr][positionc-1]==0)
	field[positionr][positionc]=1;
if(positionc>0 && field[positionr][positionc-1]==0)
	field[positionr][positionc]=1;
		
void printarr(int array[8][8]){
	int i,j;
	
	for(i=0;i<8;i++){
	for(j=0;j<8;j++)
	printf("%.2d",array[i][j]);
	}
	printf("\n");
}


int checkCode(int num){
	if(num>=0 && num <=pow(2,16)-1 )
	return num;
	else return 0;}

void checkCodeusingptr(int *pnum){
	if(*pnum<0 || *pnum>pow(2,16)-1)
	*pnum=0;
}
