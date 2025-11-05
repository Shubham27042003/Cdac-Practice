package org.queue;

public class MaxSizeQueue implements Queue {

	private int[]queueData;
	private int front;
	private int rear;
	
	
	public MaxSizeQueue(int size) {
		queueData=new int[size];
		front=-1;
		rear=-1;
	}

	@Override
	public void enQueue(int element) {
		if(isFull())
			throw new IllegalStateException("Queue is full");
		if(isEmpty()) {
			front=0;
		}
		queueData[++rear]=element;
		
	}

	@Override
	public int deQueue() {
		if(isEmpty())
			throw new IllegalStateException("Queue is empty");
		int res=queueData[front];
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
