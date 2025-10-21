package org.cdac;

import java.util.Iterator;
import java.util.Scanner;
import java.util.TreeSet;

public class TreeSetEntry implements Comparable<TreeSetEntry>   {
	
	String color;
	
	public TreeSetEntry(String color) {
		super();
		this.color = color;
	}
	

	public TreeSetEntry() {
		super();
	}
	


	public String getColor() {
		return color;
	}


	public void setColor(String color) {
		this.color = color;
	}
	


	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);

        TreeSet<String> colors = new TreeSet<>();
        colors.add("Blue");
        colors.add("Green");
        colors.add("Red");
        colors.add("Pink");
        colors.add("Oranage");
        colors.add("Brown");
        display(colors);
        
        
        
        TreeSet<String> newcolors=(TreeSet<String>) colors.clone();
        System.out.println("After adding to another tree set");
        display(newcolors);
        
        //Reversed Treeset
        
        display(newcolors);
        System.out.println(colors.first());
        System.out.println(colors.last());
        
        //Reversed Order
        System.out.println("In reversed Order");
        for(String col:colors) {
        	System.out.println(col);
        }
        
        System.out.println("Enter Color");
        String color=scanner.nextLine();
        
//        Iterator<String> itr=colors.iterator();
//        while(itr.hasNext()) {
//        	String data=itr.next();
//        	if(data.compareTo(color)==0||data.compareTo(color)>0) {
//        		System.out.println(data);
//        		break;
//        	}
        String cl =colors.ceiling(color);
        System.out.println(cl);
        	}
        

	private static void display(TreeSet<String> colors) {
		Iterator<String> itr=colors.iterator();
        while(itr.hasNext()) {
        	String data=itr.next();
        	System.out.println(data);
        	}
		
	}
	@Override
	public String toString() {
		return String.valueOf(color);
	}

	@Override
	public int compareTo(TreeSetEntry o) {
		if(color.compareTo(o.color)==0) {
			return 0;
		}
		else if(color.compareTo(o.color)>0) {
			return -1;
		}
		else {
			return 1;
		}
	}

	

	

	
	
	
	

}
