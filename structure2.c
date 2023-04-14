#include<stdio.h>
#include<conio.h>

struct student {
	char name[100];
	int roll;
	float cgpa;
};
int main(){
	int i,j,n,m[100];
	struct student s[100];
	printf("Enter number of students :");
	scanf("%d",&n);
	for (i=0;i<=n-1;i++){
		fflush(stdio)
		printf("Name of the Student %d: ",i+1);
		gets(s[i].name);
		printf("Roll no of the Student %d: ",i+1);
		scanf("%d",&s[i].roll);
		printf("CGPA of Student %d: ",i+1);
		scanf("%f",&s[i].cgpa);
	}
	for (i=0;i<=n-1;i++){
		for (j=0;j<=n-1;j++){
			if (s[i].cgpa>s[j].cgpa){
				break;
			}
			else{
				m[i]++
				
			}
			
		}
		
	}
	
}
