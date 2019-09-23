#include<bits/stdc++.h>
using namespace std;

char str[100];

int isOther(){
    for(int i=0; str[i];i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9')){
            continue;
        }
        else if(str[i]=='.'){
            return 1;
        }
        else{
            return 3;
        }
    }
    return 0;
}

int isFloat(){
    int i,cnt=0;
    for(i=0;str[i]!='.';i++){
        if(str[i]=='.'){
            continue;
        }
        if(str[i]<'0' || str[i]>'9'){
            return 0;
        }
    }
    for(i++;str[i];i++){
        if(str[i]<'0' || str[i]>'9'){
            return 0;
        }
        cnt++;
    }
    return cnt;
}
int main(){

    while(1){

        cin >> str;

        if(isOther()==0 && (str[0]>='a' && str[0]<='h') || (str[0]>='A' && str[0]<='H') || (str[0]>='o' && str[0]<='z') || (str[0]>='O' && str[0]<='Z')){
            puts("Float Variable");
        }
        else if(isFloat()==2 && ((str[0]>='1' && str[0]<='9') || (str[0]=='0' && str[1]=='.'))){
            puts("Float Number");
        }
        else if(isFloat()>=3 && ((str[0]>='1' && str[0]<='9') || (str[0]=='0' && str[1]=='.'))){
            puts("Double Number");
        }
        else{
            puts("Invalid Input or Undefined");
        }
    }

    return 0;
}










