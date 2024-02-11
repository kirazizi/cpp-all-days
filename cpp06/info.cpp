// c_style_cast examples 
// 1. (type)expression | like (int)3.14
// 2. type(expression) | like int(3.14)


// examples for explicit cast 
// 1. static_cast
// 2. const_cast
// 3. reinterpret_cast
// 4. dynamic_cast



// c++_style_cast examples
// 1. static_cast<type>(expression)      | like static_cast<int>(3.14)
// 2. const_cast<type>(expression)       | like const_cast<int>(3.14)
// 3. reinterpret_cast<type>(expression) | like reinterpret_cast<int>(3.14)
// 4. dynamic_cast<type>(expression)     | like dynamic_cast<int>(3.14)


#include <iostream>
#include <string>


class kira{
    private:
        int value;
    public:
        kira(int i) : value(i){
            std::cout << "constructor" << std::endl;
        }

        ~kira(){
            std::cout << "destructor" << std::endl;
        }
};

int main(void)
{
    // kira obj(5);

    // std::string s1 = static_cast<std::string>(obj);

    // obj = static_cast<kira>(50);

    char c = 'a';

    int *p1 = (int*)(&c);

    *p1 = 3;

    // int *p2 = static_cast<int*>(&c);


    std::cout << "c = " << c << std::endl;
}