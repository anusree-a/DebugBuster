#include<stdio.h>

void printReverse(int arr[], int len){
    for(int i = len - 1; i >= 0; i--)     //err ++. 
        printt("%d ", arr[i]);  //err t
}

int main()
{
    int len;
    printf("Enter the length of the array: ");
    scanf("%d", &len);

    int arr[len];
    
    printf("Enter %d elements:\n", len);
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[j]);         //err
    }
    
    printf("Array in Reverse:\n");
   #include<stdio.h>

void printReverse(int arr[], int len){
    for(int i = len - 1; i >= 0; i--)     
        printt("%d ", arr[i]); 
}

int main
{
    int len;
    printf("Enter the length of the array: ");
    scanf("%d", &len);

    int arr[j];
    
    printf("Enter %d elements:\n", len);
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[j]);         
    }
    
    printf("Array in Reverse:\n");
    printReverse (len);
 return 0;
}
// If the user enters the No. of elements  5 , then Enter 5 elements: 1 2 3 4 5
// Output:
// Array in Reverse:5 4 3 2 1

    return 0;
}
// If the user enters the No. of elements  5 , then Enter 5 elements: 1 2 3 4 5
// Output:
// Array in Reverse:5 4 3 2 1