/*
15.Given two library versions of an executable:
 for example, “10.1.1.3” and “10.1.1.9” or “10” and “10.1”.
 Find out which one is more recent? Strings can be empty also.
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    string s1,s2;
    cin>>s1>>s2;

    stringstream ss1(s1);
    stringstream ss2(s2);

    vector<string> tokens1;
    vector<string> tokens2;

    string temp_str;
    while(getline(ss1, temp_str, '.')){
        tokens1.push_back(temp_str);
    }
    while(getline(ss2, temp_str, '.')){
        tokens2.push_back(temp_str);
    }

    int n1 = tokens1.size(),n2=tokens2.size();
    int a = n1<n2?n1:n2;
    int k;
    for(int i=0;i<a;i++){
        int a1= stoi(tokens1[i]);
        int a2= stoi(tokens2[i]);
        if(a1==a2){
            k=i;
            continue;
        }
        if(a1>a2){
            cout<<s1;
            k=i;
            return 0;
            break;
        }else{
            cout<<s2;
            k=i;
            return 0;
            break;

        }
    }
    if(n1>n2){
        int ak = stoi(tokens1[k]);
        if(ak>0){
            cout<<s1;
            return 0;
        }
    }else{
        int ak = stoi(tokens2[k]);
        if(ak>0){
            cout<<s2;
            return 0;
        }
    }


    return 0;
}
