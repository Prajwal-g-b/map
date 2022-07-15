#include<stdio.h>
 #include<conio.h>
 int main()
 {
float per;
char grade;
printf("enter the percentage\n");
scanf("%f",&per);
	if(per>=90)
	grade='a';
	else if((per>=80) && (per<90))
	grade='b';
 else if((per>=70) && (per<80))
	grade='c';
 else if((per>=60) && (per<70))
grade='d';
 else grade='e';
	switch(grade)
	{
	case 'a':printf("excellent\n");
	break;
case 'b':printf("very good\n");
break;
	case 'c':printf("good\n");
	break;
	case 'd':printf("above average\n");
	break;
	case 'e':printf("satisfactory\n");
	break;
	}
	printf("the percentage is %f and the grade is %c\n",per,grade);
	return 0;
 }
