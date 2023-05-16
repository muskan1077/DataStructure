
#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> pair1(10,12);
    cout<<pair1.first <<" "<<pair1.second<<endl;

    pair1 = {2,3};
    cout<<pair1.first <<" "<<pair1.second<<endl;

    pair1 = make_pair(4,5);
    cout<<pair1.first <<" "<<pair1.second<<endl;

    pair1.first = 3;
    pair1.second = 5;
    cout<<pair1.first <<" "<<pair1.second<<endl;
}
