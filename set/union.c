#include <stdio.h>

int main(){
    int s1=5,s2=5;
    int in = (s1>s2) ? s1 : s2;

    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {4,5,6,7,8};
    int arr3[10],i,a;
    int found=0;

    for (i=0;i<=5;i++){
        arr3[i] = arr1[i];
    }
    i--;


    for (a = 0 ; a < 5 ; a++){
        for (int b = 0;b<10;b++){
            found = 0;
            if (arr2[a] == arr3[b]){
                found = 1;
                break;
            }
        }
        if (!found){ //list ma xaina vane add garney
            arr3[i++] = arr2[a];
        }

    }

    for (int k=0;k<i;k++){
        printf("%d\n",arr3[k]);
    }

}