#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;



int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> a2(n);
    
    
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    
    
    for(int i = 0;i < n;i++){
        for(int i = 0; i < n; i++){
       if((i+k)<n){
           a2[i]=a[i+k];
       }
        else {
            a2[i]=a[i+k-n];
        }
    }
    }
    
    
    for(int i = 0; i < n;i++){
        cout << a2[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}
