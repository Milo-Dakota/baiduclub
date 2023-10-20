 /********** 使用short变量k和p，在下面写出满足任务要求的表达式**********/
 /**********Begin**********/
#include<stdio.h>
#include<string.h>
 

short k,p;
int main() {
   scanf("%d%d",&k,&p);
    
    short c = (k >> 8) << 8;
    
    short d = p >> 8;
    printf("%d\n",c + d);
    return 0;
}

