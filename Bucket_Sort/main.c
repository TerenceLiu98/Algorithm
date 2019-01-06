//
//  main.c
//  Bucket_Sort
//
//  Created by TerenceLau on 6/1/2019.
//  Copyright © 2019 刘骏杰. All rights reserved.
//

#include <stdio.h>

int main(){
    int a[11], i, j , t; // build 11 buckets
    for (i = 0; i < 10; i++)
        a[i] =0; // the initail values is zero
    
    for (i = 1; i <= 5; i++){ // the example has 5 numbers so i is less than 5
        scanf("%d", &t);
        a[t]++;
    }
    
    for (i = 0; i <= 10; i++)
        for(j = 1; j <= a[i]; j++)
            printf("%d ", i);
    getchar();
    
    return 0;
}

