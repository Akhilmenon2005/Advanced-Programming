#include<iostream>
using namespace std;
class student{
	private:
	char name[40];
	char rollnumber[40];
	float cgpa;
	char bloodgroup;
	public:
	void display();
	void input();
};
void student::input()
{
cout<<"enter the name:"<<endl;
cin>>name;
cout<<"enter the rollnumber:"<<endl;
cin>>rollnumber;
cout<<"Enter Cgpa:"<<endl;
cin>>cgpa;
cout<<"enter the blood group:"<<endl;
cin>>bloodgroup;

}
void student::display()
{
cout<<"name:"<<name<<endl;
cout<<"Rollnumber:"<<rollnumber<<"\n";
cout<<"cgpa:"<<cgpa<<"\n";
cout<<"Bloodgroup:"<<bloodgroup<<"\n";
}
int main(){
int n,i;
cout<<"enter the number of students:"<<"\n";
cin>>n;
student students[n];
for(int i=0;i<n;i++)
{
	cout<<"enter the details of students"<<"\n";
			students[i].input();
}
for(int i=0;i<n;i++){

	cout<<"printing student details:"<<endl;
			students[i].display();
}
return 0;
}




