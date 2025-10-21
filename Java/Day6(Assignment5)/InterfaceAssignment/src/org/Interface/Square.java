package org.Interface;

public class Square implements RegularPolygon {

	double side;
	
	
	public Square(double side) {
		super();
		this.side = side;
	}
	
	

	public double getSide() {
		return side;
	}



	public void setSide(double side) {
		this.side = side;
	}



	@Override
	public double getNumSides() {
		// TODO Auto-generated method stub
		return 4;
	}

	@Override
	public double getSideLength() {
		// TODO Auto-generated method stub
		return getSide();	
	}

}
