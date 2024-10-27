#include <stdio.h>
int main(){
	int date,month,year,day=0;
	int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	printf("Enter a date in format(dd mm yyyy): ");
	scanf("%d%d%d",&date, &month, &year);
	if (month > 0 && month <= 12 && date > 0 && date <= arr[month -1] && year > 0){
		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
			arr[1] = 29;
		for (int i = 0; i < month-1; i++)
			day += arr[i];
		day += date;
		printf("Number of days: %d\n",day);
	}
	else
		printf("Invalid Input\n");
	return 0;
}
