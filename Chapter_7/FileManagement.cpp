#include <cstdio>

int main(){
    static const char * fn1 = "file1";
    static const char * fn2 = "file2";
    rename(fn1,fn2);
    //remove(fn2);
    //FILE * fh = fopen(fn1, "w");
    //fclose(fh);
    puts("Done");
    return 0;
}