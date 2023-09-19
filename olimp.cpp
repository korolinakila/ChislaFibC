#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> mass;
    int n=1000, k=1, f=1, p, y;
    mass.push_back(k);
    mass.push_back(f);
    for(int i=2; i<n; i++){
        mass.push_back((mass[i-2]%10)+(mass[i-1]%10));
    }
    cin >> y;
    cout << mass[y]%10;


return 0;
}
