#include "common_eml.h"
#include <stdio.h>

int main()
{
    print_eml_version ();
    print_compiler_version ();

    char a[] = "11111111797532757262748259798327728181981789179879817987498279827357394875984379658745769879878734534534534534";
    /*a[8] = '\0';*/
    char b[] = "91111111112384359874395792798187618481798417498732985798437598743985749687984379843769457698674645986984598956";
    /*b[9] = '\0';*/

    /*charlen (a);*/

	printf ("\n%s%s", a, "\n");
	printf ("%s%s", b, "\n");

	printf ("\n%s\n", "Sum :");
    print_cint (add_cint (a, b));
	putchar ('\n');putchar ('\n');

	char c[] = "1632487222222222222222222222222222264721984793287597435097439875984375987435897394759347547309579203750937459074309759347509734057430975074350974309750937409574309754390537097509437590743097536489329842987698343698349843986439869843769843698369837986798643674398798637698437";
    /*a[8] = '\0';*/
    char d[] = "91111111112384359874395792798187618481798417498732985798437598743985749687984379843769457698674645986984598956329849835986329865983265989823698326598698236598368952698659865986598698569856986325986983269832569863298659832659832658965329863289658923686582658965868568632563258653286";
    /*b[9] = '\0';*/

    /*charlen (a);*/

	printf ("\n%s\n", "Max :");
	print_cint (max_cint (c, d));
	putchar ('\n');
	printf ("\n%s\n", "Min :");
	print_cint (min_cint (c, d));
	putchar ('\n');
	printf ("\n%s\n", "Sum :");
    print_cint (add_cint (c, d));
	putchar ('\n');putchar ('\n');
    
    return 0;
}
