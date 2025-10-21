package org.Interface;

public interface RegularPolygon {

	 public abstract double getNumSides();
	 public abstract double getSideLength();
	 
	 default double getPerimeter ()
	 {
		 return getNumSides()* getSideLength();
	 }


	 default double  getInteriorAngle()
	 {
		 return ((getNumSides()-2)*3.14)/getNumSides();
	 }

}
