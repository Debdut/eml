#include "common_eml.h"

int main()
{
    int i;

    print_eml_version ();
    print_compiler_version ();

    char a[] = "111111117975327572627482597983277281819817891798798179874982798273573948759843796587457698798787";
    /*a[8] = '\0';*/
    char b[] = "91111111112384359874395792798187618481798417498732985798437598743985749687984379843769457698674645986984598956";
    /*b[9] = '\0';*/

    /*charlen (a);*/

    print_cint (add_cint (a, b));
    print_cint (max_cint (a, b));
    print_cint (min_cint (a, b));
    
    return 0;
}
