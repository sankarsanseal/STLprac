//
//  main.cpp
//  STLPrac
//
//  Created by Sankarsan Seal on 03/09/16.
//  Copyright © 2016 Sankarsan Seal. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    vector<int> myvec;
    int number;
    int i;
    int item;
    std::vector<int>::iterator ptr;
    
    
    cout<<"Enter the number of items to be sorted:";
    cin>>number;
    
    for(i=0;i<number;i++)
    {
        cout<<"item"<<i+1<<":";
        cin>>item;
        myvec.push_back(item);
    }
    
    
    sort(myvec.begin(),myvec.end());
    
    for(i=0;i<number;i++)
        cout<<myvec.at(i)<<" ";
    cout<<endl;
    
    cout<<"Enter the element in the sorted list to find:";
    cin>>item;
    
    ptr=find(myvec.begin(),myvec.end(),item);
    
    if(ptr!=myvec.end())
        cout<<"Element found at: "<<ptr-myvec.begin()<<endl;
    else
        cout<<"Element is not in this vector";
    
    cout<<endl;
    
    
    return 0;
}
