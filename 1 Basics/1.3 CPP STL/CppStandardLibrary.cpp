#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << ' ' << p.second << endl;

    pair<int, pair<int, int>> p1 = {1, {3, 4}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    pair<int, int> arr[] = {{30, 21}, {2, 5}, {5, 1}};

    cout << arr[0].second;
}

void printVector(vector<int> v5)
{
    for (auto it : v5)
    {
        cout << it << " ";
    }
    cout << endl;
}

void explainVector()
{
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.push_back({21, 30});

    vector<int> v1(5, 100);

    vector<int> v2(5);

    vector<int> v3(5, 20);
    vector<int> v4(v1);

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " " << endl;

    it = it + 2;
    cout << *(it) << " " << endl;

    vector<int>::iterator it1 = v.end();
    // vector<int>::iterator it = v.rend();
    // vector<int>:: iterator it = v.rbegin();

    cout << v[0] << " " << v.at(0) << endl;

    cout << v3.back() << endl;

    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    for (auto it = v1.begin(); it != v1.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    for (auto it : v1)
    {
        cout << it << " ";
    }
    cout << endl;

    // Erase
    vector<int> v5;
    v5.push_back(1);
    v5.push_back(2);
    v5.push_back(3);
    v5.push_back(4);
    v5.push_back(5);
    printVector(v5);

    v5.erase(v5.begin() + 1);
    printVector(v5);

    v5.erase(v5.begin() + 1, v5.begin() + 3);
    // start index end index
    printVector(v5);

    // Insert Function
    vector<int> v6(2, 100);          // 100 100
    v6.insert(v6.begin(), 300);      // 300 100 100
    v6.insert(v.begin() + 1, 2, 20); // 300 20 20 100 100

    vector<int> copy(2, 50);                        // {50,50}
    v6.insert(v.begin(), copy.begin(), copy.end()); // {50,50,300,20,20,100,100}

    /*
    v1 -> {10,20}
    v2 -> {30,40}
    v1.swap(v2) --> v1(30,40), v2(10,20)

    v.clear - erases entire vector

    v.empty() -- bool
    */
}

void explainList()
{
    // Doubly Linked List
    /*
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(2, 4);

    ls.push_front(5);
    ls.emplace_front(2, 4);
    */
    // Rest functions are same as vector
}

void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);     // 1
    dq.emplace_back(2);  // 1 2
    dq.push_front(4);    // 4 1 2
    dq.emplace_front(3); // 3 4 1 2

    dq.pop_back();  // 3 4 1
    dq.pop_front(); // 4 1

    dq.back();
    dq.front();

    // Rest functions are same as vector
}

void explainStack()
{
    stack<int> st;
    st.push(1); // 1
    st.push(2); // 2 1
    st.push(3); // 3 2 1
    st.push(4); // 4 3 2 1

    cout << st.top(); // 4
    st.pop();         // 3 2 1
    st.empty();       // false
    st.size();        // 3

    stack<int> st1;
    st1.swap(st);
}

void explainQueue()
{
    queue<int> q;
    q.push(1);    // 1
    q.push(2);    // 1 2
    q.emplace(4); // 1 2 4

    q.back() += 5;

    cout << q.back() << endl;
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
}

void explainPQ()
{
    priority_queue<int> pq;

    pq.push(5);     // 5
    pq.push(2);     // 5 2
    pq.push(8);     // 8 5 2
    pq.emplace(10); // 10 8 5 2

    cout << pq.top() << endl; // 10
    pq.pop();                 // 8 5 2
    cout << pq.top() << endl; // 8

    // size swap functions same as others
    priority_queue<int, vector<int>, greater<int>> pqueue;

    pqueue.push(5);     // 5
    pqueue.push(2);     // 2 5
    pqueue.push(8);     // 2 5 8
    pqueue.emplace(10); // 2 5 8 10

    cout << pqueue.top() << endl; // 2
    pqueue.pop();                 // 5 8 10
    cout << pqueue.top() << endl; // 5
}

void explainSet()
{
    set<int> st;
    st.insert(1);  // 1
    st.emplace(2); // 1 2
    st.insert(2);  // 1 2
    st.insert(4);  // 1 2 4
    st.insert(3);  // 1 2 3 4

    // Functionality of insert in vector can be used also, that only increases efficiency.

    // begin(), end(), rbegin(), rend(), size(), empty() and swap() are same as above

    // {1,2,3,4,5}
    auto it = st.find(3);

    // {1,2,3,4,5}
    auto it1 = st.find(6); // points afterwards in case element doesn't exist

    // {1,3,5}
    st.erase(5); // erases 5 takes logarithmic time

    int cnt = st.count(1);

    auto it2 = st.find(3);
    st.erase(it2); // it takes constant time

    // {1,2,3,4,5}
    auto it3 = st.find(2);
    auto it4 = st.find(4);
    st.erase(it3, it4); // after erase {1,4,5} (first, last)

    // lower_bound() and upper_bound() function works in the same way as im vector it does.

    // This is the syntax
    auto it5 = st.lower_bound(2);
    auto it6 = st.upper_bound(3);
}

void explainMultiSet()
{
    // Everythins is same as set
    // Only stores duplicates element too

    multiset<int> ms;
    ms.insert(1); // 1
    ms.insert(1); // 1 1
    ms.insert(1); // 1 1 1

    ms.erase(1); // all 1's are erased

    int cnt = ms.count(1);

    // only a single one is erased
    ms.erase(ms.find(1));

    // ms.erase(ms.find(1), ms.find(1)+2);

    // rest all functions are same as set
}

void explainUnorderedSet()
{
    unordered_set<int> us;

    // lower_bound() and upper_bound() function does not works rest all functions are same as above
    // Just that it stores in random order, and has a better complexity than set in most cases, except some when collision happens.
}

void explainMap()
{
    map<int, int> mpp;
    map<int, pair<int, int>> mppp;
    map<pair<int, int>, int> mpppp;

    mpp[1] = 2;
    // mpp.emplace({3,1});
    mpp.insert({2, 4});

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];
    cout << mpp[5];

    auto it = mpp.find(1);

    // all other are same
}

void explainMultimap()
{
    // Everything same as map, only it can store multiple keys only app[key] cannot be used here
}

void explainUnorderedMap()
{
    // Same as set and Unordered_set difference
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }
    else if (p1.second == p2.second)
    {
        if (p1.first > p2.second)
            return true;
    }
    return false;
}

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void explainExtra()
{
    int a[] = {2, 4, 6, 9, 8, 7, 3, 1};
    int n = 9;

    // sort(a, a + n);
    // print(a,n);

    // for vector - sort(v.begin(), v.end())
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(n - i + 1);
    }
    sort(v.begin() + 2, v.begin() + 6);
    printVector(v);

    // descending order
    sort(v.begin(), v.end(), greater<int>());
    printVector(v);

    pair<int, int> arr[] = {{1, 2}, {2, 1}, {4, 1}};
    // sort it according to second element
    // if second element is same, then sort it according to the first element but in descending

    sort(arr, arr + 3, comp);
    // {4,1} {2,1} {1,2}

    int num = 7;
    int cnt = __builtin_popcount(num);
    cout << cnt << endl;

    long long int number = 89758296450001;
    cnt = __builtin_popcountll(number);
    cout << cnt << endl;

    string s = "123";
    do
    {
        cout << s << " ";
    } while (next_permutation(s.begin(), s.end()));

    int maxi;
    maxi = *max_element(a, a + n);
    cout<< (maxi);
}

int main()
{
    // explainPair();
    // explainVector();
    // explainStack();
    // explainQueue();
    // explainPQ();

    explainExtra();
    return 0;
}