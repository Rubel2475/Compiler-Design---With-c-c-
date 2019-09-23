#include<stdio.h>

int main(){

    int i,j,v=0,c=0,vowels=0,consonants=0,p=0;
    char str[100],vowel[100],consonant[100],first[100];


    printf("Enter the String: ");
    gets(str);

    for(i=0; str[i]!='\0' ; i++){

        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            vowels++;
            int count=-1;
            for(j=0; j<v; j++){
                if(vowel[j]== str[i]){
                    count++;
                }
            }
            if(count == -1){
                vowel[v]=str[i];
                v++;
            }
        }
        else if((str[i]>65 && str[i]<=90) || (str[i]>97 && str[i]<=122)){
            consonants++;
            int count=-1;
            for(j=0; j<c; j++){
                if(consonant[j]== str[i]){
                    count++;
                }
            }
            if(count == -1){
                consonant[c]=str[i];
                c++;
            }
        }
    }
    /*
    for(i=p ; str[i]!='\0' ; i++){
        int y,z;
        if(str[i]==' ' || str[i]=='\n'){
            y=i;
            if(str[p]=='A' || str[p]=='E' || str[p]=='I' || str[p]=='O' || str[p]=='U' || str[p]=='a' || str[p]=='e' || str[p]=='i' || str[p]=='o' || str[p]=='u'){
                for(z=p; z<y ;z++){
                    first[z]= str[i];
                }
            }
            p = y+1;
        }
    }*/
    printf("Number of vowels    : %d\n", vowels);
    printf("Number of consonants: %d\n\n", consonants);

    printf("Existed vowels in the above string    : ");
    for(i=0; i<v ; i++){
        printf("%c ", vowel[i]);
    }
    printf("\n");

    printf("Existed consonants in the above string: ");
    for(i=0; i<c ; i++){
        printf("%c ", consonant[i]);
    }
    printf("\n");

    return 0;
}
