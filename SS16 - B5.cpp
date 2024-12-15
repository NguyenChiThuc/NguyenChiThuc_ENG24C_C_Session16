#include <stdio.h>
	void updateElement(int *array, int size, int newValue, int position){
	    if (position < 0 || position >= size){
	        printf(" khong hop le!\n");
	    }
	    array[position] = newValue;
}
	
	int main(){
	    int arr[] = {1, 2, 3, 4, 5};
	    int size = sizeof(arr) / sizeof(arr[0]);
	    	printf("Mang ban dau: ");
	    for(int i = 0; i < size; i++){
	        printf("%d ", arr[i]);
	    }
	    int newValue = 10; 
	    int position = 2; 
	    	updateElement(arr, size, newValue, position); 
	    	printf("\nMang sau khi cap nhat: ");
	    for (int i = 0; i < size; i++) {
	        printf("%d ", arr[i]);
	    }
	
	    return 0;
}
