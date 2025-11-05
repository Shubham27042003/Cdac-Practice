package org.linkedlist;

public class QueueSLTest {

	public static void main(String[] args) {
		
		QueueUsingSL<Integer>qsl=new QueueUsingSL<>();
		
		System.out.println(qsl.isEmpty());
		System.out.println(qsl.isFull());
		qsl.enQueue(1);
		qsl.enQueue(2);
		qsl.enQueue(3);
		qsl.display();
		System.out.println(qsl.deQueue());
		System.out.println(qsl.isEmpty());
		qsl.display();
		System.out.println(qsl.isFull());
		qsl.display();

	}

}
