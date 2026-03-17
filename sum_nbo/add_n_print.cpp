#include<stdio.h>
#include "my_ntohl.h"
#include <stdint.h>
uint32_t add_n_print(uint32_t *p){
    uint32_t sum = 0;
    uint32_t len = p[0];
    for (int i = 1 ; i < (len+1); i++){
        p[i] = my_ntohl(p[i]);
        sum += p[i];
        printf("%d(%#010x)",p[i], p[i]);
        if (i== len){
            printf(" = %d(%#010x)", sum, sum);
        }
        else{
            printf(" + ");
        }

    }
    printf("\n");
    return sum;
}