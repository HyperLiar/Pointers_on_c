#include<stdio.h>

void print_ledger(int m) {
#ifdef OPTION_LONG
#define OK 1
    print_ledger_log(m);
#endif

#ifdef OPTION_DETAILED 
#define OK 1
    print_ledger_detailed(m);
#endif

#ifndef OK
    print_ledger_default(m);
#endif
}
