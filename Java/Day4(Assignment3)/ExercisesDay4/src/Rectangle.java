
public class Rectangle {

	double length,breadth;
	public Rectangle()
	{
		
	}
	
	public Rectangle(double length,double breadth)
	{
		this.length=length;
		this.breadth=breadth;
	}

	
	public double getArea()
	{
		return length*breadth;
	}
	public double getLength() {
		return length;
	}

	public void setLength(double length) {
		this.length = length;
	}

	public double getBreadth() {
		return breadth;
	}

	public void setBreadth(double breadth) {
		this.breadth = breadth;
	}
	
	
	
	public static void main(String[] args)
	{
		Rectangle rectangle1=new  Rectangle(5,4);
		Rectangle rectangle2=new  Rectangle(8,5);
		
		System.out.println("Area of rectangle is : "+rectangle1.getArea());
		System.out.println("Area of rectangle is : "+rectangle2.getArea());
				
	}
	
	
}
