package org.linkedlist;

public class DoublyLinkedList<T> implements List<T> {
	private class Node<T> {
		T data;
		Node<T> next;
		Node<T> prev;

		public Node(T data) {
			super();
			this.data = data;
			this.next = null;
			this.prev = null;

		}

	}

	Node<T> head;

	@Override
	public void addFront(Object element) {
		Node<T> newNode = new Node(element);
		if (head == null) {
			head = newNode;
			return;
		}
		newNode.next = head;
		head.prev = newNode;
		head = newNode;

	}

	@Override
	public void addEnd(Object element) {
		Node<T> newNode = new Node(element);
		if (head == null) {
			head = newNode;
			return;
		}
		Node<T> current = head;
		while (current.next != null) {
			current = current.next;
		}
		newNode.prev = current;
		current.next = newNode;

	}

	@Override
	public T deleteFront() {
		if (head == null)
			return null;
		Node<T> current = head;
		if (head.next == null) {
			head = null;
		} else {
			head = head.next;
			head.prev = null;
		}

		return current.data;
	}

	@Override
	public T deleteEnd() {
		if (head == null)
			return null;
		Node<T> current = head;
		while (current.next != null) {
			current = current.next;
		}
		if (current.prev == null) {
			head = null;
		} else {
			current.prev.next = null;
		}
		return current.data;
	}

	@Override
	public void delete(T element) {
		if (head == null)
			return;
		Node<T> current = head;
		if (head.data.equals(element)) {
			deleteFront();
		} else {

			while (current.next != null) {
				if (current.next == null) {
					deleteEnd();
				} else if (current.data.equals(element)) {
					current.prev.next = current.next;
					if (current.next != null)
						current.next.prev = current.prev;
					return;
				} else {
					current = current.next;
				}

			}

		}
	}

	@Override
	public void deleteAll(T element) {
		if (head == null)
			return;

		Node<T> current = head;

		while (current != null) {
			if (head.data.equals(element)) {
				deleteFront();
				current=head;
			} else if (current.data.equals(element)) {
				Node<T>nextNode=current.next;
				current.prev.next = nextNode;
				if (nextNode!=null)nextNode.prev=current.prev;
				current = nextNode;
			} else {
				current = current.next;
			}
		}
	}

	@Override
	public boolean search(Object element) {

		Node<T> current = head;
		while (current.next != null) {
			if (current.data.equals(element))
				return true;

			current = current.next;
		}
		return false;
	}

	public void display() {
		Node<T> current = head;
		while (current != null) {
			System.out.print(current.data + " ");
			current = current.next;
		}
		System.out.println();
	}
}
