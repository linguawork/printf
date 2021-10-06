# include <stdio.h>
# include "libftprintf.h"

int main(void)
{
	int p = 4;
	int *ptr = &p;
	char *s1 = "toto";
	char *s2 = "power";


	//printf( "|%-0*x|\n", 8, 42 ); // нуль игнорится когда подают -
	//printf( "|%-0*.*d|\n", 8, 5, -42 ); // test Andrey
	// printf( "|%*.*x|\n", 1, 1 , 42 );

	// printf( "sss|%0*.*x|\n", 100, 1, 42 );
	// ft_printf( "sss|%0*.*x|\n", 100, 1, 42 ); // 16 ричные и 10ричные это числа, они уже точны, им не нужна точность.
	//только ширина. https://stackoverflow.com/questions/6701332/printf-precision

	/*Test POINTERS*/

	// printf("Address of p is: |%-30p|\n", ptr);
	// ft_printf("Address of p is: |%-30p|\n", ptr);//доработать ширину

	// printf("|%5p|\n", ptr);
	// ft_printf("|%5p|\n", ptr);

	// printf("|%9.p|\n", (void *)(1234));
	// ft_printf("|%9.p|\n", (void *)(1234));

	// printf("|%5.10p|\n", (void *)(1234));
	// ft_printf("|%5.10p|\n", (void *)(1234));

	// printf("|%9.p|\n", ptr);
	// ft_printf("|%9.p|\n", ptr);

	// printf("|%5.10p|\n", ptr);
	// ft_printf("|%5.10p|\n", ptr);

	// printf("|%l|\n", 20);
	// ft_printf("|%l|\n", 20); // test from Bulina



	// sleep (100);




	// printf( "|%-*u|\n", 13, 4294967295u );
	// ft_printf( "|%-*u|\n", 13, 4294967295u ); // это макс беззнаков инт 4,294,967,295. \
	// Язык Си его видит как лонг, и дает предупреждение. Чтобы указать программе, что это беззнаковый инт, \
	// нужно в конце написать 'u'. !!! Здесь нужно доработать ШИРИНУ ПРОБЕЛАМИ и ВЫРАВНИВАНИЕ.

	// printf( "|%*X|\n", 8, 42 );
	// ft_printf( "|%*X|\n", 8, 42 ); // надо поработать

	// printf("Magic |%s| is |%10.5d|\n", "number", -42);
	// ft_printf("Magic |%s| is |%10.5d|\n", "number", -42);
	// printf("Hexadecimal for |%.5d| is |%10.5x|\n", -42, 42);
	// ft_printf("Hexadecimal for |%.5d| is |%10.5x|\n", -42, 42);

	// printf("Magic |%s| is |%10.5i|\n", "number", -42);
	// ft_printf("Magic |%s| is |%10.5i|\n", "number", -42);
	// printf("Hexadecimal for |%.5i| is |%10.5x|\n", -42, 42);
	// ft_printf("Hexadecimal for |%.5i| is |%10.5x|\n", -42, 42);

	// printf( "%0*x\n", 8, 15 );
	// ft_printf( "%0*x\n", 8, 15 );

	/*Test U*/

	// printf("|%-7u|\n", 33);
	// ft_printf("|%-7u|\n", 33);

	// printf("|%.0u|\n", 0);
	// ft_printf("|%.0u|\n", 0);


	/* Printf D TESTS for pft*/

	// printf("|%-7d|\n", -11); //1 yes -, (- ignored zero), yes width, yes prec
	// ft_printf("|%-7d|\n", -11);//works

	// printf("|%-7d|\n"); //2 yes -, (- ignored zero), yes width, no prec
	// ft_printf("|%-7d|\n");// warning, excluded

	// printf("|%-d|\n", -33); //3 yes -, (- ignored zero), no width, yes prec
	// ft_printf("|%-d|\n", -33);//works

	// printf("|%-d|\n"); //4 yes -, (- ignored zero), no width, no prec
	// ft_printf("|%-d|\n");// warning, excluded

	// printf("|%-7d|\n", -33); //5 yes -, (- ignored zero), yes width, yes prec
	// ft_printf("|%-7d|\n", -33);// 5=1, omitted

	// printf("|%-7d|\n"); //6 yes -, (- ignored zero), yes width, no prec
	// ft_printf("|%-7d|\n");//6=2 warning, excluded

	// printf("|%-d|\n", -77); //7 yes -, (- ignored zero), no width, yes prec
	// ft_printf("|%-d|\n", -77);//7=3, omitted

	// printf("|%-d|\n"); //8 yes -, (- ignored zero), no width, no prec
	// ft_printf("|%-d|\n");//8=4 warning, excluded

	// printf("|%09d|\n", 99); //9 no -, yes 0, yes width, yes prec (=len =str)
	// ft_printf("|%09d|\n", 99);//works

	// printf("|%010d|\n"); //10 no -, yes 0, yes width, no prec (=len =str)
	// ft_printf("|%010d|\n");//warning, excluded

	// printf("|%0d|\n", 100); //11 no -, yes 0, no width, yes prec (=len =str)
	// ft_printf("|%0d|\n", 100);//works

	// printf("|%0d|\n"); //12 no -, yes 0, no width, no prec (=len =str)
	// ft_printf("|%0d|\n");////warning, excluded

	// printf("|%3d|\n", 13); //13 no -, no 0, yes width, yes prec (=len =str)
	// ft_printf("|%3d|\n", 13);//worjs

	// printf("|%14d|\n"); //14 no -, no 0, yes width, no prec (=len =str)
	// ft_printf("|%14d|\n");//warning, excluded

	// printf("|%d|\n", 15); //15 no -, no 0, no width, yes prec (=len =str)
	// ft_printf("|%d|\n", 15);// works

	// printf("|%d|\n"); //16 no -, no 0, no width, no prec (=len =str)
	// ft_printf("|%d|\n");//warning, excluded

	/*TESTS D, debug*/

	// printf("|%-7d|\n", -11); //1 yes -, (- ignored zero), yes width, yes prec
	// ft_printf("|%-7d|\n", -11);//works

	// printf("|%-d|\n", -33); //3 yes -, (- ignored zero), no width, yes prec
	// ft_printf("|%-d|\n", -33);//works

	// printf("|%09d|\n", 99); //9 no -, yes 0, yes width, yes prec (=len =str)
	// ft_printf("|%09d|\n", 99);//works

	// printf("|%0d|\n", 100); //11 no -, yes 0, no width, yes prec (=len =str)
	// ft_printf("|%0d|\n", 100);//works

	// printf("|%3d|\n", 13); //13 no -, no 0, yes width, yes prec (=len =str)
	// ft_printf("|%3d|\n", 13);//works

	// printf("|%d|\n", 15); //15 no -, no 0, no width, yes prec (=len =str)
	// ft_printf("|%d|\n", 15);// works

	// /*test d, 199*/
	// printf("||%7d|\n", -14); //13 no -, no 0, yes width, yes prec (=len =str)
	// ft_printf("||%7d|\n", -14);//похож на 13 условие, но нужна отрицательная точность
	// /*test d 191*/
	// printf("this %d number\n", -267); //13 no -, no 0, yes width, yes prec (=len =str)
	// ft_printf("this %d number\n", -267);//похож на 13 условие, но нужна отрицательная точность

	// printf("%010d\n", -345);
	// ft_printf("%010d\n", -345);

	// printf("%10d\n", -345);
	// ft_printf("%10d\n", -345);


 /* With - sign tests  32 conditions*/

// 	printf("|%-7d|\n", -11); //1yes -sign, yes -, (- ignored zero), yes width, yes prec
// 	ft_printf("|%-7d|\n", -11);//works

// 	// // printf("|%-7d|\n", - ); //2yes -sign, yes -, (- ignored zero), yes width, no prec
// 	// // ft_printf("|%-7d|\n", - );// error, excluded

// 	printf("|%-d|\n", -33); //3 yes -sign, yes -, (- ignored zero), no width, yes prec
// 	ft_printf("|%-d|\n", -33);//works

// 	// // printf("|%-d|\n", - ); //4 yes -sign, yes -, (- ignored zero), no width, no prec
// 	// // ft_printf("|%-d|\n", - );// error, excluded

// 	// // printf("|%-7d|\n", -33); //5 yes -sign, yes -, (- ignored zero), yes width, yes prec
	ft_printf("|%-7d|\n", -33);// 5=1, omitted

// 	// // printf("|%-7d|\n", -); //6 yes -sign, yes -, (- ignored zero), yes width, no prec
// 	// // ft_printf("|%-7d|\n", -);//6=2 error, no number after -,  excluded

// 	// printf("|%-d|\n", -77); //7 yes -sign, yes -, (- ignored zero), no width, yes prec
// 	// // ft_printf("|%-d|\n", -77);//7=3, omitted

// 	// // printf("|%-d|\n", -); //8 yes -sign, yes -, (- ignored zero), no width, no prec
// 	// // ft_printf("|%-d|\n", -);//8=4 error, no arg after -, excluded

	// printf("|%09d|\n", -99); //9 yes -sign, no -, yes 0, yes width, yes prec (=len =str)
	// ft_printf("|%09d|\n", -99);//works

// 	// // printf("|%010d|\n", -); //10 yes -sign, no -, yes 0, yes width, no prec (=len =str)
// 	// // ft_printf("|%010d|\n", -);//error, no argument after -, excluded

// 	printf("|%0d|\n", -100); //11 yes -sign, no -, yes 0, no width, yes prec (=len =str)
// 	ft_printf("|%0d|\n", -100);//works

// 	// printf("|%0d|\n", -); //12 yes -sign, no -, yes 0, no width, no prec (=len =str)
// 	// ft_printf("|%0d|\n", -);// error, no argument after -, excluded

// 	printf("|%10d|\n", -13333); //13 yes -sign, no -, no 0, yes width, yes prec (=len =str)
// 	ft_printf("|%10d|\n", -13333);//works

// 	// // printf("|%14d|\n", -); //14 yes -sign, no -, no 0, yes width, no prec (=len =str)
// 	// // ft_printf("|%14d|\n", -);//error, no argument after -sign, excluded

// 	printf("|%d|\n", -15); //15 yes -sign, no -, no 0, no width, yes prec (=len =str)
// 	ft_printf("|%d|\n", -15);// works

// 	// // printf("|%d|\n", -); //16 yes -sign, no -, no 0, no width, no prec (=len =str)
// 	// // ft_printf("|%d|\n", -);//error, no argument after -, excluded



// 	printf("|%-7d|\n", 17); //17 no -sign, yes -, (- ignored zero), yes width, yes prec
// 	ft_printf("|%-7d|\n", 17);//works

// 	// printf("|%-7d|\n"); //18 no -sign, yes -, (- ignored zero), yes width, no prec
// 	// ft_printf("|%-7d|\n");// warning, more conversions than arguments, excluded

// 	printf("|%-d|\n", 19); //19 no -sign, yes -, (- ignored zero), no width, yes prec
// 	ft_printf("|%-d|\n", 19);//works

// 	// printf("|%-d|\n"); //20  no -sign, yes -, (- ignored zero), no width, no prec
// 	// ft_printf("|%-d|\n");// warning, more conversions than data arg, excluded

// 	printf("|%-7d|\n", 21); //21 no -sign, yes -, (- ignored zero), yes width, yes prec
// 	ft_printf("|%-7d|\n", 21);//21 =17, works, no code needed

// 	// printf("|%-7d|\n"); //22 no -sign, yes -, (- ignored zero), yes width, no prec
// 	// ft_printf("|%-7d|\n");//warning, more conversions than data arg, excluded

// 	printf("|%-d|\n", 23); //23 no -sign, yes -, (- ignored zero), no width, yes prec
// 	ft_printf("|%-d|\n", 23);//23=19, works, no code needed

// 	// printf("|%-d|\n"); //24 no -sign, yes -, (- ignored zero), no width, no prec
// 	// ft_printf("|%-d|\n");//warning, more conversions than data arg, excluded

	// printf("|%09d|\n", 25); //25 no -sign, no -, yes 0, yes width, yes prec (=len =str)
	// ft_printf("|%09d|\n", 25);//works

// 	// printf("|%010d|\n"); //26 no -sign, no -, yes 0, yes width, no prec (=len =str)
// 	// ft_printf("|%010d|\n");//warning, more conversions than data arg, excluded

// 	printf("|%0d|\n", 27); //27 no -sign, no -, yes 0, no width, yes prec (=len =str)
// 	ft_printf("|%0d|\n", 27);//works

// 	// printf("|%0d|\n"); //28 no -sign, no -, yes 0, no width, no prec (=len =str)
// 	// ft_printf("|%0d|\n");//warning, more conversions than data arg, excluded

// 	printf("|%10d|\n", 29); //29 no -sign, no -, no 0, yes width, yes prec (=len =str)
// 	ft_printf("|%10d|\n", 29);//works

// 	// printf("|%14d|\n"); //30 no -sign, no -, no 0, yes width, no prec (=len =str)
// 	// ft_printf("|%14d|\n");//warning, more conversions than data arg, excluded

// 	printf("|%d|\n", 31); //31 no -sign, no -, no 0, no width, yes prec (=len =str)
// 	ft_printf("|%d|\n", 31);// works

// 	// printf("|%d|\n"); //32 no -sign, no -, no 0, no width, no prec (=len =str)
// 	// ft_printf("|%d|\n");//error, no argument after -, excluded

// /* TESTS D 32, DEBUG with precision and len(length of string)*/

// 	printf("testprecision\n");
// 	// printf("|%.5d|\n", 2);
// 	// ft_printf("|%.5d|\n", 2);// passes, g_dot > len, fixed if31 and and added debug1 вывод нулями по количеству точности за минусом длина строки (prec-len)

// 	// printf("|%.6d|\n", -3);// test 213 (g_dot>len) вывод нулями по количеству точности (если минус, то он вначале)-длина строки (-, prec -len)
// 	// ft_printf("|%.6d|\n", -3);

// 	// printf("|%.2d|\n", 33);// if g_dot = len, вывод строки
// 	// ft_printf("|%.2d|\n", 33);
// 	printf("|%.2d|\n",  -33);// if g_dot = len, вывод строки
// 	ft_printf("|%.2d|\n", -33);

// 	printf("|%.2d|\n", 5433);// if g_dot < len, вывод всей строки
// 	ft_printf("|%.2d|\n", 5433);

// 	// printf("|%.-6d|\n", -3);// warning, не работает с минусом перед точностью
// 	// ft_printf("|%.-6d|\n", -3);


// 	//printf("|%-07d|\n", -33); // yes -, (yes 0, 0 ignored by -) yes width, yes prec


// 	// printf("|%-7d|\n", -33); // yes -, yes width, yes prec
// 	// ft_printf("|%-7d|\n", -33);

// 	// printf("|%-7d|\n", -100000000); // yes -, yes width, yes prec
// 	// ft_printf("|%-7d|\n", -100000000);

	// printf("|%*.*d|\n", 0, 0, 0); // 0 test from Ulya
	// ft_printf("|%*.*d|\n", 0, 0, 0);

// 	printf("|%.0d|\n", 0);// if g_dot ==0 && len==0,
// 	ft_printf("|%.0d|\n", 0);

	// printf("|%.d|\n", 0);// if g_dot ==0 && len==0,
	// ft_printf("|%.d|\n", 0);

	// printf("|%3.5d|\n", 22);// if g_dot ==0 && len==0,
	// ft_printf("|%3.5d|\n",22);

// 	printf("DEBUG WIDTH and len\n");
// 	printf("|%5d|\n", -2562);
// 	ft_printf("|%5d|\n", -2562);

// 	printf("|%10.5d|\n", -216);
// 	ft_printf("|%10.5d|\n", -216);

// 	printf("|%08.5d|\n", 34);
// 	ft_printf("|%08.5d|\n", 34);

	// printf("|%09d|\n", -99); //9 yes -sign, no -, yes 0, yes width, yes prec (=len =str)
	// ft_printf("|%09d|\n", -99);//works

	// printf("|%09d|\n", 25); //25 no -sign, no -, yes 0, yes width, yes prec (=len =str)
	// ft_printf("|%09d|\n", 25);//works

	// printf("|%05.1d|\n", 11); //1 yes 0, yes w, yes pr - not ok
	// ft_printf("|%05.1d|\n", 11);

	// printf("|%05.2d|\n", 11); //1 yes 0, yes w, yes pr - not ok
	// ft_printf("|%05.2d|\n", 11);

	// printf("|%07.5d|\n", 11); //1-1 yes 0, yes w, yes pr - not ok
	// ft_printf("|%07.5d|\n", 11);

	// printf("|%05d|\n", 22); //2 yes 0, yes w, no pr
	// ft_printf("|%05d|\n", 22);

	// printf("|%0.5d|\n", 33); //3 yes 0, no w, yes pr - not ok
	// ft_printf("|%0.5d|\n", 33);

	// printf("|%0d|\n", 44); //4 yes 0, no w, no pr
	// ft_printf("|%0d|\n", 44);

	// printf("|%5.3d|\n", 55); //5 no 0, y w, y pr
	// ft_printf("|%5.3d|\n", 55);

	// printf("|%5.d|\n", 661); //6-1 no 0, y w, n(.) pr
	// ft_printf("|%5.d|\n", 661);

	// printf("|%5d|\n", 662); //6-2 no 0, y w, n pr
	// ft_printf("|%5d|\n", 662);

	// printf("|%.5d|\n", 77); //7 no 0, n w, y pr
	// ft_printf("|%.5d|\n", 77);

	// printf("|%d|\n", 88); //8 no 0, n w, n pr
	// ft_printf("|%d|\n", 88);

	// printf("|%0-8.5d|\n", 34);
	// ft_printf("|%0-8.5d|\n", 34);














	// printf("|%-+9d|%13d\n", 18,9 );
	// ft_printf("|%-+9d|%13d\n", 18,9 );


	/* Printf %%%%%%%% TESTS for pft*/

	// printf("|%-%|\n"); //1 yes -, no zero, =4
	// ft_printf("|%-%|\n");

	// printf("|%%|\n"); //2 no -, no width =8
	// ft_printf("|%%|\n");
	// printf("|%-5%|\n"); //3 yes -, yes width, (no zero)//это условие не прописано. Если нет нуля, то это условие можно не писать.
	// ft_printf("|%-5%|\n");

	// printf("|%05%|\n"); //4 no -, yes zero, yes width =5
	// ft_printf("|%05%|\n"); //доработал условие с нулями// если есть нуль, то вывожу нулями

	// printf("|%5%|\n"); //5 no -, yes width, no zero =6
	// ft_printf("|%5%|\n");

	// more % tests:
	// printf("%"); // no need to cover this test, pft skips it
	// ft_printf("%");


	// above is in the function, the below are all possible conditions

	// printf("|%-05%|\n"); //1 yes -, yes zero, yes width
	// ft_printf("|%-05%|\n");

	// printf("|%-5%|\n"); //2 yes -, yes width, (no zero)//это условие не прописано. Если нет нуля, то это условие можно не писать.
	// ft_printf("|%-5%|\n");

	// printf("|%-5%|\n"); //3 yes -, no zero, yes width
	// ft_printf("|%-5%|\n");

	// printf("|%-%|\n"); //4 yes -, no zero, no width
	// ft_printf("|%-%|\n");

	// printf("|%05%|\n"); //5 no -, yes width, yes zero
	// ft_printf("|%05%|\n");

	// printf("|%5%|\n"); //6 no -, yes width, no zero
	// ft_printf("|%5%|\n");

	// printf("|%0%|\n"); //7 no -, no width, yes zero
	// ft_printf("|%0%|\n");

	// printf("|%%|\n"); //8 no -, no width, no zero
	// ft_printf("|%%|\n");





 // еще прогнать NULL specifiers test






	/* Printf S STRING TESTS for pft*/

	// printf("|%10.2s|\n", "toto"); // 1
	// ft_printf("|%10.2s|\n", "toto");

	// printf("|%-.s| |%-.s|\n", s1, s2 );//Abi test ok
	// ft_printf("|%-.s| |%-.s|\n", s1, s2 );// Abi test ok

	// printf("|%s|\n", ft_itoa(0x5ab4321, 16)); //ok
	// ft_printf("|%s|\n", ft_itoa(0x5ab4321, 16)); //ok

	// printf("|%-32.1s|\n", "ab"); //1 yes -, 0 ignored by -, yes width, yes dot, yes precision
	// ft_printf("|%-32.1s|\n", "ab");

	// printf("|%32.2s|\n", "abc"); //5 no -, UB 0, yes width, yes dot, yes precision
	// ft_printf("|%32.2s|\n", "abc");
	// printf("|%32.s|\n", "abc"); //5 no -, UB 0, yes width, yes dot only = precision = 0)
	// ft_printf("|%32.s|\n", "abc");

	// printf("|%s|\n", "abcd"); //8 no -, UB 0, no width, no dot, no precision，//if prec > len, print len
	// ft_printf("|%s|\n", "abcd");

	// printf("|%-32s|\n", "ab"); /2 yes -, 0 ignored by -, yes width, (no dot, no precision = no precision at all)
	// ft_printf("|%-32s|\n", "ab");

	// printf("|%-.s|\n", "ab"); //3 yes -, 0 ignored by -, no width, (yes prec: .= .0)
	// ft_printf("|%-.s|\n", "ab");
	// printf("|%-.3s|\n", "ab"); //3 yes -, 0 ignored by -, no width, (yes prec: .value)
	// ft_printf("|%-.3s|\n", "ab");

	// printf("|%-s|\n", "abcd"); //4 yes -, 0 ignored by -, no width, no dot, no precision，//if prec > len, print len
	// ft_printf("|%-s|\n", "abcd");

	// printf("|%32s|\n", "abc"); //6 no -, UB 0, yes width, no dot, no precision
	// ft_printf("|%32s|\n", "abc");

	// printf("|%s.|\n", "abcd"); //7 no -, UB 0, no width, (yes prec: .)//if prec > len, print len
	// ft_printf("|%s.|\n", "abcd"); // works without if condition in printf_s
	// printf("|%s.0|\n", "abcd"); //7 no -, UB 0, no width, (yes prec: .0 =  .)//if prec > len, print len
	// ft_printf("|%s.0|\n", "abcd");// works without code
	// printf("|%s.3|\n", "abcd"); //7 no -, UB 0, no width, (yes prec: .3)，//if prec > len, print len
	// ft_printf("|%s.3|\n", "abcd");// works without code

	// printf("%.7s\n", "hello"); //7 no -, UB 0, no width, (yes prec: .3) + string，//if prec > len, print len
	// ft_printf("%.7s\n", "hello");// if 7 included, works

	// char *s_hidden = "hi low\0don't print me lol\0";//оказалось, что s_hidden это указатель на строку. Я думал,
	// что это строка спрятана. После того как мы указали на строку, все фейлы пропали в тестах.
	// может быть это потому что, мы нашли через терминал в папке теста командой grep "s_hidden"
	//так мы нашли указатели или это потому что, мы ввели значение указателя *s_hidden:
	// !!!oa-l5% cd /Users/areggie/Desktop/printf/pft
	// !!!oa-l5% grep "s_hidden" *

	// ft_printf("|%.09s|\n", s_hidden); //pft test 90 отработал (-Wall -Wextra -Werror), но пишет что фейл.
	// printf("|%.09s|\n", s_hidden); //pft test 90 отработал через warning (-Wall -Wextra -Werror). Отрабатывает с мусором
	// если не дали значение для указателя char *s_hidden.


	// printf("|%.09s|\n", NULL); // был segfault в тесте, до того как прописал защиту от нуля. После прописи стал выводить (null)
	//ft_printf("|%.09s|\n", NULL); //

	// printf("|%.*s|\n", -3, NULL); // так как точность у меня работала со значениями -1 (есть точность), 0 (значение), >0 и !=-1
	// ft_printf("|%.*s|\n", -3,  NULL);// я привел все <0 к -1

	// printf("|%.*s|\n", -3, (void *) 0);// Это один из тестов в pft, лучше вводить кастование, чтобы не ругался на тип.
	// ft_printf("|%.*s|\n", -3,(void *) 0); // пишем кастование чтобы не ругался, что не требоал тип d

	// printf("|%.*s|\n", -3, 0); // здесь без кастования, ругается на неверный тип
	// ft_printf("|%.*s|\n", -3, 0);

	//printf("%.*s\n", -3, "a");

	/*Debug PFT*/

	// printf("|%*s|\n", -32, "abc");
	// ft_printf("|%*s|\n", -32, "abc");


	// printf("|%*i|\n", -14, 94827);
	// ft_printf("|%*i|\n", -14, 94827);

	// printf("|%0*i|\n", -7, -54);
	// ft_printf("|%0*i|\n", -7, -54);

	// printf("|%% *.5i 42 == |% *.5i|\n", 4, 42);
	// ft_printf("|%% *.5i 42 == |% *.5i|\n", 4, 42);





	/* END of MY TESTS for PFT*/




		/* мои черновики тестов*/
	// printf("|%-32.0s|\n", "ab"); // yes -, 0 ignored by -, yes width, (yes dot(0), yes precision (value =0) = zero precision)
	// ft_printf("|%-32.0s|\n", "ab");// точка и ноль = это как просто точка
	// printf("|%-32.s|\n", "ab"); // yes -, 0 ignored by -, yes width, (yes dot and no precision value = zero precision)
	// ft_printf("|%-32.s|\n", "ab");// просто точка = как . и 0

	// printf("|%.s|\n", "abc"); //no -, UB 0, no width, yes dot, yes dot = zero precision.
	// ft_printf("|%.s|\n", "abc");


	//printf("|%0*.3k|\n", 20); //Проверка от Марины// это UB  и его не нужно отрабатывать
	// ft_printf("|%0*.3k|\n", 20);//хоть и UB, он выводит только первый символ

	// printf("|%s|\n", "abc"); //no -, UB 0, no width, no dot, yes precision
	// ft_printf("|%s|\n", "abc");

	// printf("|%2s|\n", "abc"); //no -, UB 0, yes width, no dot, yes precision
	// ft_printf("|%2s|\n", "abc");// когда Ш < длины, принт длина, отработать позже
	//printf("|%-032s|\n", "abc"); // 0 is ignored when there is -,
	//ft_printf("|%-032s|\n", "abc");// 0 is ignored when there is -,
	// printf("|%32s|\n", "abc"); // отработано
	// ft_printf("|%32s|\n", "abc");// работают

	/*UNDEFINED BEHAVOIR*/

	// printf("|%20.3k|\n", "abcd");// Проверка от Марины // это UB  и его не нужно отрабатывать
	// ft_printf("|%20.3k|\n", "abcd");// выводит строку без |



	/* Printf CHAR TESTS */
	// printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
	// %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
	// %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
	// %c%c%c%c%c%c%c%c%c%c%c%c%c\n",\
	// ' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/',\
	// '0','1','2','3','4','5','6','7','8','9',\
	// ':',';','<','=','>','?','@',\
	// 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P',\
	// 'Q','R','S','T','U','V','W','X','Y','Z',\
	// '[','\\',']','^','_','`',\
	// 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p',\
	// 'q','r','s','t','u','v','w','x','y','z','{','|','}','~','');

	// ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
	// %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
	// %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
	// %c%c%c%c%c%c%c%c%c%c%c%c%c\n",\
	// ' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/',\
	// '0','1','2','3','4','5','6','7','8','9',\
	// ':',';','<','=','>','?','@',\
	// 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P',\
	// 'Q','R','S','T','U','V','W','X','Y','Z',\
	// '[','\\',']','^','_','`',\
	// 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p',\
	// 'q','r','s','t','u','v','w','x','y','z','{','|','}','~','');

	// printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');
	// ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');

	// printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');
	// ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');


	// printf("|%--15.c|\n", 'w'); // yminus, ywidth
	// ft_printf("|%--15.c|\n", 'w'); // yminus, ywidth

	// printf("|%15.c|\n", 'w'); //nominus, ywidth
	// ft_printf("|%15.c|\n", 'w'); //no -, ywidth

	// printf("|%-.c|\n", 'w'); // yes -, no w
	// ft_printf("|%-.c|\n", 'w');// yes -, no w

	// printf("|%.c|\n", 'w'); // no -, no w
	// ft_printf("|%.c|\n", 'w');// no -, no w

	// printf("|%*c|\n", 12, '-'); // no -, no w
	// ft_printf("|%*c|\n", 12, '-');// debug 500 42 tester

	// printf("%d\n", ft_printf("|%--15.c|\n", 'w')); // Yura test: возврат интов
	// ft_printf("%d\n", ft_printf("|%--15.c|\n", 'w'));

	/*42 tester debug*/
	// printf("|%*.*i|\n", -4, 0, 8); // c выводом все ок, проблема в подсчете символов
	// ft_printf("|%*.*i|\n", -4, 0, 8);

	// printf("g_result = %i\n", ft_printf("|%*.*i|\n", -4, 0, 8));
	// ft_printf("g_result = %i\n", ft_printf("|%*.*i|\n", -4, 0, 8));

	// printf("g_result = %d\n", ft_printf("|%*.*d|\n", -4, 0, -12));
	// ft_printf("g_result = %d\n", ft_printf("|%*.*d|\n", -4, 0, -12));

	// printf("g_result = %d\n", ft_printf("|%*.*d|\n", -4, 0, 123456789));
	// ft_printf("g_result = %d\n", ft_printf("|%*.*d|\n", -4, 0, 123456789));

	// printf("g_result = %d\n", ft_printf("|%*.*d|\n", -4, 0, 0));
	// ft_printf("g_result = %d\n", ft_printf("|%*.*d|\n", -4, 0, 0));

	// printf("g_result = %d\n", ft_printf("|%*.*d|\n", -4, 0, -123456789));
	// ft_printf("g_result = %d\n", ft_printf("|%*.*d|\n", -4, 0, -123456789));

	// printf("original g_result = %d\n", ft_printf("|%*.*s|\n", -4, 0, "abcdefghijklmnop"));
	// ft_printf("my function g_result = %d\n", ft_printf("|%*.*s|\n", -4, 0, "abcdefghijklmnop"));

	// printf("g_result = %d\n", ft_printf("|%*.*c|\n", -4, 0, 'a'));
	// ft_printf("g_result = %d\n", ft_printf("|%*.*c|\n", -4, 0, 'a'));

	// printf("g_result = %d\n", ft_printf("|%*.*d|\n", -4, 0, 97));
	// ft_printf("g_result = %d\n", ft_printf("|%*.*d|\n", -4, 0, 97));

	// printf("g_result = %d\n", ft_printf("|%*.*u|\n", -4, 0, 4294967284));
	// ft_printf("g_result = %d\n", ft_printf("|%*.*u|\n", -4, 0, 4294967284));

	// printf("g_result = %d\n", ft_printf("|%*.*x|\n", -4, 0, 4294967284));
	// ft_printf("g_result = %d\n", ft_printf("|%*.*x|\n", -4, 0, 4294967284));

	// printf("g_result = %d\n", ft_printf("|%*.*X| %d\n", -4, 0, 4294967284, 5));
	// ft_printf("g_result = %d\n", ft_printf("|%*.*X| %d\n", -4, 0, 4294967284, 5));

	// int		a = -4;
	// int		b = 0;
	// char	c = 'a';
	// int		d = 2147483647;
	// int		e = -2147483648;
	// int		f = 42;
	// int		g = 25;
	// int		h = 4200;
	// int		i = 8;
	// int		j = -12;
	// int		k = 123456789;
	// int		l = 0;
	// int		m = -12345678;
	// char	*n = "abcdefghijklmnop";
	// char	*o = "-a";
	// char	*p = "-12";
	// char	*q = "0";
	// char	*r = "%%";
	// char	*s = "-2147483648";
	// char	*t = "0x12345678";
	// char	*u = "-0";

//printf(" --- Return : %d\n", ft_printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d", i, j, k, l, m, c, e, d)); //T3

// ft_printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", 2, -2, i, 2, -2, j, 2, -2, k, 2, -2, l, 2, -2, m, 2, -2, c, 2, -2, e, 2, -2, d); //T156
// printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", 2, -2, i, 2, -2, j, 2, -2, k, 2, -2, l, 2, -2, m, 2, -2, c, 2, -2, e, 2, -2, d); //T156 this and lower tests will give different results.
// printf("%02.-2i, %02.-2d, %02.-2d, %02.-2d, %02.-2d, %02.-2d, %02.-2d, %02.-2d\n", i, j, k, l, m, c, e, d); //T156 the same test as above, but width and precision is written in place of *

// ft_printf("%0*.*i, %0*.*d\n", 2, -2, i, 2, -2, l); //T156 cases for correction
// printf("%0*.*i, %0*.*d\n", 2, -2, i, 2, -2, l);

// ft_printf("|%*.*i|, |%*.*d|, |%*.*d|, |%*.*d|, |%*.*d|, |%*.*d|, |%*.*d|, |%*.*d|\n", 2, -2, i, 2, -2, l, 2, -2, k, 2, -2, l, 2, -2, m, 2, -2, c, 2, -2, e, 2, -2, d); //T154
// printf("|%*.*i|, |%*.*d|, |%*.*d|, |%*.*d|, |%*.*d|, |%*.*d|, |%*.*d|, |%*.*d|\n", 2, -2, i, 2, -2, l, 2, -2, k, 2, -2, l, 2, -2, m, 2, -2, c, 2, -2, e, 2, -2, d); //T154

// ft_printf("|%*.*i|, |%*.*d|\n", 2, -2, i, 2, -2, l); //T154
// printf("|%*.*i|, |%*.*d|\n", 2, -2, i, 2, -2, l); //T154


// ft_printf("|%12.12i|, |%12.12d|\n",  -42, 42); //T218 (debugged big precision)
// printf("|%12.12i|, |%12.12d|\n", -42, 42); //T154

// ft_printf("-|%5|\n"); //есть warning, c флагами не отработает
// printf("-|%5|\n"); //ecть warning

// ft_printf("%-03.*", 22); //returns nothing
// printf("%-03.*", 22); // returns nothing

// ft_printf("%5"); // returns nothing
// printf("%5"); //returns nothing

// ft_printf("-|%5%|\n"); //T218
// printf("+|%5%|\n"); //T154

// char *s_hidden = "hi low\0don't print me lol\0";

// ft_printf("%.03s\n", s_hidden); // solved by correction in the defprec function //было лишнее условие с len
// printf("%.03s\n", s_hidden);

// ft_printf("%% *.5i 42 == |% *.5i|\n", 4, 42);// pft test647, bonus part = вывод пробела
// printf("%% *.5i 42 == |% *.5i|\n", 4, 42);

// ft_printf("|%09s|\n", s_hidden);
// printf("|%09s|\n", s_hidden);// test 130 PFT2019 UB // посмотреть условия вывода s



// printf("%9p -1\n", NULL);
//  ft_printf("%9p -2\n", NULL);
//  printf("%11.p -2\n", NULL);
//  ft_printf("%11.p -2\n", NULL);// check for leaks

// printf("%11p -1\n", (void *)(1234));
// ft_printf("%11p -2\n", (void *)(1234));
// printf("%11.p -1\n", (void *)(1234));
// ft_printf("%11.p -2\n", (void *)(1234));



// int b = 123;
// int *a;
// a = &b;

// printf("%20p -1\n", a);
// ft_printf("%20p -2\n", a);
// printf("%20.p -1\n", a);
// ft_printf("%20.p -2\n", a);

// printf("|%2.9p|\n", 1234);
// ft_printf("|%2.9p|\n", 1234);//debug pft2019 tests 433-434 Undef Beh

// printf("|%09s|\n", s_hidden);//debug pft2019 tests 130 Undef Beh
// ft_printf("|%09s|\n", s_hidden);// added if, условие 6 с нулем with null

// printf("%-4.0u\n");
// ft_printf("%-4.0u\n");

// printf("%-1.0u\n", a, b, l);
// ft_printf("%-1.0u\n", a, b, l);

// printf("|%*.*u|\n", -1, 0, 0);
// ft_printf("|%*.*u|\n", -1, 0, 0); // debug test42 turning width to positive

// printf("|%*.*x|\n", -1, 0, 0);
// ft_printf("|%*.*x|\n", -1, 0, 0);// debug test42 turning width to positive

// printf("|%*.*X|\n", -1, 0, 0);
// ft_printf("|%*.*X|\n", -1, 0, 0);// debug test42 turning width to positive

// printf("|%-4.0u|\n", l);
// ft_printf("|%-4.0u|\n", l);

// printf("|%1.0u|\n", 2);
// ft_printf("|%1.0u|\n", 3);

// printf("%-1.0u\n", -4, 0, 0);
// ft_printf("%-1.0u\n", -4, 0, 0);

// printf("%-1.0x\n", -4, 0, 0);
// ft_printf("%-1.0x\n", -4, 0, 0);

// printf("%-1.0X\n", -4, 0, 0);
// ft_printf("%-1.0X\n", -4, 0, 0);

// printf("%*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, \
// %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X"\
// ,a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l,\
//  a, b, l, a, b, m, a, b, m, a, b, m,\
//  a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);

//  ft_printf("%*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, \
// %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X"\
// ,a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l,\
//  a, b, l, a, b, m, a, b, m, a, b, m,\
//  a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);

// printf("%c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n",\
//  c, n[0], o[0], -a, p[0], -a, q[0], -a, r[0], -a, c);

// ft_printf("%c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n",\
//  c, n[0], o[0], -a, p[0], -a, q[0], -a, r[0], -a, c);

// printf("|%*c|, |%-*c|, |%*c|1\n",\
//  -a, p[0], -a, q[0], -a, r[0]);

// ft_printf("|%*c|, |%-*c|, |%*c|2\n",\
//  -a, p[0], -a, q[0], -a, r[0]);

// ft_printf("|%*c|, |%-*c|, |%*c|\n",\
//  -a, p[0], -a, q[0], -a, r[0]);

// printf("%c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n", c, n[0], o[0], -12, p[0], -a, q[0], -a, r[0], -a, c); //фикс от Андрея.

// ft_printf("%c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n", c, n[0], o[0], -12, p[0], -a, q[0], -a, r[0], -a, c);

// printf ("|%*c|\n", 12, 18, -a);
// ft_printf ("|%*c|\n", 12, 18, -a);

// printf ("|%*c|\n", 12, 18, p[0]);
// ft_printf ("|%*c|\n", 12, 18, p[0]);

// int z = -4;
// char *x = "-a";
// printf("|%*c|\n", -z, x[0]);
// ft_printf("|%*c|\n", -z, x[0]);

// Mharriso test undefined beh
// int a, b;
// char *s = "Happy new year!:)";
// a = printf("|NULL %4.2p$|\n", NULL);
// b = ft_printf("|NULL %4.2p$|\n", NULL);

// a = printf("%%: %*%$\n", 10);
// b = ft_printf("%%: %*%$\n", 10);// ok

// a = printf("%-40.23p$\n", NULL);
// b = ft_printf("%-40.23p$\n", NULL);

//printf lover debug
// int x = 20;

// printf("-->|%0*.*X|<--\n", 1, 2, 20);
// ft_printf("-->|%0*.*X|<--\n", 1, 2, 20);

// printf("-->|%0*.*x|<--\n", 1, 2, x); //   ==>     -->|00|<--
// ft_printf("-->|%0*.*x|<--\n", 1, 2, x); //   ==>     -->|00|<--

// printf("-->|%0*.*x|<--\n", 1, 3, x); //  ==>     -->|000|<--
// ft_printf("-->|%0*.*x|<--\n", 1, 3, x); //  ==>     -->|000|<--

// printf("-->|%0*.*x|<--\n", 1, 4, x); //  ==>     -->|0000|<--
// ft_printf("-->|%0*.*x|<--\n", 1, 4, x); //  ==>     -->|0000|<--

// printf("-->|%0*.*x|<--\n", 2, -4, x); // ==>     -->|00|<--
// ft_printf("-->|%0*.*x|<--\n", 2, -4, x); // ==>     -->|00|<--

// printf("-->|%0*.*x|<--\n", 2, -3, 5); // ==>     -->|00|<--
// ft_printf("-->|%0*.*x|<--\n", 2, -3, 5); // ==>     -->|00|<--

// printf("-->|%04.*x|<--\n", -3, 6); //  ==>     -->|  c6|<--
// ft_printf("-->|%04.*x|<--\n", -3, 6); //  ==>     -->|  c6|<--

// printf("-->|%04.*x|<--\n", -2, 7); //  ==>     -->|  c6|<--
// ft_printf("-->|%04.*x|<--\n", -2, 7); //  ==>     -->|  c6|<--

// printf("-->|%04.*x|<--\n", -1, x); //  ==>     -->|00c6|<--
// ft_printf("-->|%04.*x|<--\n", -1, x); //  ==>     -->|00c6|<--

// printf("-->|%04.*x|<--\n", 0, x);  //  ==>     -->|  c6|<--
// ft_printf("-->|%04.*x|<--\n", 0, x);  //  ==>     -->|  c6|<--

// printf("-->|%04.*x|<--\n", 1, x); //   ==>     -->|  c6|<--
// ft_printf("-->|%04.*x|<--\n", 1, x); //   ==>     -->|  c6|<--



// printf("-->|%-4.*x|<--\n", -1, 8); //    ==>     -->|0   |<--
// ft_printf("-->|%-4.*x|<--\n", -1, 8); //    ==>     -->|0   |<--

// printf("-->|%-4.*x|<--\n", 0, x);  //    ==>     -->|    |<--
// ft_printf("-->|%-4.*x|<--\n", 0, x);  //    ==>     -->|    |<--

// printf("-->|%-4.*x|<--\n", 1, x);  //    ==>     -->|0   |<--
// ft_printf("-->|%-4.*x|<--\n", 1, x);  //    ==>     -->|0   |<--

// printf("-->|%-4.*x|<--\n", 2, x);  //    ==>     -->|00  |<--
// ft_printf("-->|%-4.*x|<--\n", 2, x);  //    ==>     -->|00  |<--

// printf("-->|%-4.*x|<--\n", 3, 9);  //    ==>     -->|000 |<--
// ft_printf("-->|%-4.*x|<--\n", 3, 9);  //    ==>     -->|000 |<--

// printf("-->|%-4.3x|<--\n", x); // ==>     -->|0c6 |<--
// ft_printf("-->|%-4.3x|<--\n", x); // ==>     -->|0c6 |<--

// printf("-->|%-4.4x|<--\n", x); // ==>     -->|00c6|<--
// ft_printf("-->|%-4.4x|<--\n", x); // ==>     -->|00c6|<--

// printf("-->|%-4.3x|<--\n", x); // ==>     -->|c6 |<--
// ft_printf("-->|%-4.3x|<--\n", x); // ==>     -->|c6 |<--

// printf("-->|%-4.4x|<--\n", x); // ==>     -->|c6|<--
// ft_printf("-->|%-4.4x|<--\n", x); // ==>     -->|c6|<--

// printf("-->|%-4x|<--\n", x);   // ==>     -->|c6  |<--
// ft_printf("-->|%-4x|<--\n", x);   // ==>     -->|c6  |<--

// printf("-->|%.*x|<--\n", -1, x);  //     ==>     -->|0|<--
// ft_printf("-->|%.*x|<--\n", -1, x);  //     ==>     -->|0|<--


// printf("-->|%.*x|<--\n", 0, x);   //     ==>     -->||<--
// ft_printf("-->|%.*x|<--\n", 0, x);   //     ==>     -->||<--


// printf("-->|%.*x|<--\n", 1, x);   //     ==>     -->|0|<--
// ft_printf("-->|%.*x|<--\n", 1, x);   //     ==>     -->|0|<--

// printf("-->|%.*x|<--\n", 2, x);   //     ==>     -->|00|<--
// ft_printf("-->|%.*x|<--\n", 2, x);   //     ==>     -->|00|<--

// printf("-->|%.*x|<--\n", 3, x);   //     ==>     -->|000|<--
// ft_printf("-->|%.*x|<--\n", 3, x);   //     ==>     -->|000|<--


// int u;
// u = 5;
// printf("-->|%0*.*u|<--\n", 1, 2, u); //  ==>     -->|00|<--
// ft_printf("-->|%0*.*u|<--\n", 1, 2, u);  //  ==>     -->|00|<--

// printf("-->|%0*.*u|<--\n", 1, 3, u); //  ==>     -->|000|<--
// ft_printf("-->|%0*.*u|<--\n", 1, 3, u);  //  ==>     -->|000|<--

// printf("-->|%0*.*u|<--\n", 1, 4, u); //  ==>     -->|0000|<--
// ft_printf("-->|%0*.*u|<--\n", 1, 4, u);  //  ==>     -->|0000|<--

// printf("-->|%0*.*u|<--\n", 2, -4, u); // ==>     -->|00|<--
// ft_printf("-->|%0*.*u|<--\n", 2, -4, u); // ==>     -->|00|<--

// printf("-->|%0*.*u|<--\n", 2, -3, u); // ==>     -->|00|<--
// ft_printf("-->|%0*.*u|<--\n", 2, -3, u); // ==>     -->|00|<--

// printf("-->|%04.*u|<--\n", -3, u);  //  ==>     -->| 198|<--
// ft_printf("-->|%04.*u|<--\n", -3, u); //  ==>     -->| 198|<--

// printf("-->|%04.*u|<--\n", -2, u);  //  ==>     -->| 198|<--
// ft_printf("-->|%04.*u|<--\n", -2, u); //  ==>     -->| 198|<--

// printf("-->|%04.*u|<--\n", -1, u);  //  ==>     -->|0198|<--
// ft_printf("-->|%04.*u|<--\n", -1, u); //  ==>     -->|0198|<--

// printf("-->|%04.*u|<--\n", 0, u);   // ==>     -->| 198|<--
// ft_printf("-->|%04.*u|<--\n", 0, u);   // ==>     -->| 198|<--

// printf("-->|%04.*u|<--\n", 1, u);  //  ==>     -->| 198|<--
// ft_printf("-->|%04.*u|<--\n", 1, u);  //  ==>     -->| 198|<--

// printf("-->|%*.0%|<--\n", -1); //==>     -->|%|<--
// ft_printf("-->|%*.0%|<--\n", -1); //==>     -->|%|<--
// printf("-->|%*.0%|<--\n", 0);  //==>     -->|%|<--
// ft_printf("-->|%*.0%|<--\n", 0);  //==>     -->|%|<--
// printf("-->|%*.0%|<--\n", 1);  //==>     -->|%|<--
// ft_printf("-->|%*.0%|<--\n", 1);  //==>     -->|%|<--

// printf("-->|%*.0%|<--\n", 2);  //==>     -->| %|<--
// ft_printf("-->|%*.0%|<--\n", 2);  //==>     -->| %|<--
// printf("-->|%*.0%|<--\n", 3);  //==>     -->|  %|<--
// ft_printf("-->|%*.0%|<--\n", 3);  //==>     -->|  %|<--

// printf("-->|%*.2%|<--\n", 3);  //==>     -->|  %|<--
// ft_printf("-->|%*.2%|<--\n", 3);  //==>     -->|  %|<--// точность не учитывается
// printf("-->|%*.3%|<--\n", 3);  //==>     -->|  %|<--
// ft_printf("-->|%*.3%|<--\n", 3);  //==>     -->|  %|<--

// printf("-->|%*.4%|<--\n", 3);  //==>     -->|  %|<--
// ft_printf("-->|%*.4%|<--\n", 3);  //==>     -->|  %|<--

// printf("-->|%4.0%|<--\n");  //==>     -->|   %|<--
// ft_printf("-->|%4.0%|<--\n");  //==>     -->|   %|<--
// printf("-->|%4.0%|<--\n");  //==>     -->|000%|<--
// ft_printf("-->|%4.0%|<--\n");  //==>     -->|000%|<--


// printf("-->|%4.1%|<--\n");  //==>     -->|   %|<--
// ft_printf("-->|%4.1%|<--\n");  //==>     -->|   %|<--
// printf("-->|%4.2%|<--\n");  //==>     -->|   %|<--
// ft_printf("-->|%4.2%|<--\n");  //==>     -->|   %|<--
// printf("-->|%4.3%|<--\n");  //==>     -->|   %|<--
// ft_printf("-->|%4.3%|<--\n");  //==>     -->|   %|<--
// char *p = "Hello";

// printf("|%p|\n", p);  //==>     -->|   %|<--
// ft_printf("|%p|\n", p);  //==>     -->|   %|<--

// printf("-->|%0*.%|<--\n", -1); //==>     -->|%|<--
// ft_printf("-->|%0*.%|<--\n", -1); //==>     -->|%|<--
// printf("-->|%0*.%|<--\n", 0);  //==>     -->|%|<--
// ft_printf("-->|%0*.%|<--\n", 0);  //==>     -->|%|<--
// printf("-->|%0*.%|<--\n", 1);  //==>     -->|%|<--
// ft_printf("-->|%0*.%|<--\n", 1);  //==>     -->|%|<--
// printf("-->|%0*.%|<--\n", 2); // ==>     -->|0%|<--
// ft_printf("-->|%0*.%|<--\n", 2); // ==>     -->|0%|<--
// printf("-->|%0*.%|<--\n", 3);  //==>     -->|00%|<--
// ft_printf("-->|%0*.%|<--\n", 3);  //==>     -->|00%|<--

// printf("-->|%04.3%|<--\n");    //==>     -->|   %|<--
// ft_printf("-->|%04.3%|<--\n");    //==>     -->|   %|<--
// printf("-->|%04.4%|<--\n");   // ==>     -->|   %|<--
// ft_printf("-->|%04.4%|<--\n");   // ==>     -->|   %|<--
// printf("-->|%04%|<--\n");     // ==>     -->|000%|<--
// ft_printf("-->|%04%|<--\n");     // ==>     -->|000%|<--
// printf("-->|%--4.%|<--\n");    //==>     -->|%   |<--
// ft_printf("-->|%--4.%|<--\n");    //==>     -->|%   |<--
// printf("-->|%--4.*%|<--\n", -4);   //    ==>     -->|%   |<--
// ft_printf("-->|%--4.*%|<--\n", -4);   //    ==>     -->|%   |<--

// printf("-->|%0*.%|<--\n", 1); // ==>     -->|%|<--
// ft_printf("-->|%0*.%|<--\n", 1); // ==>     -->|%|<--

// printf("-->|%0*.%|<--\n", 2); // ==>     -->|0%|<--
// ft_printf("-->|%0*.%|<--\n", 2);

// printf("-->|%*.%|<--\n", -1); // ==>     -->|%|<--
// ft_printf("-->|%*.%|<--\n", -1); // ==>     -->|%|<--

// printf("-->|%*.%|<--\n", 0);  // ==>     -->|%|<--
// ft_printf("-->|%*.%|<--\n", 0);  // ==>     -->|%|<--

// printf("-->|%*.%|<--\n", 1);  // ==>     -->|%|<--
// ft_printf("-->|%*.%|<--\n", 1);  // ==>     -->|%|<--

// printf("-->|%*.%|<--\n", 2);  // ==>     -->| %|<--
// ft_printf("-->|%*.%|<--\n", 2);  // ==>     -->| %|<--

//procent cases

// printf("1->|%-05.3%|<--\n");  // 1
// ft_printf("-->|%-05.3%|<--\n");  // 1 ок

// printf("2->|%-05.%|<--\n");  // 2
// ft_printf("-->|%-05.%|<--\n");  // 2 ок, просто точка точности

// printf("3->|%-05.0%|<--\n");  // 2-1
// ft_printf("-->|%-05.0%|<--\n");  // 2-1, .0 ок

// printf("4->|%-05%|<--\n");  // 3
// ft_printf("-->|%-05%|<--\n");  // 3 ок

// printf("5->|%-0.3%|<--\n");  // 4
// ft_printf("-->|%-0.3%|<--\n");  // 4 ок

// printf("6->|%-0.%|<--\n");  // 4-1
// ft_printf("-->|%-0.%|<--\n");  // 4-1 точность точка

// printf("7->|%-0.0%|<--\n");  // 4-2 = 5
// ft_printf("-->|%-0.0%|<--\n");  // 4-2 = 5 точность .0 =

// printf("8->|%-0%|<--\n");  // 6 no width, no prec
// ft_printf("-->|%-0%|<--\n");  //6ок

// printf("9->|%-5.6%|<--\n");  // 7 no zero
// ft_printf("-->|%-5.3%|<--\n");  //7ок

// printf("10>|%-5.0%|<--\n");  // 8 .0 = as 7
// ft_printf("-->|%-5.0%|<--\n");  //8 precision .0 ok

// printf("11>|%-5.%|<--\n");  // 8 . = 7
// ft_printf("-->|%-5.%|<--\n");  //8 precision . ok

// printf("12>|%-5%|<--\n");  // 9
// ft_printf("-->|%-5%|<--\n");  //9 no zero ,no precision . ok

// printf("13>|%-.5%|<--\n");  // 10
// ft_printf("-->|%-.5%|<--\n");  //10 no zero ,no width . ok

// printf("14>|%-.0%|<--\n");  // 11
// ft_printf("-->|%-.0%|<--\n");  //11 no zero ,no width , .0 ok

// printf("15>|%-.%|<--\n");  // 11-1
// ft_printf("-->|%-.%|<--\n");  //11-1 no zero ,no width , .0 ok

// printf("16>|%-%|<--\n");  // 12
// ft_printf("-->|%-%|<--\n");  //12 only minus

// printf("17>|%03.5%|<--\n");  // 13
// ft_printf("-->|%03.2%|<--\n");  //13 ok

// printf("18>|%03.0%|<--\n");  // 14
// ft_printf("-->|%03.0%|<--\n");  //14 ok

// // printf("-->|%03.-5%|<--\n");  // 14-1 neg prec warning,при отриц точности, ширина определяется по точности
// // ft_printf("-->|%03.-5%|<--\n");  //14-1 ok

// printf("19>|%03.%|<--\n");  // 14-2
// ft_printf("-->|%03.%|<--\n");  //14-2

// printf("20>|%03%|<--\n");  // 15
// ft_printf("-->|%03%|<--\n");  //15

// printf("21>|%0.%|<--\n");  // 16
// ft_printf("-->|%0.%|<--\n");  //16

// printf("22>|%0.0%|<--\n");  // 17= 16
// ft_printf("-->|%0.0%|<--\n");  //17=16

// printf("23>|%0%|<--\n");  // 18
// ft_printf("-->|%0%|<--\n");  //18

// printf("25>|%3.5%|<--\n");  // 19 fixed добавили условие, что нет нуля
// ft_printf("-->|%3.8%|<--\n");  //19 нужно заполнять пробелами, не нулями

// printf("26>|%3.0%|<--\n");  // 20
// ft_printf("-->|%3.0%|<--\n");  //20  нужно заполнять пробелами, не нулями,

// printf("27>|%3.%|<--\n");  // 20-1
// ft_printf("-->|%3.%|<--\n");  //20-1  нужно заполнять пробелами, не нулями

// printf("28>|%3%|<--\n");  // 21
// ft_printf("-->|%3%|<--\n");  //21

// printf("29>|%.3%|<--\n");  // 22
// ft_printf("-->|%.3%|<--\n");  //22 ok

// printf("30>|%.0%|<--\n");  // 23
// ft_printf("-->|%.0%|<--\n");  //23 ok

// printf("31>|%.%|<--\n");  // 23-1
// ft_printf("-->|%.%|<--\n");  //23-1 ok

// printf("32>|%%|<--\n");  // 23-1
// ft_printf("-->|%%|<--\n");  //23-1 ok

// printf("33>|%%|<--\n");  // 24
// ft_printf("-->|%%|<--\n");  //24 ok




// -Printf("-->|%*.%|<--\n", 3);   ==>     -->|  %|<--

// (tail)
// +Printf("-->|%4.4%|<--\n");     ==>     -->|000%|<--
// +Printf("-->|%4%|<--\n");       ==>     -->|000%|<--
//  Printf("-->|%0.%|<--\n");      ==>     -->|%|<--
//  Printf("-->|%0.*%|<--\n", -4); ==>     -->|%|<--
//  Printf("-->|%0.*%|<--\n", -3); ==>     -->|%|<--

//  Printf("-->|%0*.%|<--\n", -2);// ==>     -->|% |<--
//  Printf("-->|%0*.%|<--\n", -1);// ==>     -->|%|<--
//  Printf("-->|%0*.%|<--\n", 0); // ==>     -->|%|<--
// -Printf("-->|%0*.%|<--\n", 1); // ==>     -->|%|<--
// -Printf("-->|%0*.%|<--\n", 2); // ==>     -->|0%|<--


// +Printf("-->|%04.3%|<--\n");   // ==>     -->|000%%|<--
// +Printf("-->|%04.4%|<--\n");   // ==>     -->|000%%|<--
// Printf("-->|%04%|<--\n");     // ==>     -->|000%|<--
// Printf("-->|%--4.%|<--\n");   // ==>     -->|%   |<--
// Printf("-->|%--4.*%|<--\n", -4); //      ==>     -->|%   |<--

sleep(100);

return (0);

}
