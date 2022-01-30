#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int x = 50;
    vector<int> vec;
    for(int i(0);i<5;i++){
        vec.push_back(i);
        cout<< vec[i];
    }

    
    //cout<< x << endl;
    //cin>>x;
    return 0;
}