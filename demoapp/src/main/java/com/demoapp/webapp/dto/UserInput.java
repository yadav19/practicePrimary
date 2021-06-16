package com.demoapp.webapp.dto;

import com.demoapp.webapp.entity.User;

//import org.graalvm.compiler.lir.LIRInstruction.Use;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

@Data
@AllArgsConstructor
@NoArgsConstructor
@ToString
public class UserInput {
	private User user;

	public User getUser() {
		return user;
	}

	public void setUser(User user) {
		this.user = user;
	}
	
}
