//
// Created by cuiwei34 on 2019/7/10.
//
#include <stdio.h>

void testBubble(){
    int a[100],n,i,j,t;

    scanf("%d",&n);

    for (i=1;i<=n; i++){
        scanf("%d",&a[i]);
    }

    // 冒泡排序的核心部分
    for (i=1;i<=n-1;i++){ //
        for (j=1;j<=n-i;j++){
            // 从第1位开始比较直到最后一个尚未归位的数
            if(a[i] < a[j+1]){
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    for (i=1;i<=n;i++)
        printf("%d   ",a[i]);

    getchar();getchar();

}

int main(){
    testBubble();
    return 0;
}
