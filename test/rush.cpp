/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 11:37:11 by obamzuro          #+#    #+#             */
/*   Updated: 2018/06/30 11:54:09 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <cstdio>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <sys/utsname.h>

int main(void)
{
	char *login = getlogin();
	std::cout << login << std::endl;
	char host[255];
	if (gethostname(host, 255) == -1)
	{
		perror("gethostname");
	}
	else
	{
		std::cout << host << std::endl;
	}
	struct utsname uts;
	uname(&uts);
	std::cout << uts.sysname << std::endl;
	std::cout << uts.nodename << std::endl;
	std::cout << uts.release << std::endl;
	std::cout << uts.version << std::endl;
	std::cout << uts.machine << std::endl;
}
