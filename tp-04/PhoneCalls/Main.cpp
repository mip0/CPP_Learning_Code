#include "Person.h"
#include "Phone.h"
#include "HomePhone.h"

int main()
{
    Person paul { "Paul", 3 };
    // Phone  phone { paul };
    // paul.set_position(8);
    // phone.ring();
    HomePhone phone { paul };
    phone.ring();


    return 0;
}
