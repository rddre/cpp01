#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::complain(std::string level)
{
    void (Harl::*ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*ptr[i])();
            return;
        }
    }
    std::cout << "Unknown level: " << level << std::endl;
}

// interdit pour l'exo de faire une foret de if et else, exemple :
/*
void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    if (level == levels[0])
        this->debug();
    else if (level == levels[1])
        this->info();
    else if (level == levels[2])
        this->warning();
    else if (level == levels[3])
        this->error();
    else
        std::cout << "Unknown level: " << level << std::endl;
}*/