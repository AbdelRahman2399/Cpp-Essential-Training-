#include <cstdio>
#include <cstring>
#include <string>

constexpr int maxstring = 1024;

int main(){
    const char * fn = "items.txt";
    char c = 0;
    char * cp = nullptr;
    char * cd = nullptr;
    std::string buf;
    char bufs[maxstring];
    const char * bufss;
    int size;
    //bufs = buf.c_str();
    char sku[128];
    char name[128];
    char desc[128];
    FILE * fr = fopen(fn, "r");
    while(fgets(bufs, maxstring, fr)) {
        //fputs(bufs, stdout);
        buf = bufs;
        c = '\t';
        cp = strchr(bufs, c);
        //printf("Did we find a '%c' in bufs? %s\n", c, cp ? "yes" : "no");
        //if(cp) printf("The first '%c' in sd1 is at position %ld\n", c, cp - bufs);
        strncpy(sku, bufs, cp - bufs);
        //printf("sku: %s\n", sku);
        buf.erase(0,(cp - bufs) + sizeof('\t') );
        bufss = buf.c_str();
        printf("%s\n", bufss);
        cd = strchr(bufss, c);
        if(cd) printf("The first '%c' in sd1 is at position %ld\n", c, cd - bufss);
        size = cd - bufss;
        printf("size: %d\n",size);
        strncpy(name, bufss, size);
        //printf("name: %s\n", name);
        buf.erase(0,(cd - buf.c_str()) + sizeof('\t') );
        //printf("%s", buf.c_str());
        strncpy(desc, buf.c_str(),128);
        //printf("desc: %s\n", desc);
        printf("sku: %s, name: %s, desc: %s\n", sku, name, desc);
    }

    fclose(fr);

    return(0);



}