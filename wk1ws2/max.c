#include <stdio.h>
int main() {
    int arr[]={2,6,3,69,23};
    int large = arr[0];

    for (int i=1; i <5; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    printf("%d", large);
    return(0);
}
