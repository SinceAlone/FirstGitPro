#include<iostream.h>
void main()
{
	int i=1,x;
	cout<<"please input x:"<<endl;
	cin>>x;
	while(x>10)
	{
	x=x/10;
	i=i++;
	}
	switch(i)
	{
		case 1:cout<<"x<10"<<endl;break;
		case 2:cout<<"10<=x<=99"<<endl;break;
		case 3:cout<<"100<=x<=999"<<endl;break;
		default:cout<<"x>1000"<<endl;
	}
}