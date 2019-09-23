#include<bits/stdc++.h>
using namespace std;

char str[100];

bool isOther(){
    for(int i=0;str[i];i++){
        if((str[i]>='0' && str[i]<='9') || (str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){
            continue;
        }
        else{
            return 1;
        }
    }
    return 0;
}

bool isAllDigit(){
    for(int i=0;str[i];i++){
        if(str[i]<'0' || str[i]>'9'){
            return 0;
        }
    }
    return 1;
}

int main(){

    cin >> str;
    int s_length = strlen(str);

    if(isOther()){
        puts("Invalid input or Undefined");
    }
    else if((str[0]>='i' && str[0]<='n') || (str[0]>='I' && str[0]<='N')){
        puts("Integer Variable");
    }
    else if(isAllDigit() && (str[0]>='1' && str[0]<='9') && s_length<=4){
        puts("ShortInt Number");
    }
    else if(isAllDigit() && (str[0]>='1' && str[0]<='9')){
        puts("LongInt Number");
    }
    else{
        puts("Invalid input or Undefined");
    }

    return 0;
}
