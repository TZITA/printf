#include <stdio.h>

#include <stdarg.h>

#include <stdlib.h>

#ifndef MAIN_H

#define MAIN_H



int _printf(const char *format, ...);

char *convert(unsigned int num, int base);



/**
 *
 *  * _printf - Prints all data types
 *
 *   * @format: items to be printed
 *
 *    * 
 *
 *     * Return: Nothing.
 *
 *      */



int _printf(const char *format, ...)

{

	    const char *toprint;

	        int i;

		    char *s;



		        va_list arg;

			    va_start(arg, format);



			        for(toprint = format; *toprint; toprint++)

					    {

						            if(*toprint != '%')

								            {

										                putchar(*toprint);

												            continue;

													            }

							            switch (*++toprint)

									            {

											            case 'c':

													                i = va_arg(arg, int);

															            putchar(i);

																                break;

																		        case 'd':

																		            i = va_arg(arg, int);

																			                if(i < 0)

																						            {

																								                    i = -i;

																										                    putchar('-');

																												                }

																					            fputs((convert(i, 10)), stdout);

																						                break;

																								        case 'i':

																								            i = va_arg(arg, int);

																									                if(i < 0)

																												            {

																														                    i = -i;

																																                    putchar('-');

																																		                }

																											            fputs((convert(i, 10)), stdout);

																												                break;

																														        case 's':

																														            for (s = va_arg(arg, char *); *s; s++)

																																                putchar(*s);

																															                break;

																																	        

																																	        default:

																																	            putchar(*toprint);

																																		                break;

																																				        }

								            va_end(arg);

									        }
				return (0);

}



/**
 *
 *  * convert - Converts integer to the specified base
 *
 *   * @num: Integer 
 *
 *    * @base: base 
 *
 *     * 
 *
 *      * Return: Pointer. 
 *
 *       */



char *convert(unsigned int num, int base)

{

	    char rep[] = "0123456789ABCDEF";

	        static char tmp[50];

		    char *p;



		        p = &tmp[49];

			    *p = '\0';

			        do

					    {

						            *--p = rep[num % base];

							            num /= base;

								        }while (num != 0);

				    return (p);

}



#endif
