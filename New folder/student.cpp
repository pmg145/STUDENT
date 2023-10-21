#include "student.h"

student::student()
{
	public :
		double totalmarks( ){
			double total ,percentage;
			cout<<"enter marks of three subjects out of 100"<<endl;
			cin>>mark1>>mark2>>mark3;
			total = mark1+mark2+mark3;
			cout<<"total marks are"<<total<<endl;
			
			
		}
		double Percentage(){
			double per;
			per=(total*100)/300 ;
			cout<<"Percentage is "<<per<<endl;
			
		}
		void getid(){
			return id ;
			void getname(){
				return name;
			}
			int setid(int id){
				this.id=id;
			}
			string setname(string name){
				this.name=name;
			}
		}
}
