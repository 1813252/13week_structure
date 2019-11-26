#include <stdio.h>
#include <stdlib.h>0

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct student {
	
	int ID;
	char name[10];
	double grade;
	
};


int main(int argc, char *argv[]) {
	
	struct student s1 ={24,"juwon",4.3};	
	
	s1.ID=123456;
	strcpy(s1.name,"juwon");
	s1.grade=4.2;
	
	printf("ID : %d",s1.ID);
	printf("name : %s\n",s1.name);
	printf("grade : %f\n",s1.grade);
	
	return 0;
}
