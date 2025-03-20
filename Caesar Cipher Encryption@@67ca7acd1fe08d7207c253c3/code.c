#include <stdio.h>
#include<ctype.h>
#include<string.h>
void caesarCipher(char* message,int shift,char* encrypted){
    for(int i=0;message[i]!='\0';i++){
        char ch=message[i];
        if(isalpha(ch)){
            char base=(islower(ch))?'a':'A';
            encrypted[i]=base+(ch-base+shift)%26;
        }else{
            encrypted[i]=ch;
        }
    }
    encrypted[strlen(message)]='\0';
}