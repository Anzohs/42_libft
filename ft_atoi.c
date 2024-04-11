#include "libft.h"

int	ft_atoi(const char *npt)
{
	int	i;
	int	pos;
	int	result;

	pos = 1;
	i = 0;
	result = 0;
	while ((npt[i] >= 9 && npt [i] <= 13) || npt[i] == ' ')
		i++;
	if (npt[i] == '-' || npt[i] == '+')
	{
		if (npt[i] == '-')
			pos *= -1;
		i++;
	}
	while (ft_isdigit(npt[i]))
	{
		result = (result * 10) + (npt[i] - '0');
		i++;
	}
	return (result * pos);
}
