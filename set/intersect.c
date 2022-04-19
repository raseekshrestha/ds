#include<stdio.h>


int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {4,5,6,7,8};
    int arr3[5];
    int found=0,k=0;

    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            if (arr1[i] == arr2[j]){
                arr3[k++] = arr1[i];
            }
        }
    }

    for (int i=0;i<k;i++){
        printf("%d\n",arr3[i]);
    }

}