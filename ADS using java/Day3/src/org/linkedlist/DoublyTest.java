package org.linkedlist;

public class DoublyTest {

	public static void main(String[] args) {

		 DoublyLinkedList<Integer>dl=new  DoublyLinkedList<>();
		 
		 dl.addFront(10);
		 dl.addEnd(12);
		 dl.addFront(14);
		 dl.addEnd(16);
		 dl.addEnd(14);
		 dl.display();
		 
//		 System.out.println(dl.deleteFront());
//		 dl.display();
//		 System.out.println(dl.deleteEnd());
//		 dl.display();
//		 System.out.println(dl.search(10));
//		 System.out.println(dl.search(20));
		 
		 dl.delete(12);
		 dl.display();
		 dl.deleteAll(14);
		 dl.display();
		 
		 
		
	}

}
