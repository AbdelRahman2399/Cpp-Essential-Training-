#include <iostream>
#include <string>
#include <fstream>

int main(){
    static const char * filename = "items.txt";

    static char buf[128];
    std::cout << "read the file:" << std::endl;
    std::ifstream infile(filename);
    std::string s1;
    std::string s2;
    std::string s3;
    size_t pos;
    while (infile.good()) {
        infile.getline(buf, sizeof(buf));
        //std::cout << buf << std::endl;
        s1 = buf;
        pos = s1.find("\t");
        s2 = s1.substr(pos + sizeof("\t") - 1);
        s1 = s1.substr(0, pos + sizeof("\t") - 1);
        //std::cout << s1 << std::endl;
        //std::cout << s2 << std::endl;
        pos = s2.find("\t");
        s3 = s2.substr(pos + sizeof("\t") - 1);
        s2 = s2.substr(0, pos + sizeof("\t") - 1);
        //std::cout << s3 << std::endl;

        std::cout << "sku:" << s1 << "name:" << s2 << "desc:" << s3 << std::endl;


    }
    infile.close();
}