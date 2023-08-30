import java.util.*;
class Person
{
    String name;
    Person(String name)
    {
        this.name=name;
    }
    void Display()
    {
        System.out.println("Name: "+name);
    }
}
class Student extends Person
{   String name;
    int roll;
    String course;
    Student(String name)
    {
        super(name);
        this.name=name;
        
    }
    void Accept(int roll,String course)
    {
        this.roll=roll;
        this.course=course;
    }
    void Display()
    {
        System.out.println("Name: "+name+".............."+"Roll: "+roll+".........."+"Course: "+course);
    }
}
class Employee extends Person
{   String name;
    int empid;
    String dept;
    Employee(String name)
    {
        super(name);
        this.name=name;
    }
    void Accept(int empid,String dept)
    {
       this.empid=empid;
       this.dept=dept;
    }
    void Display()
    {
        System.out.println("Name: "+name+".............."+"Empid: "+empid+".........."+"Department: "+dept);
    }
}
public class Class_Object_program1
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the name:");
		String name=sc.nextLine();
		System.out.println("enter the rollno and course: ");
		int roll=sc.nextInt();
		String course=sc.nextLine();
		System.out.println("enter th empid and dept: ");
		int empid=sc.nextInt();
		String dept=sc.nextLine();
		Student s=new Student(name);
		Employee e=new Employee(name);
		s.Accept(roll,course);
		e.Accept(empid,dept);
	    System.out.println("Student Details: ");
		s.Display();
		System.out.println("Employee Details: ");
		e.Display();
	}
}