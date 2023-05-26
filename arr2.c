#include<stdio.h>
#define MAX 10
#include<stdlib.h>
int* printArray(int* array,int* n)

{
    printf("print array\n");
    for(int i=0; i<*n; i++)
    {
        printf("array[%d]=%d\n",i,array[i]);
    }
}

 int* insertArray(int* array,int i,int* n,int index,int value)
{
   // printArray(array, n);
    int* arrayfirst = (int *)(malloc(sizeof(int) *((*n)+1) ));
    arrayfirst[0]=1;
    arrayfirst[1]=2;
    arrayfirst[2]=3;
    arrayfirst[3]=5;
    arrayfirst[4]=6;
    //printf("%d",*arrayfirst);
   // printArray(array, n);
    for(i= *n;i>=index;i--)
    {
        arrayfirst[i+1]=arrayfirst[i];
    }
    arrayfirst[index]=value;
    (*n)++;
    return arrayfirst;
}
int main()
{
    int arrayfirst[]= {1,2,3,5,6},i=0,n=5,index=3,value=4;
    printArray(arrayfirst, &n);
    int *array = insertArray(array,i, &n, index, value);
    printf("%d", array);
    printArray(array, &n);

}
