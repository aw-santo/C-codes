#include <stdio.h>
int func(int array[])
{
    for (int i = 0; i < 5; i++)
    {
       // printf("%d",*(array));
        printf("the value %d is %d \n", i, array[i]);
    }
    array[0]=85;
        printf("%d\n",*(array));

    /*array[0]=84652; **imp : if value is get changed here , it will be 
   reflected...
    //passing array is not like passing all values nut it passes address of the items in the array..*/
}
int main()
{
    int arr[] = {5, 6, 5, 64, 64};
    printf("%d\n", arr[0]);
    func(arr);
    printf("%d\n", arr[0]);
    return 0;
}
