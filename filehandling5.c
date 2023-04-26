#include <stdio.h>
#include <conio.h>



int main(){
	FILE *fp;
	char p[100];
	fp=fopen("sudharsan.txt","r");
	fscanf(fp);
	printf("%s\n",p);
	fclose(fp);
	
}
