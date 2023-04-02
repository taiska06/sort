#include <iostream>
#include <vector>
#include"sort.h"
using namespace std;

int main(){
    int N, a;
    vector <int> mass;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> a;
        mass.push_back(a);
    }
    sort_sheker(mass);
}
