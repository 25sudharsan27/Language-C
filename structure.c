#include <stdio.h>
#include <conio.h>

struct student {
	char name[100];
	int rollno;
	int regno;
	
};
int main(){
	struct student s={"Sudharsan",12,1221331};
	printf("----------------------\n Details for student\n");
	printf("%s\n",s.name);
	printf("%d\n",s.rollno);
	printf("%d\n",s.regno);
	return 0;
}
