#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	int roll;
	float cgpa;
	char name[20];
	fp=fopen("file.txt","r");
	if (fp==NULL){
		printf("not exist");
		
	}
	else
	{
		fscanf(fp,"%d%f%s",&roll,&cgpa,name);
		printf("roll is %d\n",roll);
		printf("cgpa is %f\n",cgpa);
		prinft("name is %s\n",name);
		
	}
}
