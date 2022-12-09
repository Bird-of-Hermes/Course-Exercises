// The first values are equal in scientific notation because the float-type variable has a precision of
// 6, while the double one's precision is 15.

// The decimal value of the float-type are wrong because of the same precision. The number has 10 digits
// while the float-type can only guarantee 6 numbers of accuracy. There's no right representation in memory
// for float-type values that are beyond 6 digits, so it's stores the next value closest to it in the memory.