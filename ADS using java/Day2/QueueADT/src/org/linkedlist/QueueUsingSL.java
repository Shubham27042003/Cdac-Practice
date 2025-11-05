package org.linkedlist;

public class QueueUsingSL<T> {
	
	private SinglyLinkedList<T>qsl=new SinglyLinkedList<T>();
	
	public void enQueue(T element) {
		qsl.addEnd(element);
	}
	public T deQueue() {
		T res=qsl.deleteFront();
		return res;
	}
	public boolean isEmpty() {
		if(qsl.head==null)
			return true;
		return false;
	}
	public boolean isFull() {
		return false;
	}
	public void display() {
		qsl.display();
		
	}

}
