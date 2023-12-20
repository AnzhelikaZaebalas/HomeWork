#include <iostream>
#include <string>

struct Person
{
    std::string name;
    int age;
    float height;
};

void PrintPersonInformation(Person person)
{
    setlocale(LC_ALL, "rus");
    std::cout<<"Информация о человеке:"<<std::endl;
    std::cout<<"Имя: "<<person.name<<std::endl;
    std::cout<<"Возраст: "<<person.age<<std::endl;
    std::cout<<"Рост: "<<person.height<<std::endl;
}

int main()
{
    setlocale(LC_ALL, "rus");
    Person Anzhelika{"Анжелика", 19, 174};
    PrintPersonInformation(Anzhelika);
    return 0;
}