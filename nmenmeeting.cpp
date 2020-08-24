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
  
    cout << "Following activities are selected "; 
  
    // The first activity always gets selected 
    int i = 0; 
    cout << "(" << arr[i].start << ", " << arr[i].finish << "), "; 
  
    // Consider rest of the activities 
    for (int j = 1; j < n; j++) 
    { 
     
      if (arr[j].start >= arr[i].finish) 
      { 
          cout << "(" << arr[j].start << ", "
              << arr[j].finish << "), "; 
          i = j; 
      } 
    } 
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

