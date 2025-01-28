#include <stdio.h>

int main()

{
    int x,xs=0,ys=0,zs=0;

    scanf("%d",&x);

    for(int i=0; i< x ; i++)
    {
        int xi,yj,zk;
        scanf("%d %d %d",&xi , &yj , &zk);
        xs+=xi;
        ys+=yj;
        zs+=zk;
    }

    if( xs ==0 && ys ==0 && zs ==0)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }


}
