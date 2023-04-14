#include<stdio.h>
#include<conio.h>
struct student {
	char name[100];
	int rollno;
	int regno;
	
};
int main(){
	
	struct student s={"Sudharsan",12,12215949},m;
	m=s;
	printf("-------------------------\n");
	printf("Details of Student : \n");
	printf("Name : %s\n",m.name);
	printf("Roll : %d\n",m.rollno);
	printf("Rgno : %d\n",m.regno);
	return 0;
}
