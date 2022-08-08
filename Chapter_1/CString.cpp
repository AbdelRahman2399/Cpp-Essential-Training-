#include <cstdio>

int main(){
    char s[]= "String"; // or char s[]= {'S','t','r','i','n','g',0};
    printf("s is %s\n",s);
    for(int i=0;s[i]!=0;i++){
        printf("%c\n",s[i]);
    }
    for(char * p= s;* p!=0;p++){
        printf("%c\n",* p);
    }
    return 0;
}