/*
Q5. Strong Number Checker
A number is strong if sum of factorials of digits = number itself.
Example: 145 → 1! + 4! + 5! = 145 ✔

Input: n = 145 → Output: Yes
Input: n = 123 → Output: No


*/

#include<stdio.h>

int main(){
	int n=145;
	int p=0;
	int orignal=n;
	while(n>0){
		int digit=n%10;
		int fact=1;
		for(int i=1;i<=digit;i++){
			fact*=i;
		}
		p+=fact;
		n=n/10;
	}
	if(p==orignal){
		printf("Yes, the number %d is strong number",orignal);
	}
	else{
		printf("No, the number %d is not a strong number",orignal);
	}
	return 0;
}