//Converting between binaryand decimal

#include <iostream>

int main()
{
    using namespace std;

   /*
   148 (decimal to binary)

   148 / 2 = 74 r0 (r =remainder)
   74  / 2 = 37 r0
   37  / 2 = 18 r1
   18  / 2 = 9  r0
   9   / 2 = 4  r1
   4   / 2 = 2  r0
   2   / 2 = 1  r0
   1   / 2 = 0  r1
   
   1001 0100

   */
   
   /*
   -5 (decimal to binary)

   0000 0101
   º¸¼ö complement
   1111 1010
   1111 1011 < -5
   
   1001 0110 ( binary to decimal)
   0110 1001
   0110 1010 - > 98 - > -98

   */   
   
   /*
   signed vs unsigned

   1001 1110 signed: -98, unsigned: 158
   */
    
    return 0;
}
