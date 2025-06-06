#include<bits/stdc++.h>
using namespace std;
int main(){

    // vector<int> vec;
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.emplace_back(6);
 
    // vector<int> vec = {1,2,3,4,5};
    //  vector<int> vec(10,-1);
    // vector<int> vec = {1,2,3,4,5};
    // vector<int>vec2(vec);
    
    // vec.erase(vec.begin()+1,vec.begin()+3);

    // vec.insert(vec.begin()+1,69);


    // vec.clear();


    // for(int val:vec){
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;
    // cout<<"val at indx 2: "<<vec[2]<<" or "<<vec.at(2)<<endl;
    // cout<<"val at front: "<<vec.front()<<endl;
    // cout<<"val at back: "<<vec.back()<<endl;
    // cout<<"val is empty: "<<vec.empty()<<endl;


    // vector<int>vec ={1,2,3,4,5};
    // cout<<"Vector at begin: "<<*vec.begin()<<endl;
    // cout<<"Vector at end: "<<*vec.end()<<endl;

    //forward loop
    // vector<int>::iterator it;
    // for(it = vec.begin();it!=vec.end();it++){
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;

    //backward loop
    // vector<int>::reverse_iterator it;
    // for(it = vec.rbegin();it!=vec.rend();it++){
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;




    //list

    // list<int> l;
    // l.push_back(1);
    // l.push_back(2);
    // l.push_front(3);
    // l.push_front(5);

    // for(int val : l ){
    //     cout<<val<<" ";
    //     //5,3,1,2
    // }
    // cout<<endl;


    //Deque

    // deque<int> l;
    // l.push_back(1);
    // l.push_back(2);
    // l.push_front(3);
    // l.push_front(5);

    // for(int val : l ){
    //     cout<<val<<" ";
    //     //5,3,1,2
    // }
    // cout<<endl;



    //Pair

    //pair<string,int> p ={"tanvir",3};
    // pair<string,pair<char,int>> p ={"tanvir",{'a',3}};

    // cout<<p.first<<endl;
    // cout<<p.second.first<<endl;
    // cout<<p.second.second<<endl;



    //pair in vector

    // vector<pair<int,int>> vec = {{1,2},{2,3},{3,4}};

    // vec.push_back({69,70});
    // vec.emplace_back(71,72); //in-place objects create
    // for(auto p:vec){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }


    //STACK
    
    // stack<int>s;
    // s.push(1);
    // s.push(2);
    // s.push(3);
    

    // stack<int>s2;
    // s2.swap(s);
    // cout<<"Size: "<<s2.size()<<endl;

    // while(!s.empty()){
    //     cout<<"Top: "<<s.top()<<endl;
    //     s.pop();
    // }
    // cout<<endl;


    //Queue
//     queue<int>q;
//    q.push(1);
//    q.push(2);
//   q.push(3);
    

//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//     cout<<endl;

    //Priority_Queue
    // priority_queue<int>q;
    // q.push(5);
    // q.push(3);
    // q.push(10);
    // q.push(2);
    // q.push(1);

    // while(!q.empty()){
    //     cout<<q.top()<<" ";
    //     q.pop();
    // }

    // priority_queue<int,vector<int>,greater<int>>q;
    // q.push(5);
    // q.push(3);
    // q.push(10);
    // q.push(2);
    // q.push(1);

    // while(!q.empty()){
    //     cout<<q.top()<<" ";
    //     q.pop();
    // }

    //MAP

    // map<string,int> m;
    // m["tv"] =100;
    // m["laptop"] =100;
    // m["headphones"] =50;
    // m.insert({"kola",2});
    // m.emplace("dal",2);
    // m.erase("kola");
    // for(auto p:m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }

    // cout<<"Count= "<<m.count("laptop")<<endl;

    // if(m.find("camera") !=m.end()){
    //     cout<<"found"<<endl;
    // }else{
    //     cout<<"not found"<<endl;
    // }



    //MultiMap

    // multimap<string,int> m;
    
    // m.emplace("dal",2);
    // m.emplace("dal",2);
    // m.emplace("dal",2);
    // m.emplace("dal",2);
  
    // m.erase("dal");
    // for(auto p:m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }

    //Unordered Map
    
    // unordered_map<string,int> m;
    
    // m.emplace("dal",2);
    // m.emplace("kola",2);
    // m.emplace("murgi",2);
    // m.emplace("bhaat",2);
  
    // m.erase("dal");
    // for(auto p:m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }

//SET

// set<int> s;
// s.insert(1);
// s.insert(2);
// s.insert(3);
// s.insert(4);
// s.insert(5);
// s.insert(6);

// cout<<"Lower Bound: "<<*(s.lower_bound(4))<<endl;
// cout<<"Upper Bound: "<<*(s.upper_bound(4))<<endl;


// cout<<s.size()<<endl;
// for(auto val:s){
//     cout<<val<<" ";
// }
 
//MultiSet
multiset<int> s;
s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(4);
s.insert(6);

cout<<"Lower Bound: "<<*(s.lower_bound(4))<<endl;
cout<<"Upper Bound: "<<*(s.upper_bound(4))<<endl;


cout<<s.size()<<endl;
for(auto val:s){
    cout<<val<<" ";
}
 

    return 0;
}