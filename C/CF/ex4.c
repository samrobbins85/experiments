#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void){
    char my_sentence[1000];
//    Create an empty array for those vowels found
    char collected_vowels[5]={};
    int collected_count=5;

//    Input and reformat user string
    puts("Enter your string");
    fgets(my_sentence, 1000, stdin);
    int length = strlen(my_sentence);
    for (int i=0; my_sentence[i]; i++){
        my_sentence[i] = tolower(my_sentence[i]);
    }
    
//    Walk along the string
    for(int pos=0; pos< length; pos++){
//        Is it a vowel>
        switch(my_sentence[pos]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':;
                    bool found =false;
                    for(int i=0; i< collected_count; i++){
                        if(my_sentence[pos]==collected_vowels[i]){
                            found=true;
                        }
                    }
                    if(!found){
                        collected_vowels[collected_count++]=my_sentence[pos];
                    }
                    break;
        }
    }
    if (collected_count==5){
        puts("String contains all vowels");
    }else{
        puts("String only contains");
        for (int pos = 0; pos < collected_count ; pos++) {
            putchar(collected_vowels[pos]);
            
        }
    }
    return 0;
}

