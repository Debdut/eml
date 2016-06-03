#include "common_eml.h"
#include <stdio.h>

int main()
{
    int i;

    print_eml_version ();
    print_compiler_version ();

    char a[] = "11111111797532757262748259798327728181981789179879817987498279827357394875984379658745769879878734534534534534";
    /*a[8] = '\0';*/
    char b[] = "91111111112384359874395792798187618481798417498732985798437598743985749687984379843769457698674645986984598956";
    /*b[9] = '\0';*/

    /*charlen (a);*/

    print_cint (add_cint (a, b));
	printf ("\n\n%s%s", a, "\n");
	printf ("%s%s", b, "\n");
    
    return 0;
}
