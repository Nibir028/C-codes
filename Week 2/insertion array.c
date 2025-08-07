#include <stdio.h>
int main()
{
    //size of the array
    int size;
    printf("Enter the size of the array->");
    scanf("%d", &size);

    //element insert
    int arr[size],i;
    for(i=0;i<size;i++){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("The Array-> ");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }

    //insertion of new element
    int element, pos;
    printf("\nEnter the element you want to insert->");
    scanf("%d",&element);
    printf("\nEnter the index number->");
    scanf("%d", &pos);
    if(pos<0 || pos>size)
    {
        printf("-----------Invalid position----------\n TRY AGAIN \n");
        return 1;
    }

    //shift array
    for(i=size;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    
    //insert elemet to the pos
    arr[pos]=element;
    size++;

    //modified array
    printf("\nArray after insertion->");
    for(i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;

}