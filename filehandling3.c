#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("first.txt","r");
	fp2=fopen("first1.txt","a");
	
	if (fp1==NULL){
		printf("File does not exist");
	}
	else {
		while(1)
		{
			ch=fgetc(fp1);
			if (ch==EOF)
			break;
			else
			fputc(ch,fp2);
		}
		fclose(fp2);
	}
	return 0;
}
