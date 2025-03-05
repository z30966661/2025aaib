#include <stdio.h>
int main()
{
    int ans =0;
    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        ans += i;
    }
    printf("%d",ans);
}
