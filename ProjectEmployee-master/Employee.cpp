#include <string.h>
#include "Employee.h"
#include "struct.h"




bool isLeapYear(int year){
   return year>0&&year%4==0?true:false;
}

bool isValidDate(int dd, int mm, int yy){
  if(yy<0)
       return false;
  if(mm<1 || mm>12)
       return false;
  if(mm==1 || mm ==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12)	  {
      if(dd>0 && dd<32)
          return true;
      else
	      return false;    
  }      
  if(mm==4 || mm==6 || mm==9 || mm==11){
  if(dd>0 && dd<31)
          return true;
      else
	      return false;
  }
  if(mm==2){
    if(dd>0 && dd<29)
        return true;
    else{
        if(isLeapYear(yy) && dd==29)
            return true;
        else
		    return false;    
	}    
  }

  return false;
}

bool isValidSex(char z){
    if(z=='m' || z=='M' || z=='F' || z=='f')
       return true;
    else
	   return false;   
}



FILE* openFile(char* fileName, char* mode){
   if(fileName==NULL || strlen(fileName)<5)
       return NULL;
   FILE *fr;
   fr=fopen(fileName,mode);
   if(fr==NULL){
      printf("#nError!. I can't open file: %s",fileName);
      return NULL;
   } 
   else
      return fr;   
}

void closeFile(FILE *fr){
   if(fr!=NULL)
      fclose(fr);
}

int getDataFromFile(FILE *fr, struct person employees[]){

   if(fr==NULL)
      return NULL;
   int countEmp=0;
   while( fscanf(fr, "%d%d%d%f %c %s%s", &employees[countEmp].day,
    &employees[countEmp].month, &employees[countEmp].year , 
	&employees[countEmp].salary , &employees[countEmp].sex, 
	&employees[countEmp].firstname, &employees[countEmp].lastname)!=EOF)   {
	   countEmp++;
       if(countEmp>=SIZE)
         return 0;
   }

if(isValidDate(dd mm yy) == false || isValidSex(z) == false)
	


   
   return countEmp;  
}

void sortDataByBirthday(struct person *p, int count){
	
	//year
	int j,k;
	for(j=0;j<i-1;j++)
	{
		for(k=0;k<i-1;k++)
		{
			if(osoby[k].year > osoby[k+1].year)
			{
				struct person temp = osoby[k];
               osoby[k]=osoby[k+1];
               osoby[k+1]=temp;	
			}
		}
	}
	
	//month

		for(j=0;j<i-1;j++)
	{
		for(k=0;k<i-1;k++)
		{
			if(osoby[k].month > osoby[k+1].month)
			{
				struct person temp = osoby[k];
               osoby[k]=osoby[k+1];
               osoby[k+1]=temp;	
			}
		}
	}
	
	//day
		for(j=0;j<i-1;j++)
	{
		for(k=0;k<i-1;k++)
		{
			if(osoby[k].day > osoby[k+1].day)
			{
				struct person temp = osoby[k];
               osoby[k]=osoby[k+1];
               osoby[k+1]=temp;	
			}
		}
	}
	
	if(person[i].year == person[i+1].year)
	if(person[i].month == person[i+1].month)
	if(person[i].day == person[i+1].day)
}

void sortDataByLastName(struct person *p, int count);
