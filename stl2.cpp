#include <iostream>
#include <vector>
#include <utility>
#include <list>
#include <deque>
#include<algorithm>
#include <stack> //LIFO
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2)
{
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    if(p1.first>p1.first) return true;
    return false;
};
int main()
{
    //  A list is a doubly linked list, where each element (node) contains a 
    // value and pointers to the next and previous nodes.
    list<int> ls;
    ls.push_back(2);//{2}

    // list stores elements in non-contiguous memory locations,
    //  with each element linked to its predecessor and successor.
    
    ls.emplace_back(4);//{2,4}
    ls.emplace_front();

    vector<int> a={1,10,4,6};
    sort(a.begin(),a.end());
    for(auto i:a)
    {
        cout<<endl<<i;
    }
    sort(a.begin(),a.end(),greater<int>());
    for(auto i:a)
    {
        cout<<endl<<i;
    }
    pair<int,int>b[]={{1,2},{2,1},{4,1}};
    // sort it according to second element
// if second element is same, then sort
// it according to first element but in descending
    sort(b,b+3,comp);
    for(auto i:b)
    {
        cout<<endl<<i.first<<" "<<i.second<<endl;
    }
    // int num=7;
    // int cnt=__builtin_popcount();

    string s="123";
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    return 0;
}
