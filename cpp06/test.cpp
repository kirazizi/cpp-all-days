#include <iostream>

// class A{
//     private:
//         int x;
//     public:
//         A(int i) : x(i){
//             std::cout << "constructor" << std::endl;
//         }
//         operator std::string(void) const{
//             return std::to_string(x);
//         }
// };

// std::ostream &operator<<(std::ostream &os, A const &rhs){ 
//     return os << rhs;
// }

// int main(){

//     // A obj(5);
//     // std::string s1 = obj;
//     // std::cout << "s1 = " << s1 << std::endl;

//     // std::string s2 = static_cast<std::string>(obj);
//     // obj = static_cast<A>(50);

//     // std::cout << "obj = " << obj << std::endl;

//     int i = 5;

//     void *p = static_cast<void*>(&i);

//     // change value of i
//     *static_cast<int*>(p) = 3;
//     std::cout << "p = " << p << std::endl;
//     std::cout << "p = " << *static_cast<int*>(p) << std::endl;

// }

class A{
    private:
        char a;
    public:
        A() : a('a'){}
        void printA(void) const{
            std::cout << "A = " << a <<  std::endl;
        }
};

class B{
    private:
        char b;
    public:
        B() : b('b'){}
        void printB(void) const{
            std::cout << "B = " << b <<  std::endl;
        }
};

int main(){

    A a;
    B b;

    A *pa = reinterpret_cast<A*>(&b);
    B *pb = reinterpret_cast<B*>(&a);

    pa->printA();
    pb->printB();

    A *pa1 = reinterpret_cast<A*>(pb);
    B *pb1 = reinterpret_cast<B*>(pa);

    pa1->printA();
    pb1->printB();
    
}