#include <stdio.h>

main()
{
int mat[2][2] = {{1,2},{3,4}};
int i,j;
for (i=0;i<2;i++)
for (j=0;j<2;j++)
printf("%d\n",mat[i][j]);

system("pause");
}