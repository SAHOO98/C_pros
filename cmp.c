#include <stdio.h>

int main()
{
    int n,i,k;
    scanf("%d%d",&n,&k);
    long s = 0;
    long ar[n],ans;
    for (i=0;i<n;i++){
        ar[i] = (i+1)*5;
    }
    for(i=0;i<n;i++){
        s = s+ar[i];
        if(s+k<=240){
        ans = i+1;
        
        if(s+k==240)
        break;

        }
    }
    printf("%d\n",ans);

    return 0;
}
