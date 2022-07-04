# **************************************************************************** #
#       COMANDS                                                                #
# **************************************************************************** #
CPP			=	c++
RM			=	rm

# **************************************************************************** #
#       TITLE                                                                  #
# **************************************************************************** #
NAME		=	Containers
TEST		=	Test

# **************************************************************************** #
#       FLAGS                                                                  #
# **************************************************************************** #
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
RMFLAGS		=	-rf

ifeq ($(VERBOSE), true)
	CFLAGS	+= -DVERBOSE
endif

# **************************************************************************** #
#       SOURCES                                                                #
# **************************************************************************** #
SRCS		=	main.cpp \
				Converter.cpp \

TEST_SRCS	=	test/test.cpp \

# **************************************************************************** #
#       RULES                                                                  #
# **************************************************************************** #
OBJS		=	$(SRCS:.cpp=.o)

TEST_OBJS		=	$(TEST_SRCS:.cpp=.o)

%.o			:	%.cpp
				$(CPP) $(CFLAGS) -c $< -o $@

$(NAME)		:	$(OBJS)
				$(CPP) $(CFLAGS) -o $@ $(OBJS)

$(TEST)		:	$(TEST_OBJS)
				$(CPP) $(CFLAGS) -o $@ $(TEST_OBJS)

all			:	$(NAME)

test		:	$(TEST)

clean		:
				$(RM) $(RMFLAGS) $(OBJS) $(TEST_OBJS)

fclean		:	clean
				$(RM) $(RMFLAGS) $(NAME) $(TEST)

re			:	fclean all

# **************************************************************************** #
#       PHONY                                                                  #
# **************************************************************************** #
.PHONY		:	all clean fclean re