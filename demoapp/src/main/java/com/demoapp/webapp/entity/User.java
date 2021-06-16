package com.demoapp.webapp.entity;

import java.util.List;

import javax.persistence.*;

import org.hibernate.annotations.Cascade;
import org.hibernate.annotations.OnDelete;
import org.hibernate.annotations.OnDeleteAction;

//import org.hibernate.annotations.OnDelete;

import com.sun.istack.NotNull;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

@Data
@AllArgsConstructor
@NoArgsConstructor
@ToString
@Entity
public class User {
	@Id
	@GeneratedValue
	private int id;
	
	public User(int id, String firstname, String lastname, int age, List<Address> address) {
		super();
		this.id = id;
		this.firstname = firstname;
		this.lastname = lastname;
		this.age = age;
		this.address = address;
	}

	public User() {
		super();
		// TODO Auto-generated constructor stub
	}

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getFirstname() {
		return firstname;
	}

	public void setFirstname(String firstname) {
		this.firstname = firstname;
	}

	public String getLastname() {
		return lastname;
	}

	public void setLastname(String lastname) {
		this.lastname = lastname;
	}

	public int getAge() {
		return age;
	}

	public void setAge(int age) {
		this.age = age;
	}

	public List<Address> getAddress() {
		return address;
	}

	public void setAddress(List<Address> address) {
		this.address = address;
	}

	@Override
	public String toString() {
		return "User [id=" + id + ", firstname=" + firstname + ", lastname=" + lastname + ", age=" + age + ", address="
				+ address + "]";

	}
	@NotNull
	private String firstname;
	@NotNull
	private String lastname;
	@NotNull
	private int age;
	
	@OneToMany(targetEntity = Address.class, cascade = CascadeType.PERSIST ,fetch = FetchType.EAGER)
	@JoinColumn(name = "user_id",referencedColumnName = "id")
	@OnDelete(action = OnDeleteAction.NO_ACTION)
	private List<Address> address;
}
