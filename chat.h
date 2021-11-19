#pragma once

#include<iostream>
#include<string>
#include"animal.h"

class Chat : public Animal
{
private:

    const std::string m_Cry = "Miaou";
    const unsigned short m_numLeg = 4;

public:
    Chat()
    {

    }

    Chat(std::string name, std::string raceName, char sex)
    {
        setName(name);
        setRaceName(raceName);
        setSex(sex);
        setNumberOfLeg(m_numLeg);
        setCry(m_Cry);
    }

    std::string displayCry()
    {
        return (getSex() == 'M' ? "Le chat " : "La chatte ") + (getName() != "" ? "\"" +getName() + "\"" : "sans nom") + (getRaceName() != "" ? ", de race \"" + getRaceName() + "\"" : ", sans race") + ", fait \"" + m_Cry + "\"";
    }
};