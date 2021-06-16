package com.demoapp.webapp.repository;

import org.springframework.data.jpa.repository.JpaRepository;

import com.demoapp.webapp.entity.Address;

public interface AddressRepository extends JpaRepository<Address, Integer>{

}
