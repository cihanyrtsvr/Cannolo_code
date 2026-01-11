#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath> 
#include <algorithm>

using namespace std;


int main(){
    
    size_t product_size{5}, user_number{4};

    unsigned int personal_total, sale_number;
    
    vector<int> product_total(product_size, 0);

    vector<vector <int>> people_product(user_number, vector<int> (product_size,0));

    

    

    
    for (int i =1; i <= user_number; i++){

        for(int j=1; j <= product_size; j++){

            cout<<"For user "<<i<<" and product: "<<j<<" enter product dollar sale : " ;
            cin>> sale_number;
            people_product[i-1][j-1] = sale_number;
        }
    }

    cout << "\nPerson Id"<<setw(8)<<"TOTAL"<<endl; 
    for(int i =1; i <= user_number; i++){
        cout<<i<<setw(13);
        personal_total = 0;
        
        for(int j=0; j < product_size; j++){
            int currentVal = people_product[i-1][j];
            personal_total +=  currentVal;
            product_total[j]  += currentVal;
        }

        cout<<personal_total<<endl;

    }
    
    cout<<"\nProduct id: "<<setw(10)<<"Total: "<<endl;
    for(int i = 1 ; i<=5; i++){cout<<i<< setw(16)<<product_total[i-1]<<endl;}

    return 0;
}

