package com.demoapp.webapp.entity;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;


import com.sun.istack.NotNull;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

@Data
@NoArgsConstructor
@AllArgsConstructor
@ToString
@Entity
public class Address {

	@Id
	@GeneratedValue
	private int id;
	@NotNull
	private String streetName;
	@NotNull
	private String city;
	@NotNull
	private String state;
	@NotNull
	private int zipCode;
	
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getStreetName() {
		return streetName;
	}
	public void setStreetName(String streetName) {
		this.streetName = streetName;
	}
	public String getCity() {
		return city;
	}
	public void setCity(String city) {
		this.city = city;
	}
	public String getState() {
		return state;
	}
	public void setState(String state) {
		this.state = state;
	}
	public int getZipCode() {
		return zipCode;
	}
	public void setZipCode(int zipCode) {
		this.zipCode = zipCode;
	}
	@Override
	public String toString() {
		return "Address [id=" + id + ", streetName=" + streetName + ", city=" + city + ", state=" + state + ", zipCode="
				+ zipCode + "]";
	}
	
}
