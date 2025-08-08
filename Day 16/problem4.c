/*
Q4. Sum of Digits until Single Digit (Digital Root)
Input: n = 9875
Output: 2
Because: 9+8+7+5 = 29 → 2+9 = 11 → 1+1 = 2
*/
#include<stdio.h>

int countdigit(int n, int p){
	if(n<10){
		return n;
	}

	while(n>0){
		int digit=n%10;
		p+=digit;
		n=n/10;
	}
	n=p;
	p=0;
	return countdigit(n,p);
}

int main(){
	int n=9875;
	int p=0;
	int orignal=n;
	int c=countdigit(n,p);
	printf("%d",c);
	return 0;
}