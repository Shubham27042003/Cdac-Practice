package org.linkedlist;

public interface List<T> {
	
	public void addFront(T element);
	public void addEnd(T element);
	public T deleteFront();
	public T deleteEnd();
	public void delete(T element);
	public void deleteAll(T element);
	public boolean search(T element);

}
