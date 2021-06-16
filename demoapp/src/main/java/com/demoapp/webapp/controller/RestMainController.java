package com.demoapp.webapp.controller;

import java.util.ArrayList;
import java.util.List;

import javax.websocket.server.PathParam;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

import com.demoapp.webapp.dto.UserInput;
import com.demoapp.webapp.entity.User;
import com.demoapp.webapp.repository.AddressRepository;
import com.demoapp.webapp.repository.UserRepository;

@RestController
public class RestMainController {
	
	@Autowired
	private UserRepository userRepository;
	
	@PostMapping("/addusers")
	public void addusers(@RequestBody UserInput request )
	{
		User u = request.getUser();
		System.out.println(u.getFirstname());
		userRepository.save(request.getUser());
//		return userRepository.getById(user.getId());
	}
	
	@GetMapping("/all")
	public List<User> all()
	{
		return userRepository.findAll();
	}

	@RequestMapping(path="/userid/{id}", method = RequestMethod.GET)
	public User userid(@PathVariable("id") int id)
	{
		User newuser =  userRepository.getById(id);
		return new User(newuser.getId(),newuser.getFirstname(),newuser.getLastname(),newuser.getAge(),newuser.getAddress());
//		return newuser; 
		// this crashes - why find out???
		// heads : No answer in StackOverflow
	}
	
	@RequestMapping(path = "/updateid/{id}",method = RequestMethod.PUT)
	public void updateid(@PathVariable("id") int id)
	{
		User userupdate = userRepository.getById(id);
		userupdate.setAge(22);
		userRepository.save(userupdate);
	}
	
	@RequestMapping(path = "/delete/{id}", method = RequestMethod.DELETE)
	public void delete(@PathVariable("id") int id )
	{
		userRepository.deleteById(id);
	}
}
