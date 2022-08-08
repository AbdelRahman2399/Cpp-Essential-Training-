#include <cstdio>

int main(){
    puts("\' \"\n \\\t \x40"); // \t > tab
    /* output is ' "
       \   @ */
    puts("\u03bc"); // unicode of μ
}