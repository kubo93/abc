//in subor uzivatelov

#include<stdio.h>
#include<string.h>

struct person {
	int age;
	int salary;
	char firstname[20];
	char lastname[20];
};

main() {

	struct person osoba1;
    //osoba1.firstname = "Frank";  NOOOOOOOOOOOO
    strcpy(osoba1.firstname,"Frank");
    osoba1.age=22;

	struct person osoby[20];
	FILE *fr;
	fr = fopen("employees.dat", "r");
	
	if(fr == NULL){
	printf("Error, something happened.\n");
	return 1;
	}
	
	int i=0;
	while(fscanf(fr,"%d %d %s %s", &osoby[i].age, &osoby[i].salary, &osoby[i].firstname, 
																	&osoby[i].lastname)!=EOF)
																	{
																	i++;		
																	}


//salary
int j,k;
	for(j=0;j<i-1;j++)
	{
		for(k=0;k<i-1;k++)
		{
			if(osoby[k].salary > osoby[k+1].salary)
			{
				struct person temp = osoby[k];
               osoby[k]=osoby[k+1];
               osoby[k+1]=temp;	
			}
		}
	}
	
	
	printf("Sorted by salary:\n");
	for(j=0;j<i;j++)
	printf("%d %d %s %s\n",osoby[j].age, osoby[j].salary, osoby[j].firstname, osoby[j].lastname);
	printf("\n");

	//age
	for(j=0;j<i-1;j++)
	{
       for(k=0;k<i-1;k++)
	   	{
           if(osoby[k].age>osoby[k+1].age)
		   {
               struct person temp = osoby[k];
               osoby[k]=osoby[k+1];
               osoby[k+1]=temp;
    		}   
		}	
	
	}
	
	printf("Sorted by age:\n");
	for(j=0;j<i;j++)
	printf("%d %d %s %s \n",osoby[j].age, osoby[j].salary, osoby[j].firstname, osoby[j].lastname);
	printf("\n");
	
	
	//lastname
	for(j=0;j<i-1;j++)
	{
       for(k=0;k<i-1;k++)
	   {
           if(strcmp(osoby[k].lastname , osoby[k+1].lastname)>0)
		   {
               struct person temp = osoby[k];
               osoby[k]=osoby[k+1];
               osoby[k+1]=temp;
		   }
	   }
	}   

	printf("Sorted by lastname:\n");
	for(j=0;j<i;j++)
	printf("%d %d %s %s \n",osoby[j].age, osoby[j].salary, osoby[j].firstname, osoby[j].lastname);
	printf("\n");
	
	//name (by length)
	
	fclose(fr);
	return 0;
	
	
}
