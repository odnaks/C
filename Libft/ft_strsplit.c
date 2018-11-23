/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 00:51:46 by drestles          #+#    #+#             */
/*   Updated: 2018/11/23 01:50:11 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void    free_words(char **words)
{
    int    i;
    
    i = 0;
    while (words[i])
        free(words[i++]);
    free(words);
}

static int    get_word_count(char const *s, char c)
{
    int    count;
    
    if (!s)
        return (-1);
    count = 0;
    while (*s)
    {
        if (*s == c)
            s++;
        else
        {
            count++;
            while (*s != c && *s)
                s++;
        }
    }
    return (count);
}

static int    get_word_len(char const *s, char c)
{
    int    len;
    
    len = 0;
    while (*s != c && *s)
    {
        s++;
        len++;
    }
    return (len);
}

static char    *get_word(char const *s, char c)
{
    char    *word;
    int        i;
    
    if (!(word = (char*)malloc(sizeof(char) * (get_word_len(s, c) + 1))))
        return (NULL);
    i = 0;
    while (*s != c && *s)
        word[i++] = *(s++);
    word[i] = 0;
    return (word);
}

char        **ft_strsplit(char const *s, char c)
{
    int        count;
    char    **words;
    int        i;
    
    count = get_word_count(s, c);
    if (count < 0 || !(words = (char**)malloc(sizeof(char*) * (count + 1))))
        return (NULL);
    i = 0;
    while (i <= count && *s)
    {
        if (*s == c)
            s++;
        else
        {
            if (!(words[i++] = get_word(s, c)))
            {
                free_words(words);
                return (NULL);
            }
            while (*s != c && *s)
                s++;
        }
    }
    words[i] = 0;
    return (words);
}
