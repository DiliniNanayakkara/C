#include<stdio.h>
//#include<string.h>

struct student{
	char name[25];
	int age;
	char branch[10];
	char gender;
};

int main(){
	struct student s1;
	s1.age=18;
	strcpy(s1.name,"Amal");
	
	printf("Name of student 1; %s\n",s1.name);
	printf("Age of student 1; %d\n",s1.age);
	return 0;
}
