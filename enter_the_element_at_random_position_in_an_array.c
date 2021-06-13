#include<stdio.h>

void main()
{
	printf("CREATED BY: AYUSH GOEL \n");
	int arr[100] = { 0 }; 
    int i, x, pos, n = 10; 
    for (i = 0; i < 10; i++) 
        arr[i] = i + 1; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
    printf("enter the element:");
	scanf("%d",&x); 
    printf("enter the position:");
	scanf("%d",&pos);
    n++; 
    for (i = n; i >= pos; i--) 
        arr[i] = arr[i - 1]; 
    arr[pos - 1] = x; 
    for (i = 0; i < n; i++) 
    printf("%d ", arr[i]); 
    printf("\n"); 

	return 0;
	getch();
}
