//
// Created by cuiwei34 on 2019/7/8.
//
#include <stdio.h>
int main(){

    int a[11],i,j,t;

    for (i=0;i <= 10; i++)
    a[i]=0;

    for(i=0;i<5;i++){
        scanf("%d",&t);
        a[t]++;
    }

    for(i=0;i<=10;i++){
        for (j=1;j<=a[i];j++){
            printf("%d ",i);
        }
    }

    getchar();getchar();
    // 用于暂停程序; 以便查看程序输出的程序
    // 也可以用system("pause")
    return 0;
}