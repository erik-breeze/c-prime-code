//冒泡排序
#include <stdio.h>
int main()
{   
    int i,j,t,arr[10];
    printf("请输入比较数字(冒泡排序):");
    for(int i=0;i<10;i++)
    scanf("%d",&arr[i]);//数组循环输入
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
            int t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
            }
        }
    }        
        
        for(int i=0;i<10;i++)
        {
            printf("%d",arr[i]);
            printf("\n");
        }   

    return 0;
}
