package org.queue;

public interface Queue {
	
	public void enQueue(int element);
	public int deQueue();
	public boolean isEmpty();
	public boolean isFull();

}
