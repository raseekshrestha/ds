#include <stdio.h>

int main(){
    int arr1[2] = {2,3};
    int arr2[2] = {5,6};
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("(%d,%d) ",arr1[i],arr2[j]);
        }
    }

}