#include <iostream>
#include "baza1.h"
#include "baza2.h"
#include "derivat.h"

using namespace std;

int main()
{
    derivat obiect(7,8);/*Constructor cls. baza1  7 Constructor baza2  8   Constructor derivat  7  8 */
    obiect.arata();  // 7 8
    obiect.seteaza(1,2);
    obiect.aratax();  // x=1
    obiect.aratay();  // y=2
    obiect.arata();  // 1 2
    /* Destructor derivat 1 2  Destructor baza2 2 Destructor baza1  1 */
    return 0;
}
