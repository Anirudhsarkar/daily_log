#include <stdio.h>
int main(){
    int a ; 
    printf("Enter the size of array : ");
    scanf("%d",&a);
    int array[a];
    for(int i = 0 ; i<a;i++){
    printf("Enter the elements : ");
    scanf("%d",&array[i]);
        }

     int k ;
     printf("Enter the number of k : ");
     scanf("%d",&k);
     int maxlen = 0;
     for (int i = 0; i < a; i++) { 
        int zeroCount = 0;
        for (int j = i; j < a; j++) {
            if (array[j] == 0)
                zeroCount++;

            if (zeroCount <= k) {
                int len = j - i + 1;
                if (len > maxlen)
                    maxlen = len;
            } else {
                break;
            }
        }
    }

    printf("Maximum consecutive ones = %d\n", maxlen);
    for(int i = 1 ; i<=maxlen ; i++){
        printf("1 ");

    }
    return 0;

}
