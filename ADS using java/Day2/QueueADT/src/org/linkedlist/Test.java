package org.linkedlist;

public class Test {

	public static void main(String[] args) {

		SinglyLinkedList<Integer>sl=new SinglyLinkedList<>();
		
		sl.addFront(10);
		sl.addFront(12);
		sl.addEnd(13);
		sl.display();
		System.out.println(sl.deleteFront());
		sl.display();
		System.out.println(sl.deleteEnd());
		sl.display();
	}

}
