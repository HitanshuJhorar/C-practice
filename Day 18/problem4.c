/*
Q4. Spy Number Checker
Number spy hota hai agar uske digits ka sum = product ho.
Example: 1124 → Sum = 1+1+2+4=8, Product=1×1×2×4=8 ✔
👉 Input: 123 → Output: Yes
*/

#include<stdio.h>

int main(){
	int n=1124;
	int p=0;
	int q=1;
	int ori=n;

	while(n>0){
		p+=n%10;
		q*=n%10;
		n=n/10;
	}
	if(p==q){
		printf("Yes");
	}
	else{
		printf("No");
	}

	return 0;
}
