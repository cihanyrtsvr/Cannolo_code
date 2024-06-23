#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <iomanip>
using namespace std;


void encrypt(const string& sentence_str, vector<pair<int,pair<string,string>>>& add_vec) {
    string newly;
    int b = 0;
    vector<string> list_vec, real_vec, somtg;
    
    // Split the input sentence into parts based on space
    istringstream div_line(sentence_str);
    while(getline(div_line, newly, ' ')) {
        list_vec.emplace_back(newly);
    }
    
    real_vec = list_vec;
    string tag_num = list_vec[0].substr(list_vec[0].size() - 1, 1);
    
    // Process each part to split by '=' and organize key-value pairs
    for(size_t i = 1; i < list_vec.size(); i++) {
        istringstream div_in_space(list_vec[i]);
        while(getline(div_in_space, newly, '=')) {
            somtg.emplace_back(newly);
        }
        
        if(somtg.size() == 2) {
            real_vec[i + b] = somtg[0];
            b++;
            real_vec.insert(real_vec.begin() + i + b+1, somtg[1]);
        }
        somtg.clear();
    }
    
    // Clean up the real_vec, removing unnecessary characters
    for(size_t a = 0; a < real_vec.size(); a++) {
        if(real_vec[a].find('=') != string::npos) {
            real_vec.erase(real_vec.begin() + a);
        }
        if(real_vec[a].find('>') != string::npos) {
            real_vec[a] = real_vec[a].substr(0, real_vec[a].find('>'));
        }
        if(real_vec[a].find('"') != string::npos) {
            real_vec[a] = real_vec[a].substr(real_vec[a].find('"')+1, real_vec[a].size()-2);
        }
    }

    // Add the parsed key-value pairs to the result vector
    for(size_t k = 1; k < real_vec.size(); k += 2) {
        add_vec.push_back({stoi(tag_num), {real_vec[k], real_vec[k + 1]}});
    }
}

void inputHTMR(int num_line, vector<pair<int, pair<string, string>>>& tag_n_properties) {
    vector<string> input_message(num_line);
    
    cin.ignore();

    for(int i = 0; i < num_line; i++) {
        getline(cin, input_message[i]);
    }

    for(const auto& msg : input_message) {
        if(msg.find('/')==string::npos){//differentiate with /{
            encrypt(msg, tag_n_properties);
        }
    }

    
}

void queryListing(int query_num,const vector<pair<int, pair<string, string>>>& tag_queries){
    string input_str,value_str;
    int key_num;
    cin.ignore();

    for(int i = 0; i < query_num; i++) {
        cin>>input_str;
        size_t pos = input_str.find('~');
        key_num = stoi( input_str.substr(pos-1,1) );
        value_str = input_str.substr(pos+1);
    }
    
    for (const auto& entry : tag_queries) {
        if (entry.first == key_num && entry.second.first == value_str) {
            cout  <<  entry.second.second  << endl;
            break;
        }
        else{
            cout <<" Not Found!" << endl;
        }
    }
    

}

int main() {
    vector<pair<int, pair<string, string>>> table;
    int number_lines, query_num;
    
    cin >> number_lines >> query_num;
    inputHTMR(number_lines, table);
    
    
    queryListing(query_num, table);
    
    
    return 0;
}


