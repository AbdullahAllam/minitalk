# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allam <allam@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/07 18:12:40 by allam          #+#    #+#              #
#    Updated: 2023/07/11 17:38:44 by abali            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC := cc

CFLAGS := -Wall -Wextra -Werror

RM := rm -f

NAME_SERVER := server
NAME_CLIENT := client



SRC_SERVER := src/server.c src/minitalk.c
SRC_CLIENT := src/client.c src/minitalk.c

SRC_SERVER_BONUS := src/server_bonus.c src/minitalk_bonus.c
SRC_CLIENT_BONUS := src/client_bonus.c src/minitalk_bonus.c

INCLUDES := -Iinc -Ilibft

LIBFT := ./libft/libft.a
LIBFT_PATH := ./libft


all: $(NAME_SERVER) $(NAME_CLIENT)

$(NAME_SERVER): $(LIBFT)
	$(CC) $(CFLAGS) $(SRC_SERVER) $(LIBFT) -o $(NAME_SERVER)

$(NAME_CLIENT): $(LIBFT)
	$(CC) $(CFLAGS) $(SRC_CLIENT) $(LIBFT) -o $(NAME_CLIENT)
	

$(LIBFT): 
	@make -s -C libft > /dev/null 2>&1

clean:
	$(RM) $(LIBFT)

fclean: clean
	$(RM) $(NAME_SERVER) $(NAME_CLIENT)


re: fclean all

bonus: fclean $(LIBFT)
	$(CC) $(CFLAGS) $(SRC_SERVER_BONUS) $(LIBFT) -o $(NAME_SERVER)
	$(CC) $(CFLAGS) $(SRC_CLIENT_BONUS) $(LIBFT) -o $(NAME_CLIENT)

rebonus: fclean bonus

.PHONY: all clean fclean re bonus rebonus
