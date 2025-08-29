/*
Q2. Harshad (Niven) Number Checker
Number Harshad hota hai agar vo apne digits ke sum se divisible ho.
👉 Example: 18 → 1+8=9, 18%9==0 ✔
👉 Input: 21 → Output: No
*/

#include<stdio.h>

int main(){
	int n=18,p=0,orignal=n;
	while(n>0){
		p+=n%10;
		n=n/10;
	}

	if(orignal%p==0){
		printf("Yes");
	}

	else{
		printf("No");
	}

	return 0;
}