#include <stdio.h>
#include "ft_printf.h"

int	main ()
{
	printf("\n\n-------------TEST DTOA-------------\n");
	double	testd;
	float	testf;
	char	*tests;
	int		ret;
	int		retft;

	testd = 0.999999;
	testd = 2.123456789;
	testf = 2.123456789;
	tests = ft_dtoa((double)testf, 8);
	printf("tests = %s ; testd = %.8f ; testf = %.8f\n", tests, testd, testf);
	ft_strdel(&tests);
	tests = ft_dtoa((double)testd, 8);
	printf("tests = %s ; testd = %.8f\n", tests, testd);
	testd = 0.5555555555;
	ft_strdel(&tests);
	tests = ft_dtoa((double)testd, 8);
	printf("tests = %s ; testd = %.7f\n", tests, testd);
	testd = 2.999999000000000;
	printf("\n>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("testd = %.7f\n", testd);
	printf("testd = %.8f\n", testd);
	printf("testd = %.9f\n", testd);
	printf("testd = %.15f\n", testd);
	printf("testd = %.16f\n", testd);
	printf("testd = %.50f\n", testd);
	ft_strdel(&tests);
	tests = ft_dtoa((double)testd, 6);
	printf("tests = %s ; testd = %f\n", tests, testd);
	printf("test max = %f\n", 1.7E308);
	printf("\n-------------END TEST DTOA-------------\n\n");
}
