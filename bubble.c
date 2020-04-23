#include<stdio.h>
//function declaration
 void bubble(int *arr,int len);
  void swap(int *x, int *y);
//main function
int main()
{
         int arr[]={1,23,45,6,14};
         int len=(sizeof(arr)/4);
         int i;
         bubble(arr,len);
         for(i=0;i<len;i++)
         {
                printf("%d\n",arr[i]);
         }
        return 0;
 }
//use exchange
 void swap(int *x, int *y)
{
        printf(">>>");
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}
//bubble 
 void bubble(int *arr,int len)
 {
        
        int *arr1=arr;
        int i,j;
//surrouding loop
        for(i=0;i<len;i++)
        {

                printf("______\n");
         for(arr1=arr;arr<arr+len-1;arr++)
          {
                   int flag = 0;
                if(*arr1>*(arr1+1))
                  {
                   swap(arr1, (arr1+1));
                          flag=1;
                   }
                 if (!flag)
        {
            break;
        }
          }
         }

 }
~
~
~
                                        
