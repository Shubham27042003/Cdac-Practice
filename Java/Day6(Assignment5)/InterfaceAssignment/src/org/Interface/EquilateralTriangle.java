package org.Interface;

public class EquilateralTriangle implements RegularPolygon {

	double side;
	
	public EquilateralTriangle(double side) {
		super();
		this.side = side;
	}



	@Override
	public double getNumSides() {
		// TODO Auto-generated method stub
		return 3;
	}

	@Override
	public double getSideLength() {
		// TODO Auto-generated method stub
		return this.side;
	}

}
