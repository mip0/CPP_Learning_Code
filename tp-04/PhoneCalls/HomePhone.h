#pragma once

#include "Person.h"

class HomePhone : public Phone {
    
public:
    HomePhone(const Person& owner, int position)
    : Phone(owner)
    , _position{position}
    {}

private:
    const int _position;

};