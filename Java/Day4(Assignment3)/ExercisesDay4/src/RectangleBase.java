
public class RectangleBase {
	
	 protected int length;
	    protected int breadth;

	    public RectangleBase(int length, int breadth) {
	        this.length = length;
	        this.breadth = breadth;
	    }

	    public void printArea() {
	        int area = length * breadth;
	        System.out.println("Area: " + area);
	    }

	    public void printPerimeter() {
	        int perimeter = 2 * (length + breadth);
	        System.out.println("Perimeter: " + perimeter);
	    }

}
