/* Q3. Check Whether Number is Armstrong
Number is Armstrong if sum of cubes of its digits = number itself.
Example: 153 → 1³ + 5³ + 3³ = 153 ✔
Input: n = 153 → Output: Yes*/

#include<stdio.h>
#include<math.h>


int main(){
	int n=153;
	int p=0;
	int orignal=n;
	while(n>0){
		int digit=n%10;
		p += (int)round(pow(digit, 3));
		n=n/10;
	}
	if(p==orignal){
		printf("Yes, it is a armstrong number");
	}
	else{
		printf("No, it is not a armstrong number");
	}
	return 0;
}
