package org.queue;

public class Test {

	public static void main(String[] args) {

		MaxSizeQueue q=new MaxSizeQueue(3);
		System.out.println(q.isEmpty());
		System.out.println(q.isFull());
		q.enQueue(1);
		q.enQueue(2);
		q.enQueue(3);
		q.display();
		System.out.println(q.deQueue());
		System.out.println(q.isEmpty());
		System.out.println(q.isFull());
		
	}

}
