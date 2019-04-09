#include <stdio.h>

int main(void)
{
    int H,W;
    int h,w,i,ans;

    scanf("%d %d",&H,&W);
    scanf("%d %d",&h,&w);

    ans=H*W-(h*W+H*w)+(h*w);

    printf("ans=%d\n",ans);

    return 0;

}