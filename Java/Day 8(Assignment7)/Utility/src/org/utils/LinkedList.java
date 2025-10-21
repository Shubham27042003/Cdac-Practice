package org.utils;

import java.util.Iterator;

public class LinkedList<T> implements List<T>,Iterable<T> {

	Node<T> start;
	
	Node<T> current;
	
	Node<T> end;
	
	int maxCount=0;
	
	@Override
	public void adddata(T data)
	{
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
	public void delete(int index)
	{
		if(start==null || index>maxCount-1)
			return;
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
	public T getFirst()
	{
		if(start==null)
			return null;
		
		current=start;
		return current.data;
	}

	
	@Override
	public T getLast()
	{
		if(start==null)
			return null;
		
		current=end;
		return current.data;
	}
	
	
	@Override
	public T getNext()
	{
		if(start==null || current.next==null)
			return null;
		
		current=current.next;
		return current.data;
	}

	
	@Override
	public T getPrevious()
	{
		if(start==null || current.previous==null)
			return null;
		
		current=current.previous;
		return current.data;
	}

	
	
	public int getMaxCount()
	{
		return maxCount;
	}
	
	
	public void swap(T firstData, T secondData) {
	    if (firstData == null || secondData == null || firstData.equals(secondData)) {
	        return;
	    }

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
