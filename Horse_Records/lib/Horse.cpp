/*  Horse.cpp  */

#include "Horse.h"

Horse::Horse()  // constructor 
{
    this->name = " ";
    this->breed = " ";
    this->color = " ";
    this->sex = " ";
    this->birth_year = 0;
    this->height = 0.0;
    this->weight = 0;
}

//////////////////// SETTERS ////////////////////
void Horse::setName(std::string name) {
    this->name = name;
}

void Horse::setBreed(std::string breed) {
    this->breed = breed;
}

void Horse::setColor(std::string color) {
    this->color = color;
}

void Horse::setSex(std::string sex) {
    this->sex = sex;
}

void Horse::setBirthYear(int birth_year) {
    this->birth_year = birth_year;
}

void Horse::setHeight(float height) {
    this->height = height;
}

void Horse::setWeight(int weight) {
    this->weight = weight;
}

//////////////////// GETTERS ////////////////////
std::string Horse::getName() {
    return this->name;
}

std::string Horse::getBreed() {
    return this->breed;
}

std::string Horse::getColor() {
    return this->color;
}

std::string Horse::getSex() {
    return this->sex;
}

int Horse::getBirthYear() {
    return this->birth_year;
}

float Horse::getHeight() {
    return this->height;
}

int Horse::getWeight() {
    return this->weight;
}

//////////////////// INPUTS ////////////////////
std::string Horse::inputName() 
{
    std::string name;

    std::cout << "Enter the horse's name:  ";
    std::cin >> name;
    return name;
}

//////////////////// OTHERS //////////////////// 
int Horse::calculateAge(int birth_year, int current_year) 
{
    int age;    
    age = current_year - birth_year;

    return age;
}

std::string Horse::toLower(std::string word) {
// Takes a string argument and transforms it into all lowercase equivalents of itself, then returns it. 
    std::transform(word.begin(), word.end(), word.begin(), ::tolower);
    return word;
}
