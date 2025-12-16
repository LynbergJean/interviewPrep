import java.util.*;



public class Inheritance{
	//what is a copy constructor its when another object is passed in a constructor
	int l;
	int w;
	int h;

	Inheritance()
	{
		this.l = -1;
		this.w = -1;
		this.h = -1;
	}
	

	Inheritance(int L, int W, int H)
	{
		this.l = L;
		this.h = H;
		this.w = W;
	}

	Inheritance(Inheritance x)
	{
		this.l = x.l;
		this.w = x.w;
		this.h = x.h;
	}
	
	Inheritance(int x)
	{
		this.l = this.w = this.h = x;
	}
		
	public void display()
	{
		System.out.println(this.l, this.w, this.h);

		//this i called constructor overloading/ can we do method overloading as well
		//this is a thing i called my first time doing this
		
		//i am lynberg jean and i am doing this
		//what are the multiple types of inheritances
		/*
		single inheritance
		happens when one class extends another class
		
		multilevel inheritanc
		when a class that was extended becomes the parent of another class
		Box is parent of Box weight and Box weight is a parent of Box price
		
		do random stuff that is the way to learn OOP it is a set of rules i have to go and do
		it myself.

		packages are a way to make the code you are writing more managable and organized
		
		multiple inheritance 
		when one class is extanding more than one classes

		multiple inheritance is not supported in java because of the ambiguous nature of it.
		if 1 class extends 2 classes and they both have the same variable then java will not 
		know which class to pick the variable in. 

		then how do we implement it in java and for that we can use the keyword 
		

		Interface defines what a class does, like a template not the value of it. 

		hiearchial inheritance:
		when one class is inherited by many classes a can be extended my b c d and many others
		this is basically single inheritance but for multiple classes 

		Hybrid iheritance
		it is a combination of single of and multiple inheritance b extends a and c extends a 
		and no classes cannot inherit itself.


		*/



	}
	
	
}
