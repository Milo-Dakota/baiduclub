
#include<stdio.h>
#include<string.h>
// test

short k,p;
int main() {
   scanf("%d%d",&k,&p);
    
    short c = (k >> 8) << 8;
    
    short d = p >> 8;
    printf("%d\n",c + d);
    return 0;
}

