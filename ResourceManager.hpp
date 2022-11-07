#pragma once
#include "Resource.hpp"

class ResourceManager
{
public:
    ResourceManager()       //KONSTRUKTOR DOMYŚLNY
    {
        res = new Resource{};
    }

    ResourceManager(const ResourceManager& a)   //KONSTRUKTOR KOPIUJACY
    {
        res = new Resource{};
        *res = *a.res;
    }
    ~ResourceManager() {    //DESTRUKTOR
        delete res;
    }

    double get() { return res->get(); }

    ResourceManager& operator=(const ResourceManager& b)
    {
        delete this->res;
        res = new Resource{};
        *res = *b.res;
        return *this;
    }

private:
    Resource* res;
};

//   ResourceManager& operator=( ResourceManager& w1,const ResourceManager& w2)
//     {
//         delete w1.res;
//         w1.res = new Resource{};
//         *w1.res = *w2.res;
//         return w1;
//     }

//     w1=w2;