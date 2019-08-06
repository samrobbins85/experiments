#include <stdio.h>
#include <string.h>

int main(void){
    char str[100];
    char out[50];
    int *op = out;
    int i;

    printf("\n Please Enter any String :  ");
    gets(str);



    for(i = 0; i <= strlen(str); i++)
    {
        char val=str[i];
        printf("Val %c\n",val);
        switch(val){
//            Watch out, this is broken as you can't put multiple characters into one
            case 'a': op=strcat(out,".-");
                    break;
            case 'b': op=strcat(out,"-...");
                break;
            case 'c': op=strcat(out,"-.-.");
                break;
            default : printf("xxxxx");
        }


    }

    printf("The Final String after Replacing %s ", out);

    return 0;
}
