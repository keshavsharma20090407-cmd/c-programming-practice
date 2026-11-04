
#include <stdio.h>
int main() {
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{5,6},{7,8}};
    int i,j,k,s;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            s=0;
            for(k=0;k<2;k++)
                s+=a[i][k]*b[k][j];
            printf("%d ",s);
        }
        printf("\n");
    }
    return 0;
}
