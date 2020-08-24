// C++ program for activity selection problem. 
// The following implementation assumes that the activities 
// are already sorted according to their finish time 
#include<bits/stdc++.h>
#define  fo(i,n) for(i=0;i<n;i++)
using namespace std;
struct Activitiy 
{ 
    int start, finish; 
}; 

bool activityCompare(Activitiy s1, Activitiy s2) 
{ 
    return (s1.finish < s2.finish); 
} 

void printMaxActivities(Activitiy arr[], int n) 
{ 
    // Sort jobs according to finish time 
    sort(arr, arr+n, activityCompare); 
 
  int i=0,count=0;
    // Consider rest of the activities 
    for (int j = 1; j < n; j++) 
    { 
     
      if (arr[j].start >= arr[i].finish) 
      { 
          count++;
          i = j; 
      } 
    }
     cout << "No of Platforms needed is "<<count+1;  
} 

int main() 
{ 
	int n,i;
	cin>>n;
	int f[n],s[n];
	Activitiy arr[n];
	fo(i,n)
	cin>>f[i];
	fo(i,n)
	cin>>s[i];
	fo(i,n)
	arr[i]={f[i],s[i]};
	printMaxActivities(arr, n); 
	return 0; 
} 

