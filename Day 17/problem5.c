/*
Q5. Neon Number Checker
Ek number neon hota hai agar uske square ke digits ka sum us number ke barabar ho.
Example: 9 → 9²=81 → 8+1=9 ✔
Input: 45 → Output: No
*/

#include<stdio.h>
#include<math.h>

int main(){
	int n=9,p=0,orignal=n;
	int square=round(pow(n,2));

	while(square>0){
		p+=square%10;
		square=square/10;
	}

	if(n==p){
		printf("Yes");
	}
	else{
		printf("No");
	}

	return 0;
}
