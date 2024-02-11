// i need to know what the deff between compile-time and run-time polymorphism    done!
// and i need to know whats the deff between static binding and dynamic binding   done!
// and i need to know whats the deff between virtual and pure virtual function    done!
// and i need to know whats the deff between virtual and non-virtual function     done!
// and i need to know whats the deff between abstract class and concrete class    done!
// and i need to know whats the deff between abstract class and normal class      done!
// and i need to know whats the deff between abstract class and interface         done!
// 

// *the diference between shallow and deep copy:
//  shallow: create a copy of the instance if the have a pointer value once changed in the first it change in the second
//  deep: same but create a complete copy that is seperated from the copied from .

// |                        |          
// |------------------------| <------ derived object memory layout
// |  base1::base1_var      |          
// |------------------------|          |--------->|----------------------|
// |  base1::_vptr_base1    |----------|          |   type_info derived  |
// |------------------------|                     |----------------------|
// |  base2::base2_var      |                     |   base1::base1_func  |
// |------------------------|                     |----------------------|
// |  base2::_vptr_base2    |----------|          |    derived:::print   |
// |------------------------|          |          |----------------------|
// |  derived::derived_var  |          |          |------GUARD_AREA------|
// |------------------------|          |--------->|----------------------|
// |                        |                     |   type_info derived  |
// |                        |                     |----------------------|
// |                        |                     |   base2::base2_func  |
// |                        |                     |----------------------|
//                                                |    derived::print    |
//                                                |----------------------|
// base2 *pb = new derived;
//         |                        |          
//         |------------------------| <------ derived object memory layout
//         |  base1::base1_var      |          
//         |------------------------|          |--------->|----------------------|
//         |  base1::_vptr_base1    |----------|          |   type_info derived  |
// pb ---> |------------------------|                     |----------------------|
//         |  base2::base2_var      |                     |   base1::base1_func  |
//         |------------------------|                     |----------------------|
//         |  base2::_vptr_base2    |----------|          |    derived:::print   |
//         |------------------------|          |          |----------------------|
//         |  derived::derived_var  |          |          |------GUARD_AREA------|
//         |------------------------|          |--------->|----------------------|
//         |                        |                     |   type_info derived  |
//         |                        |                     |----------------------|
//         |                        |                     |   base2::base2_func  |
//         |                        |                     |----------------------|
//                                                        |    derived:::print   |
//                                                        |----------------------|
//
//*********************************************************************************
//
// virtual destructor works
// |                                |          
// |--------------------------------| <------ wifi_t class object memory layout
// |  protocol_t::_type             |          
// |--------------------------------|          
// |  protocol_t::_vptr_protocol_t  |----------|
// |--------------------------------|          |----------|-------------------------|
// |  wifi_t::_pass                 |                     |   type_info wifi_t      |
// |--------------------------------|                     |-------------------------|
// |                                |                     |   wifi_t::authenticate  |
// |                                |                     |-------------------------|
// |                                |                     |   wifi_t::connect       |
// |                                |                     |-------------------------|
// |                                |                     |   wifi_t::~wifi_t       |
// |                                |                     |-------------------------|


#include <iostream>

class deep {
public:
    int *value;

    // Constructor
    deep(int v) {
        value = new int(v);
    }

    // Copy constructor for deep copy
    deep(const deep &src) {
        value = new int();
        *value = *src.value;
    }

    // Destructor
    ~deep() {
        delete value;
    }

    // Copy assignment operator for deep copy
    deep &operator=(const deep &src) {
        delete value;
        value = new int(*(src.value));
        return *this;
    }
};

int main() {
    deep obj1(5);
    deep obj2 = obj1;


    *(obj1.value) = 10;

    std::cout << "obj1.value: " << *(obj1.value) << std::endl;
    std::cout << "obj2.value: " << *(obj2.value) << std::endl;

    return 0;
}