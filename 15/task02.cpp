#include <iostream>
#include <cmath>
#include <ctime>

struct Employee {
    std::string name;
    int id;
    float salary;
};

void GetHighestSalary(Employee* employees, int size) {
    float max = 0;
    int index = 0;

    for (int i = 0; i < size; i++) {
        if (employees[i].salary >= max) {
            max = employees[i].salary;
            index = i;
        }
    }

    std::cout << "Name:" << employees[index].name << '\n';
    std::cout << "ID:" << employees[index].id << '\n';
    std::cout << "Salary:" << employees[index].salary << '\n';
};

int main()
{
    srand(time(NULL));
    int n;
    std::cin >> n;
    std::cout<<'\n';
    
    Employee* employees = new Employee[n];

    for (int i = 0; i < n; i++) {
        employees[i].id = rand() % 1000000;
        employees[i].name = static_cast<char>((rand() % 1000)) + static_cast<char>((rand() % 1000)) + static_cast<char>((rand() % 1000));
        employees[i].salary = rand() % 100000 + (rand() % 100) / 100.;
        std::cout << "Name:" << employees[i].name << '\n';
        std::cout << "ID:" << employees[i].id << '\n';
        std::cout << "Salary:" << employees[i].salary << "\n\n";
    }
    
    setlocale(LC_ALL, "rus");
    std::cout<<'\n'<<"Самая большая зарплата у сотрудника:"<<std::endl;
    GetHighestSalary(employees, n);
    system("pause");
}