package org.utils;

import java.util.Iterator;

public class LinkedList<T> implements List<T>,Iterable<T> {

	Node<T> start;
	
	Node<T> current;
	
	Node<T> end;
	
	int maxCount=0;
	
	@Override
	public void adddata(T data)throws UpdateListException
	{
		if(data==null)
			throw new UpdateListException("Invalid Data");
		Node<T> tempNode=new Node<T>(data);
		
		if(start==null)
		{
			start=current=end=tempNode;
		}
		else
		{
			end.next=tempNode;
			tempNode.previous=end;
			end=tempNode;
		}
		current=start;
		maxCount++;
			
	}
	
	@Override
	public void delete(int index)throws UpdateListException
	{
		if(start==null || index>maxCount-1)
			throw new UpdateListException("Invalid Data");
		if(start==end)
		{
			start=current=end=null;
		}else if(index==0)
		{
			start=start.next;
			start.previous=null;
		}else if(index==maxCount)
		{
			end=end.previous;
			end.next=null;
		}else {
			Node<T> tempNode=start;
			for(int iTemp=0;iTemp<index;iTemp++,tempNode=tempNode.next);
			tempNode.previous.next=tempNode.next;
			tempNode.next.previous=tempNode.previous;
		}
		current=start;
		maxCount--;
	}
	
	
	@Override
	public T getFirst()throws TraverseListException
	{
		if(start==null)
			throw new TraverseListException("List is Empty");
		
		current=start;
		return current.data;
	}

	
	@Override
	public T getLast()throws TraverseListException
	{
		if(start==null)
			throw new TraverseListException("List is Empty");
		
		current=end;
		return current.data;
	}
	
	
	@Override
	public T getNext()throws TraverseListException
	{
		if(start==null)
			throw new TraverseListException("List is Empty");
		else if(current.next==null)
			throw new TraverseListException("Already at End");
		
		current=current.next;
		return current.data;
	}

	
	@Override
	public T getPrevious()throws TraverseListException
	{
		if(start==null)
			throw new TraverseListException("List is Empty");
		else if(current.previous==null)
			throw new TraverseListException("Already at Start");
		
		current=current.previous;
		return current.data;
	}

	
	
	public int getMaxCount()
	{
		return maxCount;
	}
	
	
	public void swap(T firstData, T secondData)throws LinkedListException
	{
	    if (firstData == null || secondData == null)
	    	throw new TraverseListException("Nodes are Empty");
	    else if(firstData.equals(secondData))
	    	throw new TraverseListException("Nodes are same by value");


	    Node<T> node1 = null, node2 = null, temp = start;

	    while (temp != null) {
	        if (temp.data.equals(firstData)) {
	            node1 = temp;
	        } else if (temp.data.equals(secondData)) {
	            node2 = temp;
	        }
	        temp = temp.next;
	    }

	    if (node1 != null && node2 != null) {
	        T tempData = node1.data;
	        node1.data = node2.data;
	        node2.data = tempData;
	    }
	}

	@Override
	public Iterator<T> iterator() {
		return new LinkedListIterator();
	}
	
	private class LinkedListIterator implements Iterator<T>
	{
		int index;
		{
			current=start;
		}

		@Override
		public boolean hasNext() {
			return index<maxCount;
		}

		@Override
		public T next() {
			T data =current.data;
			if(current.next==null || start==null) {
				current=current.next;
				index++;
			}
			return data;
		}
		
	}
	
	

}
