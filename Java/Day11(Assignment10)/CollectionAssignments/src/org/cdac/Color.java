package org.cdac;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.Scanner;

public class Color {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		ArrayList<String> colorList = new ArrayList<>();
		colorList.add("Blue");
		colorList.add("Green");
		colorList.add("Red");
		colorList.add("Pink");
		colorList.add("Oranage");
		colorList.add("Brown");
		
		display(colorList);

		colorList.add(0, "Black");

		System.out.println("Enter index");
		int index = scanner.nextInt();
		scanner.nextLine();
		
		System.out.println(colorList.get(index));

//		modify by given

		colorList.set(1, "Yellow");

		display(colorList);

		colorList.remove(2);

		display(colorList);
		
		System.out.println("Enter color to search");
		
		String sColor=scanner.nextLine();
		
		for(String color:colorList)
		{
			if(color.equals(sColor))
			{
				System.out.println(color);
				break;
			}
		}
		
//		Sort
		Collections.sort(colorList);
		display(colorList);
		
//		ArrayList copy
		ArrayList<String> newColorList = new ArrayList<>(Collections.nCopies(colorList.size(), null));
		Collections.copy(newColorList, colorList);
		System.out.println("Copied List");
		display(newColorList);
		
//		Suffel elements
		Collections.shuffle(colorList);
		System.out.println("After suffel");
		display(colorList);
		
//		reverse
		Collections.reverse(newColorList);
		System.out.println("After Reverse");
		display(newColorList);
}

	private static void display(ArrayList<String> colorList) {
		Iterator<String> itr = colorList.iterator();
		while (itr.hasNext()) {
			String data = itr.next();
			System.out.println(data);

		}

	}

}
