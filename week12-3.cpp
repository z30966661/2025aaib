///week12-3.cpp
///Fibonacci 數列(前兩項相加,就是下一項)
///要把他列出來 使用for迴圈and陣列
#include <stdio.h>
int main()
{
    int a[30]={0, 1};///陣列宣告,有前兩項,後面補0
    printf("1 ");///最前面的那項
    for(int i=2; i<30; i++){
        a[i]=a[i-1]+a[i-2];
        printf("%d ",a[i]);
    }
}
