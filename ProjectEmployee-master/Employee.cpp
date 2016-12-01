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
         
         if( (isValidDate(employees[countEmp].day, employees[countEmp].month, employees[countEmp].year) == true)
		&& (isValidSex(employees[countEmp].sex) == true) ) {
			countEmp++;
   }

countEmp++;
       if(countEmp>=SIZE)
         return 0;
	
}

   
   return countEmp;  
}

void sortDataByBirthday(struct person *p, int count){
	
	//year
	int j,k;
	for(j=0;j<count;j++)
	{
		for(k=0;k<count-1;k++)
		{
			if(p[k].year > p[k+1].year)
			{
				struct person temp = p[k];
               p[k]=p[k+1];
               p[k+1]=temp;	
			}
	
	
	//month

	else if(p[k].year == p[k].year)
		{
			if(p[k].month > p[k+1].month)
			{
				struct person temp = p[k];
               p[k]=p[k+1];
               p[k+1]=temp;	
			}
		

	
	//day
	else if(p[k].month == p[k+1].month)
		{
			if(p[k].day > p[k+1].day)
			{
				struct person temp = p[k];
               p[k]=p[k+1];
               p[k+1]=temp;	
			}
		}
	}
}
}
}

void sortDataByLastName(struct person *p, int count){
	
	int j,k;
	for(j=0;j<count;j++)
	{
		for(k=0;k<count-1;k++)
		{
			if(strcmp(p[k].lastname, p[k+1].lastname)>0)
			{
				struct person temp = p[k];
               p[k]=p[k+1];
               p[k+1]=temp;	
			}
		}
	}
}



