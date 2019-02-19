/* 
 * File:   main.c
 * Author: Administrator
 *
 * Created on February 19, 2019, 8:40 PM
 */

#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
int main(int argc, char** argv) 
{
    int a , b ;
    printf("  Welcome \n");
    printf("\n Nhập 2 số a và b: \n ");
    scanf("%d %d",&a,&b);
    if(a>b)
        printf("số %d lớn hơn số %d \n",a,b);
    else if(a<b)
        printf("số %d nhỏ hơn %d \n",a,b);
    else{
        printf("số a bằng số b \n");
    }
    return (EXIT_SUCCESS);
}
     
