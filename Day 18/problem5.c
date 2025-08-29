/*
Q5. Disarium Number Checker
Number disarium hota hai agar har digit ka digit^position ka sum number ke equal ho.
Example: 135 → 1¹ + 3² + 5³ = 135 ✔
👉 Input: 175 → Output: Yes
*/

#include<stdio.h>
#include<math.h>
int main(){
	int n=135,p=0,ori=n;
	while(n>0){
		int digit=n%10;
		for(int i=1;i<=ori;i++){
			digit = (int)round(pow(digit,i));
		}
		p+=digit;
		n=n/10;
	}
	if(p==ori){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}

