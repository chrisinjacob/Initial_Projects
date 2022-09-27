#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account{
    public:
        Account(int, std::string);
        Account();
        ~Account();
        void setbalance (int);
        int getbalance () const;
        void setname (std::string);
        std::string getname() const;
        static int getcount();
    private:
        int balance{0};
        std::string name {"Unknown"};
        
        static int count;
};

#endif