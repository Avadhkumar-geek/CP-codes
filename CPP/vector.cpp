#include <iostream>
#include <vector>
using namespace std;

void printVec(vector <int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}

int main()
{
    // pair<int, string> pr;
    // // pr = make_pair(1, "Avadh");
    // pr = { 1, "abc"};
    // cout << pr.first << " " << pr.second;

    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    printVec(v);

    return 0;
}

