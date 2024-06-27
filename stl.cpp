#include <iostream>
#include <vector>
#include <utility> // For pair
using namespace std;

int main()
{
    pair<int,int> a={1,2};
    cout<<a.first<<" "<<a.second<<endl;
    pair<int,int> arr[]={{1,2},{3,4}};
    cout<<arr[0].first<<" "<<arr[1].second<<endl;
    // cout<<a<<endl; 

    //vector is dynamic in nature
    vector <int> b;
    b.push_back(1);
    b.emplace_back(2);
    vector<pair<int ,int>> vec;
    vec.push_back({1,2});  
    vec.emplace_back(1,2);  

    vector<int> v(5,100);
    //for copying vector
    vector<int> v2(v);
    vector<int> v3(v.begin(),v.end());

    //accessing vector
    vector<int>::iterator it=v.begin();
    it++;
    cout<<*(it)<<" ";
    it+=2;
    cout<<*(it)<<" ";

    return 0;
}