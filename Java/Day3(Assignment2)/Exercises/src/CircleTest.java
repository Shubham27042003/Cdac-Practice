
public class CircleTest {

	public static void main(String[] args) {
		float radius,perimeter,area;
		int choice;
		System.out.println("Enter radius");
		radius=Input.getFloat();
		
		do {
			System.out.println("1] Find Perimeter");
			System.out.println("2] Find Area");
			System.out.println("3] Exit");
			System.out.println("Enter your choice");
			choice=Input.getInt();
			
			switch(choice)
			{
			case 1:
			{
				perimeter=Circle.findPerimeter(radius);
				System.out.println("Perimeter is : "+perimeter);
			}
			break;
			case 2:
			{
				area=Circle.findArea(radius);
				System.out.println("Area is : "+area);
			}
			break;
			case 3:
			{
				System.out.println("Thank you!!!");
			}
			break;
			default:
			{
				System.out.println("Enter valid choice!!!");
			}
			break;
			}
			
		}while(choice!=3);
		

	}

}
