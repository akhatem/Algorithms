#include <stdio.h>


int main(){
    int a[100], freq[100], n;
    scanf("%d", &n);
    if(n == 0) return -1;
    int i = 0;
    while(i < 100) freq[i++] = 0;
    int maxA = 0;
    for(int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
        if(i == 0) maxA = a[i];
        if(a[i] > maxA) maxA = a[i];
            ++freq[a[i]];
        ///printf("freq[%d] = %d\n", a[i], ++freq[a[i]]);
    }
    ///printf("maxA = %d\n", maxA);
    printf("\n");
    i = 0;
    while(i <= maxA){
        printf("freq[%d] = %d", i, freq[i]);
        if(i < maxA) printf(" ");
        printf("\n");
        ++i;
    }


    return 0;
}
