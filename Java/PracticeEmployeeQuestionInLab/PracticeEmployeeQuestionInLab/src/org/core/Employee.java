package org.core;

import java.io.Serializable;
import java.time.LocalDate;
import java.util.Objects;

import org.exception.CustomException;

public class Employee implements Serializable {
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	private int id;
	private String name;
	private Department dept;
	LocalDate joiningDate;
	
	
	
	public Employee(int id, String name, Department dept, LocalDate joiningDate) throws CustomException {
		super();
		this.id = id;
		this.name = name;
		this.dept = dept;
		this.joiningDate = joiningDate;
	}


	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public Department getDept() {
		return dept;
	}
	public void setDept(Department dept) {
		this.dept = dept;
	}
	public LocalDate getJoiningDate() {
		return joiningDate;
	}
	public void setJoiningDate(LocalDate joiningDate) {
		this.joiningDate = joiningDate;
	}
	
	@Override
	public String toString() {
		return "Employee [id=" + id + ", name=" + name + ", dept=" + dept + ", joiningDate=" + joiningDate + "]";
	}


	@Override
	public int hashCode() {
		return Objects.hash(dept, id, joiningDate, name);
	}


	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Employee other = (Employee) obj;
		return dept == other.dept && id == other.id && Objects.equals(joiningDate, other.joiningDate)
				&& Objects.equals(name, other.name);
	}
	
	
	
}
