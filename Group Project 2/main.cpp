#include <iostream>
#include <string>
using namespace std;
//Gal Egozi Group 21
//Adolfo Gracia Group 37
//Raymond Duong Group 24
class Animal
{
public:
    static int count;
    Animal()
    {
        count++;
    }
    ~Animal()
    {
        count--;
    }
    virtual string speak()=0;
};
class Canine:Animal
{
public:
    static int count;
    Canine(): Animal()
    {
        count++;
    }
    string speak()
    {
        return "WOOF";
    }
    ~
};
class Feline:Animal
{
public:
    static int count;
    Feline():Animal()
    {
        count++;
    }
    string speak()
    {
        return "PURR";
    }
};
class Dog:Canine
{
private:
    string name;
public:
    Dog():Canine()
    {
        name = "Dog";
    }
    Dog(string n):Canine()
    {
        n = name;
    }
    string getName()
    {
        return name;
    }
};
class Wolf:Canine
{
public:
    Wolf():Canine()
    {
    }
    string howl()
    {
        return "HOWL";
    }
};
class Cat:Feline
{
private:
    string name;
public:
    Cat():Feline()
    {
        name = "Cat";
    }
    Cat(string n):Feline()
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
};
int main()
{
    Dog d;
    Wolf w;
    Cat c;
    Dog nd("name");
    Cat nc("name");
    Animal * animals = &d;
    return 0;
}
