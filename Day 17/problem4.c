/*
Q4. Sum of Prime Digits
Ek number ke sirf prime digits (2, 3, 5, 7) ka sum print karo.
Example: 75326 → Prime digits = 7+5+3+2 = 17
Input: 98765 → Output: 17
*/

#include<stdio.h>
#include<math.h>

int main(){
	int n=75326,p=0,orignal=n;

	while(n>0){
		int digit=n%10;
		int isprime=1;
		for(int i=2;i<=sqrt(digit);i++){
			if(digit%i==0){
				isprime=0;
				break;
			}
		}
		if(isprime){
			p+=digit;
		}
		n=n/10;
	}
	printf("The sum of prime numbers is %d",p);
	
	return 0;
}
