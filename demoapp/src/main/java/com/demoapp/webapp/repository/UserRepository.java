package com.demoapp.webapp.repository;

import org.springframework.data.jpa.repository.JpaRepository;

import com.demoapp.webapp.entity.User;

public interface UserRepository extends JpaRepository<User, Integer>{

}
