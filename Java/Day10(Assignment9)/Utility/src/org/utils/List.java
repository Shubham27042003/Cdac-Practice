package org.utils;

public interface List<T> extends TraverseList<T> {

	public void adddata(T data)throws UpdateListException;
	
	public void delete(int index)throws UpdateListException;
}
