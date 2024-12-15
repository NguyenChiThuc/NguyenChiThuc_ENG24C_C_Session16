#include<stdio.h>
	void printArr (int *arr){
	  
	   int i=0 ;
		for(i=0;i<6;i++){
			printf("%3d",*(arr+i)); 
	} 
}
	int main(){
		int arr[]={1,2,3,5,7,6};
			printArr(arr); 
		
		return 0 ; 
} 
