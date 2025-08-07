//Q1. Print Sum of Digits of a Number
//Input: n = 5632
//Output: 5 + 6 + 3 + 2 = 16



#include<stdio.h>

int main(){
	int n=5632;
	int p=0;
	int orignal=n;
	while(n>0){
		p+=n%10;
		n=n/10;
	}
	printf("The sum of the all digits of %d is %d",orignal,p);
	return 0;
}