package org.generic.queue;

public class MaxSizeQueue<T> implements Queue<T> {

	private Object[]queueData;
	private int front;
	private int rear;
	
	
	public MaxSizeQueue(int size) {
		queueData=new Object[size];
		front=-1;
		rear=-1;
	}

	@Override
	public void enQueue(T element) {
		if(isFull())
			throw new IllegalStateException("Queue is full");
		if(isEmpty()) {
			front=0;
		}
		queueData[++rear]=element;
		
	}

	@Override
	public T deQueue() {
		if(isEmpty())
			throw new IllegalStateException("Queue is empty");
		T res=(T) queueData[front];
		front++;
		return res;
	}

	@Override
	public boolean isEmpty() {
		if(front==-1 && rear==-1)
			return true;
		return false;
	}

	@Override
	public boolean isFull() {
		if(rear==queueData.length-1)
			return true;
		return false;
	}
	
	public void display()
	{
		for(int i=front;i<=rear;i++)
		{
			System.out.println(queueData[i]+" ");
		}
	}

}
