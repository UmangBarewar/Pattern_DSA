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
    // stores elements in contiguous memory locations, 
    // which means all elements are stored next to each other in memory.
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
    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<" ";
    it+=2;
    cout<<*(it)<<" ";
    vector<int>::iterator itt= v.end();
    itt--;
    cout<<*(itt)<<" ";

    // for(vector<int>::iterator a=v.begin();a!=v.end();a++)
    // {
    //     cout<<endl<<*a<<" ";
    // }

    //instead writing the big vector<int>::itertor a
    //write this
    // for(auto a=v.begin();a!=v.end();a++)
    // {
    //      cout<<endl<<*a<<" ";
    // }

    for(auto b:v){
        cout<<endl<<b<<" "<<endl;
    }

    //erasing data from vector
    v.erase(v.begin()+1);
    for(auto b:v){
        cout<<endl<<b<<" ";
    }

    //inserting data in vector
    vector<int>t(2, 100);// {l00,100}
    t.insert(t.begin(), 300); // {300, l0,10,100, 100};
    t. insert(t.begin() + 1, 2, 10); // {300, 10, 10, 100, lee}
    for(auto c:t){
        cout<<endl<<c<<" ";
    }

    vector<int> copy(2,50);
    t.insert(t.begin(),copy.begin(),copy.end());
    for(auto c:t){
        cout<<endl<<c<<" ";
    }

    cout<<endl<<t.size();

    return 0;
}