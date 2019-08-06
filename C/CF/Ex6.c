#include <stdio.h>

float f_to_c(int);

int main(void){
    printf("%f", f_to_c(212));

}

float f_to_c(int far){
    float cel=(far-32)*((float)5/9);
    return cel;
}
