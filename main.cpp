#include <iostream>

class Car{
public:
Car(){

}

~Car(){

}

public:
void introduceYourself() const {
    std::cout<<"Make: "<<make<<std::endl;
    std::cout<<"Model: "<<model<<std::endl;
    std::cout<<"Color: "<<color<<std::endl;
    std::cout<<"Production year: "<<productionYear<<std::endl;
    std::cout<<"Technical condition: "<<technicalCondition<<std::endl;
    std::cout<<"MileAge: "<<mileage<<std::endl;
    std::cout<<"Market value: "<<marketValue<<std::endl;
}

private:
std::string make = "Mercedes-Benz";
std::string model = "C-class";
std::string color = "Black";
int mileage = 40000;
int productionYear = 2018;
int marketValue = 28000;
std::string technicalCondition = "Run and Drive";

};

int main(int argv,char* argc[]){
    Car obj;
    obj.introduceYourself();

    return 0;
}
