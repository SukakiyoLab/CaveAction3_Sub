#include <iostream>
#include <cstdint>

#include <typeinfo>
#include <string>

uint8_t a = 10;
int b = 50;

void log(){
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << typeid(a).name() << std::endl;
    std::cout << typeid(b).name() << std::endl;

    if (std::string(typeid(a).name()) == std::string(typeid(int).name())){
        std::cout << "a is int." << std::endl;
    }else{
        std::cout << "a is not int." << std::endl;
    }

}

void a_setter(uint8_t new_val){
    a = new_val;
}


template<typename T>
void PointSet(void setter(T), T new_value){
    setter(new_value);

    if (typeid(T).name() == typeid(int).name()){
        std::cout << "type is int!" << std::endl;
    }
}


int main(){
    log();

    PointSet<uint8_t>(a_setter, 20);

    log();

    return 0;
}


