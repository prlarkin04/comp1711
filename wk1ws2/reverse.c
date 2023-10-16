#include <stdio.h>
int main() {
    int n = 5;
    int arr[] = {2,4,6,8,10};
    int temp;
    
    for(int i = 0; i<n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-1-i] = temp;
    }
    for (int i = 0; i < n; i++){
        printf("%d,", arr[i]);
    }

    return(0);

}
