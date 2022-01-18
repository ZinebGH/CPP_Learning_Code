#include <iostream>
#include <string>


class Person{
    private:
        std::string name;
        unsigned int age = 0u;

    public:
    void set_name(const std::string n){
        name = n;
    }
    void set_age(unsigned int a){
        age = a;
    }

    const std::string& get_name() const{
        return name;
    }

    unsigned int get_age() const {
        return age;
    }
};

int main()
{
    Person p;

    p.set_name("Batman");
    p.set_age(23);

     std::cout << "Person named '" << p.get_name() << "' is " << p.get_age() << " years old." << std::endl;

    return 0;
}
