#pragma once

#include<iostream>
#include<string>

class Animal
{
private:

    std::string m_Name = "";
    std::string m_RaceName = "";
    unsigned short m_NumberOfLeg = 4;
    char m_Sex = 'M';
    std::string m_Cry = "";

protected:

    void setNumberOfLeg(unsigned short numberOfLeg)
    {
        m_NumberOfLeg = numberOfLeg;
    }

    void setCry(std::string cry)
    {
        m_Cry = cry;
    }

public:
    Animal()
    {

    }

    Animal(std::string name, std::string raceName, char sex)
    {
        setName(name);
        setRaceName(raceName);
        setSex(sex);
    }

    virtual std::string displayCry()
    {
        return "L'animal fait un cri generique";
    }

    std::string getName()
    {
        return m_Name;
    }

    std::string getRaceName()
    {
        return m_RaceName;
    }

    unsigned short getNumberOfLeg()
    {
        return m_NumberOfLeg;
    }

    char getSex()
    {
        return m_Sex;
    }

    std::string getCry()
    {
        return m_Cry;
    }

    void setName(std::string name)
    {
        m_Name = name;
    }

    void setRaceName(std::string raceName)
    {
        m_RaceName = raceName;
    }

    void setSex(char sex)
    {
        try
        {
            if (sex =='M' || sex == 'm')
            {
                m_Sex = 'M';
            }
            else if (sex =='F' || sex == 'f')
            {
                m_Sex = 'F';
            }
            else
            {
                throw ;
            }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
};