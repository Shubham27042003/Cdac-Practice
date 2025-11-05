package org.linkedlist;

public class SinglyLinkedList<T> implements List<T> {

	private class Node<T>{
		T data;
		Node<T> next;
		public Node(T data) {
			super();
			this.data = data;
			this.next = null;
		}
		
		
	}
	
	Node<T> head;
	Node<T> tail;
	@Override
	public void addFront(T element) {
		Node<T> newNode=new Node<T>(element);
		if(head==null)
		{
			head=newNode;
			tail=newNode;
		}
		newNode.next=head;
		head=newNode;
		
	}

	@Override
	public void addEnd(T element) {
		Node<T> newNode=new Node<T>(element);
		if(head==null)
		{
			head=newNode;
			tail=newNode;
		}
		tail.next=newNode;
		tail=newNode;
		
	}

	@Override
	public T deleteFront() {
		if(head==null)
		{
			return null;
		}
		
		T temp;
		if(head==tail)
		{
			temp=head.data;
			head=null;
			tail=null;
		}
		
		temp=head.data;
		head=head.next;
		return temp;
	}

	@Override
	public T deleteEnd() {
		if(head==null)
		{
			return null;
		}
		
		T temp;
		if(head==tail)
		{
			temp=head.data;
			head=null;
			tail=null;
		}
		
		Node<T>current=head;
		while(current.next!=tail)
		{
			current=current.next;
		}
		temp=tail.data;
		tail=current;
		tail.next=null;
		return temp;
	}

	
	public void display()
	{
		Node<T>current=head;
		while(current!=null)
		{
			System.out.print(current.data+" ");
			current=current.next;
		}
		System.out.println();
	}
}
