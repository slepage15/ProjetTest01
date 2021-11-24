#include<fstream>
#include<iostream>
//#include"animal.h"
#include"chat.h"
#include"chien.h"
#include"json.hpp"
#include<vector>

using json = nlohmann::json;

//namespace ns {
    void to_json(json& j, const Animal& a) 
    {
        j = json{{"name", a.m_Name}, {"race", a.m_RaceName}, {"sex", std::string(1, a.m_Sex)}, {"num-leg", a.m_NumberOfLeg}, {"cry", a.m_Cry}};
    }

//} // namespace ns

int main()
{
//    Animal animal;
    
//    std::cout << animal.displayCry() << std::endl;

//    Chat chat = Chat("Priscie", "goutiere", 'F');
//    std::cout << chat.displayCry() << std::endl;

//    Chien chien = Chien("Tom", "Doberman", 'M');
//    std::cout << chien.displayCry() << std::endl;

    std::vector<Animal> vecAnimal;
    vecAnimal.push_back(Animal("Doun", "Doberman", 'F'));
    vecAnimal.push_back(Animal("Tom", "Doberman", 'M'));
    vecAnimal.push_back(Animal("Boumboum", "Bouvier", 'M'));
    vecAnimal.push_back(Animal("Outch", "Boxer", 'M'));
    vecAnimal.push_back(Animal("Valentine", "", 'F'));
    vecAnimal.push_back(Animal("Elvis", "Goutiere", 'M'));
    vecAnimal.push_back(Animal("Priscie", "Goutiere", 'M'));
    vecAnimal.push_back(Animal("Laddy", "Labrador", 'F'));
    vecAnimal.push_back(Animal("Tasha", "Labrador", 'F'));
    vecAnimal.push_back(Animal("Rex", "Jack", 'M'));

    nlohmann::json j_vecAnimal;

    for (int i = 0; i < vecAnimal.size(); i++)
    {
        j_vecAnimal.push_back(vecAnimal[i]);
    }

    std::cout << j_vecAnimal.dump() << std::endl;

    // write JSON file
    std::ofstream o ("animal.json");
    o << std::setw(4) << j_vecAnimal << std::endl;
    o.close();

    return 0;
}