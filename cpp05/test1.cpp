#include <iostream>

class kira{
    private:
        std::string name;
        int btc;
    public:
        kira(std::string N, int B){
            name = N;
            btc = B;
        }
        void wallet(){
            std::cout << "*********************"<<std::endl;
            std::cout << "name :" << name << std::endl;
            std::cout << "balance btc :" << btc << std::endl;
            std::cout << "*********************"<<std::endl;
        }
        
        void withdraw(int mn){
            if (mn > btc){
                throw "withdraw fail";
            }
            else{
                btc -= mn;
                std::cout << "withdraw successful" << std::endl;
            }
        }
};

int main(){
    try{
        kira k("kira", 5);
        k.withdraw(2);
        k.wallet();
    }
    catch (const char *t){
        std::cout << "exception catch : " << t << std::endl;
    }
}