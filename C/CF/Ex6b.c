#include <stdio.h>

#define TRUE 1
#define FALSE 0

int isprime(int);

int main(void){
    printf("%d", isprime(14));

}

int isprime(int n){
    int i, flag=0;
    for(i=2; i <= n / 2; i++){
        if(n%i ==0){
            flag=1;
            break;
        }
    }
    if(flag==0 && n!=1){
        return TRUE;
    } else{
        return FALSE;
    }
}
