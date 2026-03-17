#include "my_ntohl.h"
#include <stdint.h>
uint32_t my_ntohl(uint32_t origin){
    uint32_t result = 0;
    for (int i = 0 ; i<4; i++){
        result |= ((origin&(0xff <<i*8))>>(i*8))<<(24-i*8);
    }
    return result;
}