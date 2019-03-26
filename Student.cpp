#include<iostream>
#include<string>

using namespace std;


 class Human{
 	private:
	 	string name;
	 	int age;
 	public:
 		Human(string n, int a)
 		{
 			setName(n);	
 			setAge(a);
		}
 	public:
 		void setName(string n)
 		{
 			name  = n;
		}
	public:
		string getName()
		{
			return name;
		}
	public:
 		void setAge(int a)
 		{
 			age  = a;
		}
	public:
		int getAge()
		{
			return age;
		}
 	public:
 		void display()
 		{
 			cout<<getName()<<getAge();	 	
		}
 };

class Student : public Human{
	private:
		int rollNo;
		float marks;
		
	public:
		Student(int r, float m, string name, int age) : Human(name, age)
		{
			setRollNo(r);
			setMarks(m);	
		}
	public:
		void setRollNo(int r)
		{
			rollNo = r;	
		}
	public:
		int getRollNo()
		{
			return rollNo;	
		}
		public:
			void setMarks(int m)
			{
				marks = m;	
			}
	public:
		int getMarks()
		{
			return marks;	
		}	
	public:
		void display()
		{
			Human::display();
			cout<<getRollNo()<<getMarks();	
		} 
};
int main(){
	Student s(23, 256, "Yasir", 30);
	s.display();	   
}
