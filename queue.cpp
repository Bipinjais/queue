#include<iostream>
#include<queue>
using namespace std;
 
int main()
{
	queue<int> q;
	int n;
	int j;
	cout<<"enter the number enteries you want:";
	cin>>j;
	for(int i;i<j;i++){                    
	cout<<"enter element:";
	cin>>n;
	q.push(n);
       }
       
cout<<"size:";
cout<<q.size();
cout<<" ";
while(!q.empty())
{
	cout<<q.front()<<" ";
	q.pop();
}


}  