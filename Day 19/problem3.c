/*
Q3. Strong Number Checker
Number Strong hota hai agar uske digits ke factorials ka sum original number ke barabar ho.
👉 Example: 145 → 1! + 4! + 5! = 145 ✔
👉 Input: 123 → Output: No
*/

#include<stdio.h>

int main(){
	int n=145,p=0,orignal=n;

	while(n>0){
		int digit=n%10;
		int z=1;
		for(int i=1;i<=digit;i++){
			z*=i;
		}
		p+=z;
		n=n/10;
	}

	if(orignal==p){
		printf("yes");
	}
	else{
		printf("No");
	}

	return 0;
}
