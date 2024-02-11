#include <iostream>

class kira{
    private:
        int grade;
    public:
        kira(int grade){
            if (grade < 1)
                throw low();
            else if (grade > 100)
                throw high();
            else
                this->grade = grade;
        }
        void getGrade(void) const{
            std::cout << grade << std::endl;
        }

    class high : public std::exception{
        public:
            const char* what() const throw(){
                return "Grade too high";
            }
    };

    class low : public std::exception{
        public:
            const char* what() const throw(){
                return "Grade too low";
            }
    };
};

int main(void){
    try{
        kira k(120);
        k.getGrade();
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}