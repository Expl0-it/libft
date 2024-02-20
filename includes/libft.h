/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamichal <mamichal@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:36:40 by mamichal          #+#    #+#             */
/*   Updated: 2024/02/20 18:07:04 by mamichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

//file operation modes # include <fcntl.h> 

//first

/** @brief Fill memory with a constant byte.
 * 
 * The memset() function fills the first n bytes of the memory area
 * pointed to by s with the constant byte c.
 *
 * 	@param s pointer to a memory area to fill
 * 	@param c character to fill the memory area with
 * 	@param n number of bytes to fill
 *  @return The memset() function returns a pointer to the memory area s.
 */
void	*ft_memset(void *s, int c, size_t n);
/** @brief Write zero-valued bytes.
 *
 *  The bzero() function sets the first n bytes of the
 * 	area starting at s to zero (bytes containing aq\0aq).
 *
 *  @param s pointer to a starting memory
 * 	@param n number of bytes to write to
 *  @return Void
 */
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
/** @brief Copy memory area.
 * 
 * 	Copies no more than n bytes from memory area src to memory area dest,
 * 	stopping when the character c is found.
 * 	If the memory areas overlap, the results are undefined.
 *
 * 	@param dest memory area to copy to
 * 	@param src memory area to copy from
 *  @param c int value of character to be found within memory
 * 	@param n maximal number of bytes to copy
 *  @return a pointer to the next character in dest after c, or NULL if not found
 */
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
/** @brief Copy memory area. 
 * 
 * 	The memmove() function copies n bytes from memory area src
 * 	to memory area dest.
 * 	The memory areas may overlap: copying takes place as though the bytes in src
 * 	are first copied into a temporary array that does not overlap src or dest,
 *  and the bytes are then copied from the temporary array to dest.
 *
 * 	@param dest memory area to copy to
 * 	@param src memory area to copy from
 * 	@param n maximal number of bytes to copy
 *  @return The memmove() function returns a pointer to dest
 *  memory area copied to)
 */
void	*ft_memmove(void *dest, const void *src, size_t n);
/** @brief Scan memory for a character.
 * 
 * 	The memchr() function scans the initial n bytes of the memory area
 *  pointed to by s for the first instance
 * 	of c. Both c and the bytes of the memory area pointed
 *  to by s are interpreted as unsigned char.
 * 
 *  @param s pointer to a memory area to scan in
 * 	@param c value to scan for (unsigned char)
 * 	@param n maximal number of bytes to scan
 *  @return a pointer to the matching byte or NULL if the character not found 
 */
void	*ft_memchr(const void *s, int c, size_t n);
/** @brief Compare memory areas.
 * 
 * 	The memcmp() function compares the first n bytes
 *	(each interpreted as unsigned char)
 *  of the memory areas s1 and s2.
 * 
 *  @param s1 first memory area to compare
 * 	@param s2 second memory area to compare
 * 	@param n maximal number of bytes to compare
 *  @return integer less than, equal to, or greater than zero
 *  if the first n bytes of s1 is found
 *  respectively, to be less than, to match,
 *  or be greater than the first n bytes of s2
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strlen(char const *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, size_t n);
/** @brief Convert a string to an integer.
 *
 *  The atoi() function converts the initial portion of the string
 *  pointed to by nptr to int.
 *
 *  @param nptr pointer to a string to be converted.
 *  @return Int converted from a string.
 *	@bug overflow not taken care of
 */
int		ft_atoi(const char *nptr);
/** @brief Checks for an alphabetic character.
 *
 * 	Check whether c, which must have the value of an unsigned char
 *  falls into a certain character class according to the current locale.
 *
 *  @param c int value of character in character encoding (unsigned char)
 *  @return 1 if true, 0 if false
 */
int		ft_isalpha(int c);
/** @brief Checks for a digit (0 through 9).
 *
 * 	Check whether c, which must have the value of an unsigned char
 *  falls into a certain character class according to the current locale.
 *
 *  @param c int value of character in character encoding (unsigned char)
 *  @return 1 if true, 0 if false
 */
int		ft_isdigit(int c);
/** @brief Checks for an alphanumeric character;
 *  it is equivalent to (isalpha(c) || isdigit(c)). \n \n
 *
 * 	Check whether c, which must have the value of an unsigned char
 *  falls into a certain character class according to the current locale.
 *
 *  @param c int value of character in character encoding (unsigned char)
 *  @return 1 if true, 0 if false
 */
int		ft_isalnum(int c);
/** @brief Checks if c is a 7-bit unsigned char from the ASCII character set.
 *
 * 	Check whether c, which must have the value of an unsigned char
 *  falls into a certain character class according to the current locale.
 *
 *  @param c int value of character in character encoding (unsigned char)
 *  @return 1 if true, 0 if false
 */
int		ft_isascii(int c);
/** @brief Checks for any printable character including space.
 *
 * 	Check whether c, which must have the value of an unsigned char
 *  falls into a certain character class according to the current locale.
 *
 *  @param c int value of character in character encoding (unsigned char)
 *  @return 1 if true, 0 if false
 */
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
/** @brief Allocate dynamic memory.
 *
 *  The calloc() function allocates memory for an
 *  array of nmemb elements of size bytes each and
 *  returns a 	pointer to the allocated memory.
 *  The memory is set to zero. If nmemb or size is 0,
 *  then calloc() returns either NULL, or a unique pointer
 *  value that can later be successfully passed to free().
 *
 *  @param nmemb number of elements to allocate
 * 	@param size size of each element to allocate
 *  @return pointer to the allocated memory, NULL on error or if any params = 0
 */
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);

//second

/** @brief Allocate dynamic memory.
 * 
 * 	Allocates (with malloc(3)) and returns a “fresh” memory
 * 	area. The memory allocated is initialized to 0. If the allocation fails,
 *  the function returns NULL
 * 
 *  @param size the size of the memory that needs to be allocated
 *  @return the allocated memory area
 */
void	*ft_memalloc(size_t size);
/** @brief Free memory area.
 * 
 * 	Takes as a parameter the address of a memory area that needs 
 *	to be freed with free(3), then puts the pointer to NULL
 *
 *  @param ap pointer’s address that needs its memory freed and set to NULL.
 *  @return Void
 */
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

//strequ->strcmp
//strnequ->strncmp

char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
/** @brief Convert integer to string.
 * 
 * 	Allocates (with malloc(3)) and returns a string
 * 	representing the integer received as an argument.
 * 	Negative numbers must be handled
 * 
 * 	@param n the integer to convert
 *  @return The string representing the integer or NULL if the allocation fails
 */
char	*ft_itoa(int n);
/** @brief Put a character in file.
 * 
 * 	Outputs the character ’c’ to the given file
 * 	descriptor. \n	 	
 * 	STDFD:
 * 	0 => stdin;
 * 	1 => stdout;
 * 	2 => stderr;
 * 
 * 	@param c The character to output
 * 	@param fd The file descriptor on which to write
 *  @return Void.
 */
void	ft_putchar_fd(char c, int fd);
/** @brief Put a string in file.
 * 
 * 	Outputs the string 's' to the given file
 * 	descriptor.
 * 	STDFD:
 * 	0 => stdin;
 * 	1 => stdout;
 * 	2 => stderr;
 * 
 * 	@param s The string to output
 * 	@param fd The file descriptor on which to write
 *  @return Void.
 */
void	ft_putstr_fd(char *s, int fd);
/** @brief Put a string followed by new line in file.
 * 
 * 	Outputs the string ’s’ to the given file
 * 	descriptor, followed by a newline.
 * 	STDFD:
 * 	0 => stdin;
 * 	1 => stdout;
 * 	2 => stderr;
 * 
 * 	@param s The string to output
 * 	@param fd The file descriptor on which to write
 *  @return Void.
 */
void	ft_putendl_fd(char *s, int fd);
/** @brief Put a number in file.
 * 
 * 	Outputs the integer ’n’ to the given file
 * 	descriptor.
 * 	STDFD:
 * 	0 => stdin;
 * 	1 => stdout;
 * 	2 => stderr;
 * 
 * 	@param n The integer to output
 * 	@param fd The file descriptor on which to write
 *  @return Void.
 */
void	ft_putnbr_fd(int n, int fd);
//second new

char	*ft_substr(char const *s, unsigned int start, size_t len);
//bonus

//additional

#endif
