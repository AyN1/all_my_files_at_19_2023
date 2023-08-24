/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekina <ekina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:38:47 by ekina             #+#    #+#             */
/*   Updated: 2023/08/20 16:44:59 by ekina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char *argv[])
{
	/*main idea : function that would transform nbrs into letters max 999.
	How to transform any nbr -> calculate the digits of the nbr, (max 12 digits 999 999 999 999)
	if digit count 10 <= nbr <= 12 : billion prefix
	if digit count 7 <= nbr <= 9 : million prefix
	if digit count 4 <= nbr <= 6 : thousand prefix.
	if digit count 1 <= nbr <= 3 : no prefix.
	Calculate the number of digit % 3 = amount of digit in the leftmost group of 3 digits 1 = 1, 2 = 2, 0 = 3.
	-> send the number in the leftmost group to the nbrs to letter (max 999) function, example : 27 -> twenty seven
	-> add the according prefix example : 27 000 000 == 8 digits -> million prefix.
	final step -> recursivly run the function back with the leftmost group of digit removed.

	EXAMPLE -> 58 614 876:

	- 8 digits.
	- (8 % 3) = 2 -> taking the leftmost 2 digits -> 58.
	- run the nbr to letters funct (max 999) -> fifty eight.
	- adding the according prefix (8 = million) -> fifty eight MILLION.
	- (8 % 3) = 2 -> running the function recursivly removing the first 2 digits.

	- 614 876 -> 6 digits.
	- (6 % 3) = 0 -> leftmost 3 digits.
	- nbr to lttrs funct -> six hundred fourteen.
	- prefix (6 = thousand) -> six hundred fourteen THOUSAND.
	- (6 % 3) = 0 -> remove first 3 digits, run recursivly.

	- 876 -> 3 digits.
	- (3 % 3) = 0 -> leftmost 3 digits.
	- nbr to lttrs funct -> eight hundred seventy six.
	- prefix (3 = no prefix) -> eight hundred seventy six.
	- digit <= 3 -> end of the function no recursivty.


	So on and so forth...
	
	- add everything in one big string -> 
	- fifty eight million six hundred fourteen thousand eight hundred seventy six.

	Prior to that we need to allocate the right memory size for the string.
	We had no idea how to do so by calculating the size before having the string written.
	So we tought of having 4 cases depending on the digits count(12 to 10, 9 to 7, 6 to 4, 3 to 1).
	Allocate allocate memory for the longest scenario within the digit range.
	- Example 3 digit -> "Seven hundred seventy seven" string is 27 char long.
	So the longest possible string for 3 digits is 27.
	-> if 3 to 1 digits always allocate for a 27 char long string.
	by doing this we can allocate memory not the perfect way but 
	at least we're not allocating 9999999 in all cases with no reflexion behind 
	*/ 
}
