
public class RectangleSquareEntry {
	 public static void main(String[] args) {
		 
	        RectangleBase rectangle = new RectangleBase(5, 10);
	        System.out.println("Rectangle:");
	        rectangle.printArea();
	        rectangle.printPerimeter();

	        Square square = new Square(7);
	        System.out.println("\nSquare:");
	        square.printArea();
	        square.printPerimeter();
	    }

}
