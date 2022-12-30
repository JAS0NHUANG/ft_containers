# **************************************************************************** #
#       COMANDS                                                                #
# **************************************************************************** #
CPP			=	c++
RM			=	rm

# **************************************************************************** #
#       TITLE                                                                  #
# **************************************************************************** #
NAME		=	ft_containers
TEST		=	test_all
TEST_P		=	test_pair
TEST_V		=	test_vector
TEST_M		=	test_map
TEST_S		=	test_stack

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

TEST_SRCS	=	tests/test_all.cpp \

TEST_P_SRCS	=	tests/test_pair.cpp \

TEST_V_SRCS	=	tests/test_vector.cpp \

TEST_M_SRCS	=	tests/test_map.cpp \

TEST_S_SRCS	=	tests/test_stack.cpp \

# **************************************************************************** #
#       RULES                                                                  #
# **************************************************************************** #
OBJS		=	$(SRCS:.cpp=.o)

TEST_OBJS	=	$(TEST_SRCS:.cpp=.o)

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
