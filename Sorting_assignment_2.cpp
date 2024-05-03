//Q1) Which of the following is true about selection sort:
    a) In each iteration we find the minimum element in the unsorted part of the array.
    b) In each iteration we find the index of the minimum element in the unsorted part of the array.
    c)  We swap the index of the minimum element with the first element of the array.
    d) It takes O(n^2) swaps.
    ANSWER - b



//Q2) Which of the following examples represent the worst case input for an insertion sort?
    a) array in sorted order
    b) large array
    c) normal unsorted array
    d) array sorted in reverse order
    ANSWER - d


//Q3) How many passes would be required during insertion sort to sort an array of 5 elements?
    a) 1
    b) Depends on order of elements
    c) 4
    d) 5
    ANSWER- c


//Q4) Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
two numbers formed from digits of the array. Please note that all digits of the given array must be
used to form the two numbers.
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    vector<int>v={1,3,2,0,5,6,4,8,9,7};
    int n=v.size(),i,j,t,m,x;
    for(i=0;i<2;i++)
    {
        m=INT_MAX;
        for(j=i;j<n;j++)
        {
            if(v[j]<m)
            {
                m=v[j];
                x=j;
            }
        }
        t=v[i];
        v[i]=v[x];
        v[x]=t;
    }
    cout<<"minimum sum of two number = "<<v[0]+v[1];
}




// Q5) Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort and display the sorted array.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="suraj";
    int n=s.size(),i,j,x;
    char t;
    for(i=0;i<n-1;i++)
    {
        x=0;
        for(j=0;j<n-i-1;j++)
        {
            if(s[j]>s[j+1])
            {
                t=s[j];
                s[j]=s[j+1];
                [j+1]=t;
                x++;
            }
        }
        if(x==0) break;
    }
    cout<<s;
}