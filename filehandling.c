#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	FILE *fp;
	char ch;
	fp=fopen("first.txt","r");
//	ch=fgetc(fp);
//	printf("%c",ch);
	if (fp==NULL){
		printf("File does not exist");
	}
	else{
		ch=fgetc(fp);
		while(ch!=EOF){
			printf("%c",ch);
			ch=fgetc(fp);
		}
	}
}
