#include<stdio.h>

int main(){
    int arr1[5] = {1,4,5};
    int arr2[5] = {4};
    int arr3[5],found=0,k;

    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            found = 0;
            if (arr1[i] == arr2[j]){
                found = 1;
                // temp = arr1[i];
                break;
            }
        }
        if (!found){
            arr3[k++] = arr1[i];
        }
    }

    for (int i=0;i<k;i++){
        printf("%d\n",arr3[i]);
    }
}