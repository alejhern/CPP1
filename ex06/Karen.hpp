/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 20:39:43 by alejhern          #+#    #+#             */
/*   Updated: 2025/11/27 20:39:45 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H
# include <iostream>
typedef std::string string;

# define DEFAULT "\001\033[0;39m\002"
# define RED "\001\033[1;91m\002"
# define YELLOW "\001\033[1;93m\002"
# define MAGENTA "\001\033[1;95m\002"
# define GRAY "\001\033[1;90m\002"

class Karen
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    Karen(/* args */);
    ~Karen();
    void complain( string level );
};

#endif