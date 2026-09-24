


#include <stdio.h>

int main() {
    int n , positive =0 ,negative=0,zero=0 ;
    printf("Enter size of array:  ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements  of array: \n",n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     
    for (int i = 0; i < n; i++) {
        if(arr[i]< 0){
              negative++;
        }
        else if(arr[i]== 0){
              zero++;
       }
      else {
            positive++;
      }
         }
         printf(" sum of positive number of array = %d\n",positive);
         printf(" sum of negative number of array = %d\n",negative);
         printf(" sum of zero number of array = %d",zero);
         

    return 0;
}