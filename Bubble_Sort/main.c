//
//  main.c
//  Bubble_Sort
//
//  Created by TerenceLau on 6/1/2019.
//  Copyright © 2019 刘骏杰. All rights reserved.
//
// The Bucket Sort will waste lots of storage to store the bucket
// then We can try bubble sort algorithm
// the main idea of bubble sort is the neighbor exchange their places in order
// The number just like the bubble since it will "change" its place

#include <stdio.h>

 void bubble_sort(int arr[], int len) {
     int i, j, temp, n;
     for (i = 0; i < len - 1; i++)
     for (j = 0; j < len - 1 - i; j++)
     if (arr[j] > arr[j + 1]){
         temp = arr[j];
         arr[j] = arr[j + 1];
         arr[j + 1] = temp;
     }
 }

int main() {
    
    int i, j, temp, n;
    
    printf("How many data you have?\n");
    scanf("%d",&n);
    
    int arr[n];
    for (i = 0; i < n; i++){
        arr[i] =0;
    }
    
    printf("Please Input your data\n");
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);

    }
    //int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int len = (int) sizeof(arr) / sizeof(*arr);
    bubble_sort(arr, len);

    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    return 0;
}

