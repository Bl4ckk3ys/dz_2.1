#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//у меня почему-то не ставится ни в какую локализация, так что пишу транслитом)
int main()
{   
    int s1, s2, s3, null;
    double ans;
    
    scanf("%d %d %d", &s1, &s2, &s3);
    ans = (double)(s1+s2+s3)/3;
    ans = round(ans);

    switch((int)ans){
        case 2: printf("Dvoechnik"); break;
        case 3: printf("Troechnik"); break;
        case 4: printf("Horoshist"); break;
        case 5: printf("Otlichnik"); break;
    }
    

    scanf("\n%d",&null);
    return 0;
}