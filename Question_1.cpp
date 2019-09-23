#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    char str[100];
    /*string str;
    getline(cin,str);
    cout << str ;*/
    freopen("compilerQ7_8_input.txt","r",stdin);
    gets(str);
    puts(str);


    int words=1,letters=0,digits=0,others=0;
    int dg[10];
    char lt[10],other[10];
    int l=0,d=0,oth=0;

    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' ' || str[i]=='\n'){
            words++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            digits++;
            dg[d]=str[i];
            d++;
        }
        else if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){
            letters++;
            lt[l]=str[i];
            l++;
        }
        else{
            others++;
            other[oth]=str[i];
            oth++;
        }
    }

    printf("Words: %d\n", words);
    printf("Letters: %d\n", letters);
    printf("Digits : %d\n", digits);
    printf("Other characters: %d\n", others);

    printf("letters : ");
    for(int j=0;j<letters;j++){
        printf("%c ", lt[j]);
    }
    printf("\n");

    printf("digits : ");
    for(int j=0;j<digits;j++){
        printf("%d ", dg[j]);
    }

    printf("others : ");
    for(int j=0;j<others;j++){
        printf("%c ", other[j]);
    }

    printf("\n");

    return 0;
}
