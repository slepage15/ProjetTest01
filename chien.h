#pragma once

#include<iostream>
#include<string>
#include"animal.h"

class Chien : public Animal
{
private:

    const std::string m_Cry = "Whouf";
    const unsigned short m_numLeg = 4;

public:
    Chien()
    {
        setNumberOfLeg(m_numLeg);
        setCry(m_Cry);
    }

    Chien(std::string name, std::string raceName, char sex)
    {
        setName(name);
        setRaceName(raceName);
        setSex(sex);
        setNumberOfLeg(m_numLeg);
        setCry(m_Cry);
    }

    std::string displayCry()
    {
        return (getSex() == 'M' ? "Le chien " : "La chienne ") + (getName() != "" ? "\"" +getName() + "\"" : "sans nom") + (getRaceName() != "" ? " de race \"" + getRaceName() + "\"" : " sans race") + " fait \"" + m_Cry  + "\"";
    }
};