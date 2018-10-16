/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 15:04:31 by obamzuro          #+#    #+#             */
/*   Updated: 2018/06/20 20:08:37 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <typeinfo>

class Weapon
{
	std::string		name;
};

class Human
{
public:
	Weapon		*weapon;
	std::string	name;

	int			q;
//	const std::string	&getName(void) const;
	std::string	&getName(void);
};

//const std::string		&Human::getName(void) const
//{
//	return (name);
//}
//
std::string		&Human::getName(void)
{
	return (name);
}

int main()
{
	Human a;
	a.name = "jim";
	a.getName();
	((const Human)a).getName();

}
