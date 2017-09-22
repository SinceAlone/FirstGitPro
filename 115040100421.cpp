#include<iostream.h>
void main()
{
	int x,y;
	cout<<"please input x:"<<endl;
		cin>>x;
	if(x<10)
		cout<<"y=1"<<endl;
	else
		if(x<100)
			cout<<"y=2"<<endl;
		else
			if(x<1000)
				cout<<"y=3"<<endl;
			else
				cout<<"y=4"<<endl;
}