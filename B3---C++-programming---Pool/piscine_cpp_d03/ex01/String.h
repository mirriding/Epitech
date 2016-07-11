/*
** String.h for string_meow in /home/mar_b/rendu/piscine_cpp_d03/ex00
**
** Made by Fabien Martinez
** Login   <mar_b@epitech.net>
**
** Started on  Fri Jan  9 09:17:53 2015 Fabien Martinez
** Last update Fri Jan  9 23:44:19 2015 Fabien Martinez
*/

#ifndef STRING_H_
#define STRING_H_

#include <sys/types.h>

typedef struct	s_string
{
  char		*str;
  void		(*assign_s)(struct s_string *this, struct s_string const *str);
  void		(*assign_c)(struct s_string *this, char const *s);
}		String;

void	StringInit(String* this, char const * s);
void	StringDestroy(String* this);

#endif /* !STRING_H_ */
