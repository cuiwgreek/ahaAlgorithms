//
// Created by cuiwei34 on 2019/7/16.
//
#include <stdio.h>

int a[101],n;// 定义全局变量

void quicksort(int left ,int right){

    int temp,i,j,t;

    if(left > right){
        return ;
    }

    temp = a[left];//temp 基准数

    i = left;
    j = right;

    while(i!=j){

        // 顺序很重要 要先从右往左
        while (a[j] >= temp && i < j)
            j--;
        //
        while (a[i] <= temp && i <j)
            i++;

        // 交换两个数在数组中的位置
        if(i<j){// 当哨兵i和哨兵j没有相遇时
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }

        // 最终将基准数归位
        a[left] =i;
        a[right] =temp;
        quicksort(left,i-1);
        quicksort(i+1,right);

    }
}

int main(){
    int i,j;
    //
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    quicksort(1,n);// 快速排序调用

    // 输出排序后的结果
    for (int i = 0; i <= n; ++i) {
        printf("%d ",a[i]);
    }

    getchar();getchar();
    return 0;
}
