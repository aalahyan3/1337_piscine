/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:32:25 by aalahyan          #+#    #+#             */
/*   Updated: 2024/08/12 11:16:03 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS(value) (val_abs(value))

int	val_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
#endif
