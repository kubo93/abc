//suma float, mes zar float, splatka float, urok float,

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void vypocetSplatky(float urok, int dlzka, float suma);

main()
{
	float urok, mes_zar, suma, cisZar;
	int dlzka;
	
	printf("Zadaj vysku sumy: \n");
	scanf("%f", &suma);
	
	printf("Zadaj vysku uroku: \n");
	scanf("%f", &urok);
	
	printf("Zadaj dlzku splacania v mesiacoch : \n");
	scanf("%f", &dlzka);
	
	printf("Zadaj cisty mesacny prijem: \n");
	scanf("%f", &cisZar);
	
	vypocetSplatky(suma, urok, dlzka);
	printf("%f",vypocetSplatky);
	
	maxPozicka()
	
	return 0;
}

void vypocetSplatky(float urok, int dlzka, float suma)
{	float *mes_spl;
	float urokp = (urok/100)+1;
	float mes_spl = (suma * urokp)/dlzka;	
}

void maxPozicka(float urok, float cisZar, int dlzka)
{
	max = 	
}

void maxSpl(float cisZar)
{
	float max = cisZar/15; 
}
