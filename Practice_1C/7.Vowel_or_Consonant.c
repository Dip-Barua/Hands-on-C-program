// Write a C program to input any alphabet and check whether it is a vowel or consonant.

#include <stdio.h>


int main(){
    char Ch;

    printf("Enter any Alphabet:");
    scanf(" %c",&Ch);


        if((Ch >= 'A' && Ch <= 'Z') || (Ch >= 'a' && Ch <= 'z')){

                if( Ch == 'a' || Ch == 'e' || Ch == 'i' || Ch == 'o' || Ch == 'u' ||
                        Ch == 'A' || Ch == 'E' || Ch == 'I' || Ch == 'O' || Ch == 'U'
                    ){
                        printf(" %c is a Vowel.",Ch);
                    }else{
                        printf(" %c is a Consonant.",Ch);
                    }

        }else{
            printf(" %c is not an Alphabet.",Ch);
        }


    
}