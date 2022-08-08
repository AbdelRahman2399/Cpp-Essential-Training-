#include <cstdio>

int main(){
    char cstring[]="String"; // Copies string to array
    const char * cstring2 = "String" ; //pointer to const char > string, points to string instead of copying it (more effecient)
    const char * cstring3 = "String" "Another String" ; //Concatinate two strings

    puts(cstring);

    for(char i:cstring){
        printf("%c\n",i);

    }
}