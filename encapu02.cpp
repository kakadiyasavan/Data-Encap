#include<iostream>

using namespace std;

class user{
	
	public:
		
		int cust_id;
		char cust_name[20];
		int cust_age;
		char cust_telecome[20]; //Brand name
		int cust_mobile; //10 Number
		char cust_city[20];
		int cust_simcard;  //in year 
		
		void setter(){
			
			cout<<"Enter ID : ";
			cin>>cust_id;
			cout<<endl;
			cout<<"Enter NAME : ";
			cin>>cust_name;
			cout<<endl;
			cout<<"Enter AGE : ";
			cin>>cust_age;
			cout<<endl;
			cout<<"Enter TELECOME : ";
			cin>>cust_telecome;
			cout<<endl;
			cout<<"Enter MOBILE : ";
			cin>>cust_mobile;
			cout<<endl;
			cout<<"Enter CITY : ";
			cin>>cust_city;
			cout<<endl;
			cout<<"Enter SIMCARD : ";
			cin>>cust_simcard;
		
		}
		
		void getter(){
			
			cout<<"ID : "<<cust_id<<endl;
			cout<<"NAME : "<<cust_name<<endl;
			cout<<"AGE : "<<cust_age<<endl;
			cout<<"TELECOME : "<<cust_telecome<<endl;
			cout<<"MOBILE : "<<cust_mobile<<endl;
			cout<<"CITY : "<<cust_city<<endl;
			cout<<"SIMCARD : "<<cust_simcard;;
					
			}
};

main(){
	
	user obj;
	obj.setter();
	cout<<endl;
	obj.getter();
	cout<<endl;
	obj.setter();
	cout<<endl;
	obj.getter();
	cout<<endl;
	obj.setter();
	cout<<endl;
	obj.getter();
	cout<<endl;
	obj.setter();
	cout<<endl;
	obj.getter();
	cout<<endl;
	obj.setter();
	cout<<endl;
	obj.getter();
	
}
