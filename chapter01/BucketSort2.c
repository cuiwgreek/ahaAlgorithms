//
// Created by cuiwei34 on 2019/7/9.
//
#include <stdio.h>

void testBucketSort2(){

    int book[1001],i,n,j,t;

    for (i=0;i<=1000;i++)
        book[i]=0;

    scanf("%d",&n);

    for (i=1;i<=n;i++){
        scanf("%d",&t);
        book[t]++;
    }

    for (i=1000;i>=0;i--)
        for (j=1;j<=book[i];j++)
            printf("%d ",i);

    getchar();getchar();


}

int main(){

    testBucketSort2();
    return 0;
}