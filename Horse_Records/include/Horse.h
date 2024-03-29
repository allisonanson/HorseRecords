/*  Horse.h  */

#pragma once        // stops duplicate pasting of includes to main

#include<iostream>
#include<string>

class Horse
{
    private:
    std::string name;
    std::string breed;
    std::string color;
    std::string sex;
    int birth_year;
    float height;
    int weight;

    public:
    // horse object constructor
    Horse();

    // setter functions
    void setName(std::string name);
    void setBreed(std::string breed);
    void setColor(std::string color);
    void setSex(std::string sex);
    void setBirthYear(int birth_year);
    void setHeight(float height);
    void setWeight(int weight);

    // getter functions
    std::string getName();
    std::string getBreed();
    std::string getColor();
    std::string getSex();
    int getBirthYear();
    float getHeight();
    int getWeight();

    // input information functions
    std::string inputName();

    // other functions
    int calculateAge(int birth_year, int current_year);
    std::string toLower(std::string word);
};
