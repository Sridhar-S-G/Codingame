#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    // the number of temperatures to analyse
    int n,result,max_neg=-273,max_pos=5526;
    scanf("%d", &n);
    if(n==0){
        printf("");
    }
    for (int i = 0; i < n; i++) {
        // a temperature expressed as an integer ranging from -273 to 5526
        int t;
        scanf("%d", &t);
        if(n==1){
            result=t;
            break;
        }
        if(t<0){
            if(t>max_neg)
            max_neg=t;
        }else if(t>0){
            if(t<max_pos)
            max_pos=t;
        }

        if((0-max_neg)<max_pos)
        result=max_neg;
        else
        result=max_pos;
        
    }

    printf("%d\n",result);

    return 0;
}