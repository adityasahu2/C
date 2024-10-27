#include <stdio.h>
int main(){
	int marks;
	char grade;
	printf("Enter marks: ");
	scanf("%d",&marks);
	if(marks < 0 || marks > 100){
		printf("Invalid Marks\n");
		return 1;
	}
	switch((marks-1) / 10){
		case 9:
			if(marks >= 95){
				grade = 'O';
				break;
			}
		case 8:
			grade = 'A';
			break;
		case 7:
			grade = 'B';
			break;
		case 6:
			grade = 'C';
			break;
		case 5:
			grade = 'D';
			break;
		case 4:
			grade = 'E';
			break;
		default:
			if(marks >= 40)
				grade = 'E';
			else 
				grade = 'F';
	}
	printf("Grade: %c\n",grade); 
	return 0;
}
