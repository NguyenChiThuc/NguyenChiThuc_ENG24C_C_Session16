#include <stdio.h>
	void updateElement(int *array, int size, int newValue, int position){
	    if (position < 0 || position >= size){
	        printf("\nVi tri khong hop le!\n");
	        return;
	    }
	    array[position] = newValue;
}
	int findElement(int *array, int size, int target){
	    for (int i = 0; i < size; i++){
	        if (array[i] == target){
	            return i;
	        }
	    }
	    return -1; 
	}
	
	int main(){
	    int arr[] = {1, 2, 4, 5, 6, 7};
	    int size = sizeof(arr) / sizeof(arr[0]);
	    	printf("Nhap mang ban dau: ");
	    for (int i = 0; i < size; i++){
	        printf("%d ", arr[i]);
	}
	    int target = 7;
	    int position = findElement(arr, size, target);
	    if (position != -1) {
	        printf("\nPhan tu %d duoc tim thay tai vi tri: %d\n", target, position);
	    } else {
	        printf("\nPhan tu %d khong ton tai trong mang!\n", target);
	    }	
	    return 0;
}
