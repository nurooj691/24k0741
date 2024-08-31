#include<stdio.h>
int main() {
	char gender;
	printf("please enter your gender?(M/F)");
	scanf("%c", &gender);
	gender == 'M' ? printf("Male") : printf("Female");
	
	return 0;
	
}
	
