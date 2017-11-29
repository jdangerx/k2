* Everyone says, "oh, we don't have that many data types" but damn dude,
  char/int/float/double is IT
  * e.g. Elixir says "we don't have that many types: int, float, string, binary, charlist, hash, list, tuple"
  * of course there's short and long  
* what's in limit.h and float.h?
  * TYPE_MAX/TYPE_MIN for integral types (SHRT/LONG/CHAR/INT/UCHAR/SCHAR/
    UINT/ULONG/USHRT)
  * FLT_MAX/MIN (DBL too)
  * buncha other stuf
* how to compute?
  * keep doubling until you see that something's gone wrong, then back off
    * what will go wrong?
    * overflow - so the next thing isn't bigger
* weirdly, char bleh = 127, then char + 1 just gives 128. Seems like
  it tries to read off in memory and treats it like something w more
  bits than sense
  * oo maybe it happens during compilation since it's only constants
  * nope, unless the compiler got too smart
* enums can be more useful than defines because they're accessible by
  debuggers, and you don't have to come up with values on your own.
* globals are initialized once ("before execution", kind of?)
* locals are intialized exactly when you say they are
* you can pass mutable arrays as immutable ones by adding const in the
  call?
  * no, i think you add it in the declaration of the function
* what's the difference between char *s and char s[]?
