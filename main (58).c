


#include <stdio.h>

int main() {
    int n , odd , even;
    printf("Enter size of array:  ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements  of array: \n",n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     odd=0;
     even=0;
    for (int i = 0; i < n; i++) {
        if(arr[i]%2 == 0){
              even+=arr[i];
        }
        if(arr[i]%2 != 0){
              odd+=arr[i];
       
         }
      
         }
         printf(" sum of odd number of array = %d\n",odd);
         printf(" sum of even number of array = %d",even);
         

    return 0;
}