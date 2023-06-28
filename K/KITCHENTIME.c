// https://www.codechef.com/problems/KITCHENTIME

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x>y){
        printf("%d\n",x-y);
    }
    else{
        printf("%d\n",y-x);
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
