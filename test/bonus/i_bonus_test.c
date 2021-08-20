/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_bonus_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 04:16:12 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/20 04:29:44 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/test.h"

void	i_bonus_test()
{
	int	result1;
	int	result2;

	printf(PINK("\nprinting integer with Flags:\n"));
	printf(PINK("\nSpecifier i:\n"));
	printf(LIGHT_BLUE2("test 1:\n"));
	result1 = printf("%10s = |%5i|\n", "%5i", -42);
	result2 = ft_printf("%10s = |%5i|\n", "%5i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%5i|\n", "%5i", 42);
	result2 = ft_printf("%10s = |%5i|\n", "%5i", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	printf(LIGHT_BLUE2("test 2:\n"));
	result1 = printf("%10s = |%-5i|\n", "%-5i", -42);
	result2 = ft_printf("%10s = |%-5i|\n", "%-5i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%-5i|\n", "%-5i", 42);
	result2 = ft_printf("%10s = |%-5i|\n", "%-5i", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%05i|\n", "%05i", -42);
	result2 = ft_printf("%10s = |%05i|\n", "%05i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%05i|\n", "%05i", 42);
	result2 = ft_printf("%10s = |%05i|\n", "%05i", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+5i|\n", "%+5i", -42);
	result2 = ft_printf("%10s = |%+5i|\n", "%+5i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+5i|\n", "%+5i", 42);
	result2 = ft_printf("%10s = |%+5i|\n", "%+5i", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |% 5i|\n", "% 5i", -42);
	result2 = ft_printf("%10s = |% 5i|\n", "% 5i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |% 5i|\n", "% 5i", 42);
	result2 = ft_printf("%10s = |% 5i|\n", "% 5i", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");

	printf(LIGHT_BLUE2("test 3:\n"));
	result1 = printf("%10s = |%-05i|\n", "%-05i", -42);
	result2 = ft_printf("%10s = |%-05i|\n", "%-05i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%-05i|\n", "%-05i", 42);
	result2 = ft_printf("%10s = |%-05i|\n", "%-05i", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0-5i|\n", "%0-5i", -42);
	result2 = ft_printf("%10s = |%0-5i|\n", "%0-5i", -42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%5-0i|\n", "%5-0i", -42);
	result2 = ft_printf("%10s = |%5-0i|\n", "%5-0i", -42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%+05i|\n", "%+05i", -42);
	result2 = ft_printf("%10s = |%+05i|\n", "%+05i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+05i|\n", "%+05i", 42);
	result2 = ft_printf("%10s = |%+05i|\n", "%+05i", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0+5i|\n", "%0+5i", -42);
	result2 = ft_printf("%10s = |%0+5i|\n", "%0+5i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0+5i|\n", "%0+5i", 42);
	result2 = ft_printf("%10s = |%0+5i|\n", "%0+5i", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |% 05i|\n", "% 05i", -42);
	result2 = ft_printf("%10s = |% 05i|\n", "% 05i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |% 05i|\n", "% 05i", 42);
	result2 = ft_printf("%10s = |% 05i|\n", "% 05i", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0 5i|\n", "%0 5i", -42);
	result2 = ft_printf("%10s = |%0 5i|\n", "%0 5i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0 5i|\n", "%0 5i", 42);
	result2 = ft_printf("%10s = |%0 5i|\n", "%0 5i", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%-+05i|\n", "%-+05i", -42);
	result2 = ft_printf("%10s = |%-+05i|\n", "%-+05i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%-+05i|\n", "%-+05i", 42);
	result2 = ft_printf("%10s = |%-+05i|\n", "%-+05i", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+-05i|\n", "%+-05i", -42);
	result2 = ft_printf("%10s = |%+-05i|\n", "%+-05i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+-05i|\n", "%+-05i", 42);
	result2 = ft_printf("%10s = |%+-05i|\n", "%+-05i", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0+-5i|\n", "%0+-5i", -42);
	result2 = ft_printf("%10s = |%0+-5i|\n", "%0+-5i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0+-5i|\n", "%0+-5i", 42);
	result2 = ft_printf("%10s = |%0+-5i|\n", "%0+-5i", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%- 05i|\n", "%- 05i", -42);
	result2 = ft_printf("%10s = |%- 05i|\n", "%- 05i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%- 05i|\n", "%- 05i", 42);
	result2 = ft_printf("%10s = |%- 05i|\n", "%- 05i", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");

	printf(LIGHT_BLUE2("test 4:\n"));
	result1 = printf("%10s = |%5.3i|\n", "%5.3i", -42);
	result2 = ft_printf("%10s = |%5.3i|\n", "%5.3i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%5.4i|\n", "%5.4i", -42);
	result2 = ft_printf("%10s = |%5.4i|\n", "%5.4i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%5.4i|\n", "%5.4i", 42);
	result2 = ft_printf("%10s = |%5.4i|\n", "%5.4i", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+5.4i|\n", "%+5.4i", 42);
	result2 = ft_printf("%10s = |%+5.4i|\n", "%+5.4i", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |% 5.4i|\n", "% 5.4i", 42);
	result2 = ft_printf("%10s = |% 5.4i|\n", "% 5.4i", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%-5.4i|\n", "%-5.4i", 42);
	result2 = ft_printf("%10s = |%-5.4i|\n", "%-5.4i", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%#5i|\n", "%#5i", 42);
	result2 = ft_printf("%10s = |%#5i|\n", "%#5i", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%+ 05i|\n", "%+ 05i", -42);
	result2 = ft_printf("%10s = |%+ 05i|\n", "%+ 05i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+ 05i|\n", "%+ 05i", 42);
	result2 = ft_printf("%10s = |%+ 05i|\n", "%+ 05i", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |% +05i|\n", "% +05i", -42);
	result2 = ft_printf("%10s = |% +05i|\n", "% +05i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |% +05i|\n", "% +05i", 42);
	result2 = ft_printf("%10s = |% +05i|\n", "% +05i", 42);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%05.3i|\n", "%05.3i", -42);
	result2 = ft_printf("%10s = |%05.3i|\n", "%05.3i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%05i|\n", "%05i", -42);
	result2 = ft_printf("%10s = |%05i|\n", "%05i", -42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%05.-i|\n", "%05.-i", -42);
	result2 = ft_printf("%10s = |%05.-i|\n", "%05.-i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%05. i|\n", "%05. i", -42);
	result2 = ft_printf("%10s = |%05. i|\n", "%05. i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%-5.3i|\n", "%-5.3i", -42);
	result2 = ft_printf("%10s = |%-5.3i|\n", "%-5.3i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%5.8i|\n", "%5.8i", -42);
	result2 = ft_printf("%10s = |%5.8i|\n", "%5.8i", -42);
	check_return(result1, result2);

	printf("--------------------------------\n");
	printf(LIGHT_BLUE2("test 6: number = 0\n"));
	result1 = printf("%10s = |%05.i|\n", "%05.i", 0);
	result2 = ft_printf("%10s = |%05.i|\n", "%05.i", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |%05.3i|\n", "%05.3i", 0);
	result2 = ft_printf("%10s = |%05.3i|\n", "%05.3i", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |%05i|\n", "%05i", 0);
	result2 = ft_printf("%10s = |%05i|\n", "%05i", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |%5i|\n", "%5i", 0);
	result2 = ft_printf("%10s = |%5i|\n", "%5i", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |%-5i|\n", "%-5i", 0);
	result2 = ft_printf("%10s = |%-5i|\n", "%-5i", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |%-5.3i|\n", "%-5.3i", 0);
	result2 = ft_printf("%10s = |%-5.3i|\n", "%-5.3i", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |%+-5.2i|\n", "%+-5.2i", 0);
	result2 = ft_printf("%10s = |%+-5.2i|\n", "%+-5.2i", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |% -5.2i|\n", "% -5.2i", 0);
	result2 = ft_printf("%10s = |% -5.2i|\n", "% -5.2i", 0);
	check_return(result1, result2);

	printf("--------------------------------\n");
	printf(LIGHT_BLUE2("test 7:\n"));
	result1 = printf("%%10i = |%10i|\n", 1000000);
	result2 = ft_printf("%%10i = |%10i|\n", 1000000);
	check_return(result1, result2);
	result1 = printf("%%010i = |%010i|\n", 1000000);
	result2 = ft_printf("%%010i = |%010i|\n", 1000000);
	check_return(result1, result2);
	result1 = printf("%%-010i = |%-010i|\n", 1000000);
	result2 = ft_printf("%%-010i = |%-010i|\n", 1000000);
	check_return(result1, result2);
	printf("--------------------------------\n");
	printf(LIGHT_BLUE2("test 6:\n"));
	result1 = printf("%%5.3i = |%5.3i|\n", 1000000);
	result2 = ft_printf("%%5.3i = |%5.3i|\n", 1000000);
	check_return(result1, result2);
}