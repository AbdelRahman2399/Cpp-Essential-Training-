#include <cstdio>
#include <string>

class Car{
    std::string Model = "";
    std::string Version = "";

public:

    Car();
    Car(const std::string & Modelin, const std::string & Versionin);
    ~Car();
    Car & operator = (const Car &);
    void print();

};

Car::Car() : Model("Unknown"), Version("Unknown") {

}

Car::Car(const std::string & Modelin, const std::string & Versionin) : Model(Modelin), Version(Versionin){

}

Car::~Car() {
printf("Destructor: %s %s\n",Model.c_str(),Version.c_str());
Model = "";
Version = "";
}

void Car::print(){
    printf("Model:%s, Vesion:%s\n",Model.c_str(),Version.c_str());
}

Car& Car::operator = (const Car & o){
    if(this != &o){
        this->Model="clone-" + o.Model;
        this->Version="clone-" + o.Version;
    }
    return *this;
}


int main(){
    Car A;
    A.print();
    Car B("Ferrari","LaFerrari");
    B.print();
    A = B;
    A.print();
    return 0;
}