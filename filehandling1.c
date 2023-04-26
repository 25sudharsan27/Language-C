#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	FILE *fp;
	char ch;
	fp= fopen("first.txt","w");
	ch=getchar();
	fputc(ch,fp);
	while (1)
	{
		ch=getchar();
		if (ch=='.')
			break;
		fputc(ch,fp);
	}
	
}
