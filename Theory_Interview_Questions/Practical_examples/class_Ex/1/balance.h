using namespace std; 


class Balance{
    public:
        void setBalance(int inputBalance){

            totBalance = inputBalance;
        }

        int getBalance(){
            return totBalance;
        }
    private:
        int totBalance{0};
};