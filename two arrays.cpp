#include <stdio.h>

int max_difference(int arr[], int n) {
    if (n < 2) -
        return 0;
    #include <stdio.h>
  int main() 
  
  int arr[] = {2, 5, 1, 7, 3, 9, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max_diff = 0;
    int i, j;
    
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            int diff = arr[j] - arr[i];
            if(diff > max_diff) {
                max_diff = diff;
            }
        }
    }
    
    printf("The maximum difference is %d", max_diff);
    return 0;

    
    int min_val = arr[0];
    int max_val = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        } else if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val - min_val;
}
