#include <iostream>
#include <vector>
#include"sort.h"
using namespace std;

void sort_bubble(vector <int> a){
    for(int i = a.size()-1 ; i > 0 ; i--){
        for(int j = 0 ; j < i ; j++){
            if(a[j] > a[j+1]) {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
        }}
}
   for(int i=0;i<a.size();i++)
    cout<<a[i]<<" ";
}


void sort_sheker(vector <int> a){
 for(int i = a.size()-1 ; i > 0 ; i--){
        for(int j = 0 ; j < i ; j++){
            if(a[j] > a[j+1]) {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
        for(int j = a.size()-1 ; j < i ; j--){
            if(a[j] > a[j+1]) {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
        }}}}}

   for(int i=0;i<a.size();i++)
    cout<<a[i]<<" ";
}

int getg(int g)
{
    g = (g*10)/13;
    if (g < 1)
        return 1;
    return g;
}


void sort_rasc(vector <int> a){
    int g = a.size();
    bool yslov = true;
    while (g != 1 || yslov == true){
        g = getg(g);
        yslov = false;
        for (int i=0; i<a.size()-g; i++){
            if (a[i] > a[i+g]){
                int tmp=a[i];
                a[i] = a[i+1];
                a[i+1] = tmp;
                yslov = true;
            }
            }
}
     for(int i=0;i<a.size();i++)
         cout<<a[i]<<" ";

}

