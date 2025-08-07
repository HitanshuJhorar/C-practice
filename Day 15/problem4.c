/*Q4. Reverse a Number using while loop
Input: n = 1234
Output: 4321*/

#include<stdio.h>

int main(){
	int n=1234;
	int temp=0;
	int original=n;
	while(n>0){
		int digit =n%10;
		temp=temp*10+digit;
		n=n/10;
	}
	n=temp;
	printf("The reverse number of %d is %d",original,n);
	return 0;
}