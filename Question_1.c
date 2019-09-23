#include<stdio.h>

int main(){

    freopen("in1.txt","r",stdin);

    char str[100];
    int i,letters=0, digits=0, words=1, others=0;
    char letter[100],digit[100],other[100];
    int l=0,d=0,o=0;

    //printf("Enter the String: ");
    gets(str);
    puts(str);

    for(i=0; str[i] != '\0' ; i++){

        if(str[i]==' ' || str[i]=='\n'){   //ASCII value of space is 32
            words++;
        }

        else if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)){
            letters++;
            letter[l]=str[i];
            l++;
        }

        else if(str[i]>='0' && str[i]<='9'){
            digits++;
            digit[d]=str[i];
            d++;
        }
        else{
            others++;
            other[o]=str[i];
            o++;
        }
    }

    printf("Number of words  : %d\n", words);
    printf("Number of letters: %d\n", letters);
    printf("Number of Digits : %d\n", digits);
    printf("Number of other characters: %d\n\n", others);

    printf("List of separated letters: ");
    for(i=0; i<letters ; i++){
        printf("%c ", letter[i]);
    }
    printf("\n");

    printf("List of separated digits : ");
    for(i=0; i<digits ; i++){
        printf("%c ", digit[i]);
    }
    printf("\n");

    printf("List of other characters : ");
    for(i=0; i<others ; i++){
        printf("'%c'  ", other[i]);
    }
    printf("\n");

    freopen("out1","r",stdout);

    return 0;
}
