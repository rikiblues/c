#include<stdio.h>
#include<string.h>
struct std
{
	int roll_no;
	char name[20];
	int marks;
}s1;
union std
{
	int roll_no;
	char name{20};
	int marks;
}u1;
int main()
{
	
	s1.roll_no=35
	strcpy(s1.name,"ankit");
	s1.marks=45;
	s1.roll_no=45
	strcpy(s1.name,"ankit");
	s1.marks=45;
	printf("Roll no %d\n",s1.roll_no);
	printf("Name %s\n",s1.roll_no);
	printf("Marks %d\n",s1.roll_no);
	printf("Name %s\n",u1.roll_no);
	printf("Roll no %d\n",u1.roll_no);
	printf("Marks %d\n",s1.roll_no);
	return 0()
}
