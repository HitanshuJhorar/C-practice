/*
Q2. Harshad (Niven) Number Checker
Ek number Harshad hota hai agar wo apne digits ke sum se perfectly divisible ho.
Example: 18 → 1+8=9 → 18 % 9 == 0 ✔
Input: 1729 → Output: Yes
*/

#include<stdio.h>
#include<math.h>

int main(){
	int n=18;
	int p=0;
	int orignal=n;

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