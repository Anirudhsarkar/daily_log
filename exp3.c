#include <stdio.h>
int main(){
    int l;
    printf("ENter the space : ");
    scanf("%d",&l);
    int a[l];
    for(int i =0;i<l;i++){
    printf("ENter the elements : ");
    scanf("%d",&a[i]);
    }
    int temp , i , j ;

    for (i = 0; i < l; i++)
    {
       
        if ((i % 2 == 0 && a[i] > 0) || (i % 2 == 1 && a[i] < 0))
        {
            for (j = i + 1; j < l; j++)
            {
                if ((a[i] > 0 && a[j] < 0) || (a[i] < 0 && a[j] > 0))
                {
                    temp = a[j];
                    while (j > i)
                    {
                        a[j] = a[j - 1];  
                        j--;
                    }
                    a[i] = temp;
                    break;
                }
            }
        }
    }

    for (i = 0; i < l; i++)
        printf("%d ", a[i]);

    return 0;
}
