// pairs 

void explainPair(){
    pair <int,int> p ={1,3}
    pair <int, pair<int,int>> p2 = {1,{3,4}};
    cout<<p2.second.first;
    pair <int, int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[1].second;
}

// vectors (containers that can change size)

vector <int> v; //declaration
v.push_back(1); //insertion at end
v.emplace_back(2); //faster insertion at end
vector <int> v2(5,100); //declaration with size and initial value
vector <int> v3(v2); //declaration with another vector

// iterators
vector <int> :: iterator it = v2.begin();
it++;
cout<<*(it)<<" ";
it= it + 2;
cout<<*(it)<<" ";

// loops
for(it = v2.begin(); it != v2.end(); it++){
    cout<<*(it)<<" ";
}
for(auto it = v2.begin(); it != v2.end(); it++){
    cout<<*(it)<<" ";
}
for(auto it : v2){
    cout<<it<<" ";
}

// erase
v2.erase(v2.begin()+1); // erases index 1
v2.erase(v2.begin()+1, v2.begin()+3); // erases from index 1 to 2
// insert
v2.insert(v2.begin()+2, 5); // inserts 5 at index 2
v2.insert(v2.begin()+2, 2, 5); // inserts two 5s starting from index 2
// size
cout<<v2.size();
// clear
v2.clear(); // clears the vector
// check if empty
cout<<v2.empty();
// pop_back
v2.pop_back(); // removes last element

// erase from vector while iterating
for(auto it = v2.begin(); it != v2.end(); ){
    if((*it) % 2 == 0){
        it = v2.erase(it);
    }
    else{
        it++;
    }
}

// insert in vector while iterating
for(auto it = v2.begin(); it != v2.end(); it++){
    if((*it) % 2 != 0){
        it = v2.insert(it, (*it) * 2);
        it++;
    }
}

//lists
list <int> l;
l.push_back(1);
l.emplace_back(2);
l.push_front(3);
l.emplace_front(4);

// deque
deque <int> d;
d.push_back(1);
d.emplace_back(2);
d.push_front(3);
d.emplace_front(4);
d.pop_back();
d.pop_front();


//stack 
stack <int> s;
s.push(1);
s.emplace(2);
s.push(3);
cout<<s.top();
s.pop();

//queue
queue <int> q;
q.push(1);
q.emplace(2);
q.push(3);
cout<<q.front();
cout<<q.back();
q.pop();

//priority queue
priority_queue <int> maxh; //max heap
priority_queue <int, vector<int>, greater<int>> minh; //min heap
maxh.push(1);
maxh.push(3);
maxh.push(2);
cout<<maxh.top();

// min heap
minh.push(1);
minh.push(3);

//set
set <int> s;
s.insert(1);
s.emplace(2);
s.insert(2);
s.insert(4);
for(auto it : s){
    cout<<it<<" ";
}

//multiset
multiset <int> ms;
ms.insert(1);
ms.insert(1);
ms.insert(2);

//map
map <int, string> m;
m[1] = "abc";
m.emplace(2, "def");
m[3] = "ghi";
for(auto it : m){
    cout<<it.first<<" "<<it.second<<endl;
}

//unordered map
unordered_map <int, string> m;
m[1] = "abc";
m.emplace(2, "def");
m[3] = "ghi";
for(auto it : m){
    cout<<it.first<<" "<<it.second<<endl;
}


//sorting
vector <int> v = {4,3,1,5,2};
sort(v.begin(), v.end()); //ascending
sort(v.begin(), v.end(), greater<int>()); //descending
//custom sorting
bool compare(int a, int b){
    return a > b; //descending
}
sort(v.begin(), v.end(), compare);
//reverse
reverse(v.begin(), v.end());
//maximum and minimum
cout<<*max_element(v.begin(), v.end());
cout<<*min_element(v.begin(), v.end());
//sum
cout<<accumulate(v.begin(), v.end(), 0);
//count
cout<<count(v.begin(), v.end(), 3);
