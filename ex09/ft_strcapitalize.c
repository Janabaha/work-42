#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;

	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
		{
			if ((str[i] >= 'a' && str[i] <= 'z') && flag)
			{
				str[i] -= 32;
			}
			else if ((str[i] >= 'A' && str[i] <= 'Z') && !flag)
				str[i] += 32;
			flag = 0;
		}
		else
		{
			flag = 1;
		}
		i++;
	}
	return (str);
}

void	print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
int	main(void)
{
	char st[] = {"89Helllo, jaNa, jana"};
	print(ft_strcapitalize(st));

}
