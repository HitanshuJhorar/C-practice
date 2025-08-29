/*
Q4. Neon Number Checker
Number Neon hota hai agar uske square ke digits ka sum original number ke barabar ho.
👉 Example: 9 → 9² = 81 → 8+1=9 ✔
👉 Input: 7 → Output: No
*/

#include<stdio.h>

int main(){
	int n=9,sq=n*n,orignal=sq,p=0;

	while(sq>0){
		p+=sq%10;
		sq=sq/10;
	}

	if(p==n){
		printf("Yes");
	}
	else{
		printf("No");
	}

	return 0;
}
