/*
Q3. Magic Number Checker
Magic number wo hota hai jisme digits ka sum karte-karte last me 1 aa jaye.
Example: 19 → 1+9=10 → 1+0=1 ✔
👉 Input: 458 → Output: No
*/

#include<stdio.h>
#include<math.h>

int magic(int n){
	
	for(int i=0;n>=10;i++){
		int p=0;
		while(n>0){
			p+=n%10;
			n=n/10;
		}
		n=p;
	}
	return (n==1);
}

int main(){
	int n=19;
	int ori=n;
	int c=magic(n);
	if(c){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}

