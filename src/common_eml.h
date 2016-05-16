#ifndef _EML_COMMOM_
#    define _EML_COMMOM_

    /*Checking Compiler Version*/
#    if defined (__STDC__)
#        define PREDEF_STANDARD_C_1989
#        if defined (__STDC_VERSION__)
#            define PREDEF_STANDARD_C_1990
#            if (__STDC_VERSION__ >= 199409L)
#                define PREDEF_STANDARD_C_1994
#            endif
#            if (__STDC_VERSION__ >= 199901L)
#                define PREDEF_STANDARD_C_1999
#            endif
#        endif
#    endif

    /*Defining bool Type*/
#    if defined (PREDEF_STANDARD_C_1999) && defined (_Bool)
#         #define bool _Bool
#    elif
#        define TRUE 1
#        define FALSE 0
#        define bool short int
#    endif

#endif
