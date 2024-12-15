#include<stdio.h>
	void swap(int* num1, int* num2); 
int main(){
	int number1 =26;
	int number2 =3 ; 
		swap(&number1 ,&number2 );
		 printf("%d\n",number1 ) ;
		 printf("%d\n",number2 ) ;

	return 0 ; 
} 
	void swap (int *num1 , int *num2){
		int temp = *num1 ;
		*num1 = *num2 ;
	  	*num2= temp ; 
			 printf("%d\n",*num1);
			 printf("%d\n",*num2); 
} 
