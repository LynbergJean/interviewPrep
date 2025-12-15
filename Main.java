import java.util.*;

//static is a common property that is common to all of the elements in the class almost like a global
//variable

//for everyone there is 7 billion ppl on the earth that does not change for anyone it is a fact it
//it is not related to the object, 

/*static means object independant.*/

/*why is main static for what purpose do we use static we use so it can be used by everything?? 
no makes no sense.

inside a static method you cannot use non static data
since main is static we cannot use non static methods inside main
the non static methods belong to an object and the static ones do not  */


class Human{
	int age;
	String name;
	int salary;
	boolean married;
	static int population;
	
	void pop()
	{
		System.out.println(Human.population);
	}
	
	Human()
	{
		Human.population += 1;
		this.age = 0;
		this.married = false;

	}

	Human(int a, String n, int s, boolean m)
	{
		this.age = a;
		this.name = n;
		this.salary = s;
		this.married = m;
		
		//however we cannot use the this keyword
		//use the class name
		Human.population += 1;
	}

}


public class Main{
	public static void main(String[] args)
	{
		Human caleb = new Human();
		Human lynberg = new Human(21,"Lynberg",16,false);
		System.out.println(lynberg.population);
		lynberg.pop();
	}
}
