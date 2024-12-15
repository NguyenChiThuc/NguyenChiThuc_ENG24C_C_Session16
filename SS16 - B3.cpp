#include<stdio.h>
	int calculateSum (int *num1 , int *num2 ); 
	int main(){
		int number1 =10;
		int number2=3 ;
		calculateSum(&number1 , &number2); 
		return 0; 
} 
	int calculateSum (int *num1 , int *num2 ){
		int sum = *num1 + *num2 ;
		printf("%d",sum); 
		return sum ; 
	
}
