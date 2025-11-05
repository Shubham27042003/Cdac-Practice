package org.generic.queue;

public interface Queue<T> {

	public void enQueue(T element);
	public T deQueue();
	public boolean isEmpty();
	public boolean isFull();
}
