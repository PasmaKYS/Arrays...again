#include<stdio.h>
int main()
{
    float A[4][2]={
        {4.000,1.000},
        {2.546,3.200},
        {-2.760,-9.000},
        {33.400,-21.000}//AEM:59641
    };
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
        printf("Array[%d,%d]=%.3f\n",i,j,A[i][j]);}
    }
    printf("\nDepartment of Electrical and Computer Engineering - Εργαστήριο 5");
    return 0;
}
