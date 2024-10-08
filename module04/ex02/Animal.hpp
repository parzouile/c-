#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "iostream"

class Animal
{
    protected :
        std::string type;

    public :
        Animal(void);
        Animal(std::string s);

        Animal(const Animal &animal);
        Animal& operator=(const Animal &animal);
    
        virtual ~Animal(void);
        std::string getType(void) const;
        virtual void makeSound(void) const = 0;
};

#endif