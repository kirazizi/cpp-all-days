#include <iostream>
#include <string>

class A {
    protected:
        std::string type;
    public:
        virtual void print_msg(void){
            std::cout << "A" << std::endl;
        }
        void set_type(std::string type){
            this->type = type;
        }
        std::string get_type(void){
            return this->type;
        }
};

class B : public A {
    public:
        void print_msg(void){
            std::cout << "B" << std::endl;
        }
};

class C : public A {
    public:
        void print_msg(void){
            std::cout << "C" << std::endl;
        }
};

int main(void)
{
;
    A *ptr;
    A *ptr2;
    B b;
    C c;

    ptr = &b;
    ptr->print_msg();

    ptr2 = &c;
    ptr2->print_msg();

    // A *a = new B();
    // B *b = new B();

    // A *a1 = new C();
    // C *c = new C();

    // a->set_type("AA");
    // b->set_type("BB");
    // c->set_type("CC");


    // std::cout << a->get_type() << std::endl;
    // std::cout << b->get_type() << std::endl;
    // std::cout << c->get_type() << std::endl;

    // A *c = new C();

    // a->print_msg();
    // b->print_msg();
    // c->print_msg();
    // std::cout << "*****************" << std::endl;
    
    
}
