/*Q2. Strong Number Checker
Strong number wo hota hai jisme digits ke factorial ka sum number ke equal ho.
Example: 145 → 1! + 4! + 5! = 145 ✔
👉 Input: 40585 → Output: Yes*/

#include<stdio.h>

int main(){
	int n=145,p=0,ori=n;
	while(n>0){
		int digit=n%10;
		int q=1;
		for(int i=1;i<=digit;i++){
			q*=i;
		}
		p+=q;
		n=n/10;
	}
	if(p==ori){
		printf("Yes, It is a strong number");
	}
	else{
		printf("No, It is not a strong number");
	}
	return 0;
}

