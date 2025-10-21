package org.utils;

public interface TraverseList<T> {

	public T getFirst()throws TraverseListException;
	
	public T getLast()throws TraverseListException;
	
	public T getNext()throws TraverseListException;

	public T getPrevious()throws TraverseListException;

}
