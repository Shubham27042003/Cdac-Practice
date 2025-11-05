package org.linkedlist;

public interface List<T> {
	
	public void addFront(T element);
	public void addEnd(T element);
	public T deleteFront();
	public T deleteEnd();

}
