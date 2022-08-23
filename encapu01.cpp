#include<iostream>

using namespace std;

class user{
	
	public:
		
		int std_id;
		char std_name[20];
		int std_age;
		char std_course[20];
		char std_email[20];
		char std_city[20];
		char std_college[20];
		
		void setter(){
			
			cout<<"Enter ID : ";
			cin>>std_id;
			cout<<endl;
			cout<<"Enter NAME : ";
			cin>>std_name;
			cout<<endl;
			cout<<"Enter AGE : ";
			cin>>std_age;
			cout<<endl;
			cout<<"Enter COURSE : ";
			cin>>std_course;
			cout<<endl;
			cout<<"Enter EMAIL : ";
			cin>>std_email;
			cout<<endl;
			cout<<"Enter CITY : ";
			cin>>std_city;
			cout<<endl;
			cout<<"Enter COLLEGE : ";
			cin>>std_college;
			
		}
		
		void getter(){
			
			cout<<"ID : "<<std_id<<endl;
			cout<<"NAME : "<<std_name<<endl;
			cout<<"AGE : "<<std_age<<endl;
			cout<<"COURSE : "<<std_course<<endl;
			cout<<"EMAIL : "<<std_email<<endl;
			cout<<"CITY : "<<std_city<<endl;
			cout<<"COLLEGE : "<<std_college;
					
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
