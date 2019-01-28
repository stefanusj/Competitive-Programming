// Status   : Accepted (hardzal)                                                                     
// Problem  : https://training.ia-toki.org/training/curriculums/2/courses/4/chapters/30/problems/127/
#include<iostream>
#include<vector>

using namespace std;

int euclid(int a, int b) {
    return (b == 0) ? a : euclid(b, a % b);
}

int main()
{
    int n, a, b;
    vector<int> fpb;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        fpb.push_back(euclid(a, b));
    }
    for(int i = 0; i < fpb.size(); i++) {
        cout << fpb.at(i) << endl;
    }
}
