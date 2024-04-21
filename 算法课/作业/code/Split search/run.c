#include <stdio.h>
#include <stdlib.h>
#include "myFun.h"

int main(){

    int input;  printf("输入数据链长度： ");

    scanf("%d",&input);

    int a[input];
    printf("数据链长度是%d\n",input);

     for (int i = 0; i < input; i++){

        printf("输入第%d个值\n", i+1);
        scanf("%d", &a[i]);
        
    }
    
    for (int i = 0; i < 3; i++) //循环三次数据链查找
    {
    int k1 ;

    printf("请输入查找的数值：\n");

    scanf("%d", &k1);
    if (BinSearch(a,0,input,k1) != -1)

        printf("经过查找，数值%d在数据链的第%d个位置\n",k1,BinSearch(a,0,input,k1) + 1);

    else 

        printf("没有查找到该值\n");
    }
    
    return 0;
   // int arry[]={0,1,2,3};
}