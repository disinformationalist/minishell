/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_new_content.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcingoz <dcingoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:29:39 by dcingoz           #+#    #+#             */
/*   Updated: 2024/07/19 06:07:39 by dcingoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	**add_new_content(char **new_content, char **d_exp, t_shell *shell)
{
	char	**joined;

	if (d_exp == NULL)
		return (new_content);
	if (new_content && new_content[0][0] == '\0' && new_content[1] == NULL)
	{
		free_d_str(new_content);
		return (d_exp);
	}
	first_loops(&new_content, &d_exp, &joined, shell);
	second_loops(&new_content, &d_exp, &joined, shell);
	free_d_str(new_content);
	free_d_str(d_exp);
	return (joined);
}
