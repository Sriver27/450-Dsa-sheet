// Union

// int doUnion(int a[], int n, int b[], int m)  {
//         set<int> s;
//         vector<int> v;
//         for(int i=0; i<n; i++) {
//             s.insert(a[i]);
//         }
//         for(int i=0; i<m; i++) {
//             s.insert(b[i]);
//         }
//         for(auto i : s) {
//             v.push_back(i);
//         }
//         return v.size();
//     }




// Intersection


#include<iostream>
#include<set>
#include<vector>
using namespace std;


vector<int> doIntersection(int a[], int n, int b[], int m)  {

    int count = 0;
    vector<int> v;
       
        set<int> s;
       
        for(int i=0; i<n; i++) {
            s.insert(a[i]);
        }
        for(int i=0; i<m; i++) {
            if(s.find(b[i]) != s.end()){
            count++;
            v.push_back(b[i]);
            s.erase(b[i]);}
        }
        return v;
    }

    int main(){
        int a[] = {2,5,5,10,2};
        int b[] = {2,10};

        vector<int> v;

        v=doIntersection(a,5,b,2);

        for(int i=0;i<v.size();i++){
        cout<<v[i]<< " ";
        }
    }