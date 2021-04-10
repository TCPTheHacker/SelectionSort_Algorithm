#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int arr[10];
void get_nums() {
	for (int i = 0; i < 10 && arr[i] != 'q'; ++i) {
		// For the length of the array (10), increment and scan input 10 times 
		printf("Press Q to exit		|\nEnter another number: ");
		scanf("%d", &arr[i]);
	}
}
// For the sort function, we are using a selection sort algorithm. For this, we have to build another function. [Time Complexity: O(n2)]

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void sort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < n; j++)
        {
        	if (arr[j] < arr[min_idx]) 
        	{
        		min_idx = j;
        	} 
        }   
        // Swap the found minimum element with the first element 
        swap(&arr[min_idx], &arr[i]); 
    }
}
void out_nums() {
	sort(arr, 10);
	for (int i = 0; i < 10; ++i) {
	    printf("%d ", arr[i]);
	}
}
int main(void) {
	get_nums();
	out_nums();
	return 0;
}