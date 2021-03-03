#pragma once
#include "portfolio.hpp"

class Player {
public:
    Player();
    ~Player();
    Player(std::string, int);
    Player(std::string, int, Portfolio*);

    // Getter
    std::string GetName();
    int GetAge();
    Portfolio GetPortfolio();
    // Setter
    void SetName(std::string);
    void SetAge(int);
private:
    std::string name;
    int age;
    Portfolio* portfolio;
};
