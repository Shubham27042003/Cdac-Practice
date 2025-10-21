package org.utils;

public interface List<T> extends TraverseList<T> {

	public void adddata(T data);
	
	public void delete(int index);
}
